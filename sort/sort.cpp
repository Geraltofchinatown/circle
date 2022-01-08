//
// Created by pbbbbb on 2022/1/7.
//

#include <iostream>
#include <string>
using namespace std;

//选择排序法
template<class T>
void selectSort(T *arr, int lens){
    T maxNum = arr[0];
    for (int i = 0; i < lens - 1; i ++){
        T currentNum = arr[i];
        for (int j = i + 1; j < lens; j ++){
            if (currentNum < arr[j]){
                T temp = currentNum;
                currentNum = arr[j];
                arr[j] = temp;
            }
        }
        if(currentNum != arr[i]){
            arr[i] = currentNum;
        }
    }
}

//冒泡排序法
template<class T>
void bubleSort(T *arr, int lens){
    for (int i = 0; i < lens - 1; i++){
        for (int j = 0; j < lens - 1 - i; j ++){
            if (arr[j] < arr[j + 1]){
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }
}

//插入排序法
template<class T>
void insertSort(T *arr, int lens){
    for (int i = 0; i < lens - 1; i++){
        for (int j = i + 1; j > 0; j --){
            if (arr[j] > arr[j - 1]){
                T temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }else break;
        }
    }
}

//打印数组内容
template<class T>
void printOut(T *arr, int lens){
    for (int i = 0; i < lens; i ++){
        cout << arr[i] << endl;
    }
}

int main(){
    char a[] = "dbcdefaerhzdfs";
    int lens = sizeof(a) / sizeof(char);
    lens --;
    //bubleSort(a, lens);
    //selectSort(a, lens);
    insertSort(a, lens);
    printOut(a, lens);
    return 0;
}