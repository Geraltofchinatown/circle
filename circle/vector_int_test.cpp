//
// Created by pbbbbb on 2022/1/6.
//
#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v){
    for(vector<int>::const_iterator it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }


}
int main(){


    vector<int> v, v3;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }
    vector<int> v2(v.begin(), v.end());
    printVector(v2);
    v3.assign(v.begin(), v.end());
    return 0;
}