/*
 * @Author: souldream
 * @Date: 2021-09-06 10:46:07
 * @LastEditTime: 2021-09-27 20:55:56
 * @LastEditors: souldream
 * @Description: 堆排序
 * @FilePath: \vscode\c\data structure\sort\HeapSort.c
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <stdio.h>

void HeadAdjust(int data[], int k, int len){
    int temp = data[k];

    for(int i=2*k+1; i<=len; i=2*i+1){
        //printf("%d\n", i);
        if(i<len && data[i]<data[i+1]){
            i++;
        }

        if(temp >= data[i]){
            break;
        }
        else{
            data[k] = data[i];
            k = i;
        }
    }

    data[k] = temp;

}

void BuildMaxHeap(int data[], int len){
    for(int i=len/2; i>=0; i--){
        HeadAdjust(data, i, len);
    }
}

void HeapSort(int data[], int len){
    BuildMaxHeap(data, len);
    int temp;

    for(int i=len; i>0; i--){
        temp = data[0];
        data[0] = data[i];
        data[i] = temp;

        HeadAdjust(data, 0, i-1);
    }
}


int main(){
    int data[8] = {53, 17, 78, 9, 45, 65, 87, 32}; 
    HeapSort(data, 7);
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}