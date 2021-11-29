/*
 * @Author: souldream
 * @Date: 2021-09-06 10:45:29
 * @LastEditTime: 2021-09-27 20:55:22
 * @LastEditors: souldream
 * @Description: 希尔排序
 * @FilePath: \vscode\c\data structure\sort\ShellSort.c
 * 可以输入预定的版权声明、个性签名、空行等
 */

#include <stdio.h>

void ShellSort(int data[], int n){
    int d, i, j, temp;
    for(d=n/2; d>=1; d=d/2){
        for(i=d; i<n; i++){
            if(data[i] < data[i-d]){
                temp = data[i];
                for(j=i-d; j>=0 && data[j]>temp; j-=d){
                    data[j+d] = data[j];
                }
                data[j+d] = temp;
            }
        }
    }
}

int main(){
    int data[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    ShellSort(data, 8);
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}