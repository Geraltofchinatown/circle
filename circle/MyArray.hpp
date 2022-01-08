//
// Created by pbbbbb on 2022/1/5.
//

#ifndef CIRCLE_MYARRAY_HPP
#define CIRCLE_MYARRAY_HPP

#include <iostream>
using namespace std;

template<class T>
class MyArray {
private:
    T * pAddress;
    int m_Cappacity;
    int m_Size;

public:
    MyArray(int capp){
        this->m_Cappacity = capp;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Cappacity];
    }
    MyArray(const MyArray& arr){
        this->m_Cappacity = arr.m_Cappacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[this->m_Size];
        for(int i=0; i< this->m_Size; i++){
            this->pAddress[i] = arr.pAddress[i];
        }
    }
    ~MyArray(){
        if(this->pAddress != NULL){
            delete this->pAddress;
            this->pAddress = NULL;
        }

    }

    inline MyArray& operator= (MyArray& arr){
        if(this->pAddress != NULL){
            delete this->pAddress;
            this->pAddress = NULL;
            this->m_Size = 0;
            this->m_Cappacity = 0;
        }
        this->m_Cappacity = arr.m_Cappacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[this->m_Size];
        for(int i=0; i< this->m_Size; i++){
            this->pAddress[i] = arr.pAddress[i];
        }

    }
};



}

#endif //CIRCLE_MYARRAY_HPP
