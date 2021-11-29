/*
 * @Author: souldream
 * @Date: 2021-09-06 10:45:06
 * @LastEditTime: 2021-09-27 20:54:41
 * @LastEditors: souldream
 * @Description: 快速排序
 * @FilePath: \vscode\c\data structure\sort\QuickSort.c
 * 菜鸟的学习之路
 */
#include <stdio.h>

int partititon(int data[], int low, int high){
    int pivot = data[low];

    while(low < high){
        while(low<high && data[high]>=pivot){
            high--;
        }
        data[low] = data[high];

        while(low<high && data[low]<=pivot){
            low++;
        }
        data[high] = data[low];
    }

    data[low] = pivot;

    return low;
}

void QuickSort(int data[], int low, int high){
    if(low < high){
        int pivotpos = partititon(data, low, high);
        //划分左子表
        QuickSort(data, low, high-1);
        //划分右子表
        QuickSort(data, low+1, high);
    }
}


int main(){
    int data[8] = {49, 65, 97, 76, 13, 27, 49, 10}; 
    QuickSort(data, 0, 7);
    for(int i=0; i<8; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}