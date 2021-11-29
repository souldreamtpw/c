/*
 * @Author: souldream
 * @Date: 2021-09-06 10:46:30
 * @LastEditTime: 2021-09-27 20:56:20
 * @LastEditors: souldream
 * @Description: 插入排序
 * @FilePath: \vscode\c\data structure\sort\InsertSort.c
 * 可以输入预定的版权声明、个性签名、空行等
 */


#include <stdio.h>

//插入排序
void InsertSort(int data[], int n){
    int i, j ,temp;
    for(i=1; i<n; i++){
        if(data[i] < data[i-1]){
            temp = data[i];
            for(j=i-1; j>=0 && data[j]>temp; j--){
                data[j+1] = data[j];
            }
            data[j+1] = temp;
        }
    }
}

//优化——折半插入排序
void InsertSort2(int data[], int n){
    int i, j ,temp, low, high, mid;
    for(i=1; i<n; i++){
        if(data[i] < data[i-1]){
            temp = data[i];
            low = 0; 
            high = i - 1;
            while(low <= high){
                mid = (low + high) / 2;
                if(data[mid] > temp){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }

            for(j=i-1; j>=low; j--){
                data[j+1] = data[j];
            }
            data[low] = temp;
        }
    }
}


int main(){
    int data[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    InsertSort(data, 8);
    printf("insertsort:\n");
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("\n");

    int data2[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    InsertSort2(data2, 8);
    printf("insertsort2:\n");
    for(int i=0; i<8; i++){
        printf("%d ", data2[i]);
    }
    printf("\n");
    return 0;
}