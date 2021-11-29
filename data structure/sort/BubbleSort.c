/*
 * @Author: souldream
 * @Date: 2021-09-06 10:46:22
 * @LastEditTime: 2021-09-27 20:55:31
 * @LastEditors: souldream
 * @Description: 冒泡算法
 * @FilePath: \vscode\c\data structure\sort\BubbleSort.c
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <stdio.h>

void BubbleSort(int data[], int n){
    int i, j, temp;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(data[i] > data[j]){
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}


int main(){
    int data[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    BubbleSort(data, 8);
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}