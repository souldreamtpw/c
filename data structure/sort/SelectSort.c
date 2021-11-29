/*
 * @Author: souldream
 * @Date: 2021-09-06 10:45:59
 * @LastEditTime: 2021-09-27 20:55:10
 * @LastEditors: souldream
 * @Description: 选择排序
 * @FilePath: \vscode\c\data structure\sort\SelectSort.c
 * 可以输入预定的版权声明、个性签名、空行等
 */


#include <stdio.h>

void SelectSort(int data[], int n){
    int min, temp;
    for(int i=0; i<n; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(data[min] > data[j]){
                min = j;
            }
        }

        if(min != i){
            temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
    }
}


int main(){
    int data[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    SelectSort(data, 8);
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}