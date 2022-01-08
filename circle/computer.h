//
// Created by pbbbbb on 2022/1/3.
//
#include <iostream>
#ifndef CIRCLE_COMPUTER_H
#define CIRCLE_COMPUTER_H


class CPU{
public:
    virtual void cal() = 0;
};

class Display{

    virtual void dis() = 0;
};

class IntelCpu : public CPU{

    virtual void cal(){

        std::cout << "intel start!!" << std::endl;
    }

};

class computer {
private:
    CPU * a;
    Display * b;
public:
    computer(CPU * a1, Display * b1){
        a = a1;
        b = b1;

    }

    void run(){
        a->cal();


    }
};



#endif //CIRCLE_COMPUTER_H
