//
// Created by pbbbbb on 2022/1/7.
//

//
// Created by pbbbbb on 2022/1/7.
//

#include <iostream>
#include <string>
using namespace std;

//寻找 >= value的最左值
template<class T>
int findLeft(T *arr, int values, int lens) {
    int L = 0;
    int R = lens - 1;
    int mid,index = 0;
    while(L <= R){
        mid = L + ((R - L) >> 1);
        if(arr[mid] >= values){
            index = mid;
            R = mid - 1;
        }else{
            L = mid + 1;
        }
    }
    return index;
}

int main(){
    int a[] = {2,3,3, 3, 3,6,7,9,13,46,756};
    int lens = sizeof(a) / sizeof(int);
    cout << findLeft(a, 3, lens) << endl;
    return 0;
}