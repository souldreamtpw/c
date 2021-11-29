/*
 * @Author: souldream
 * @Date: 2021-09-06 10:45:44
 * @LastEditTime: 2021-09-27 20:59:52
 * @LastEditors: souldream
 * @Description: 归并排序
 * @FilePath: \vscode\c\data structure\sort\MergeSort.c
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <stdio.h>
#include <stdlib.h>

int *B;

void Merage(int data[], int low, int mid, int high){
    int i, j, k;
    for(k=low; k<=high; k++){
        B[k] = data[k];
    }

    for(i=low, j=mid+1, k=i; i<=mid && j<=high; k++){
        if(B[i] <= B[j]){
            data[k] = B[i++];
        }
        else{
            data[k] = B[j++];
        }
    }

    while(i<=mid){
        data[k++] = B[i++];
    }

    while(j<=high){
        data[k++] = B[j++];
    }
}

void MergeSort(int data[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;
        MergeSort(data, low, mid);
        MergeSort(data, mid+1, high);
        Merage(data, low, mid, high);
    }
}


int main(){
    B = (int *)malloc(8*sizeof(int));
    int data[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    MergeSort(data, 0, 7);
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}