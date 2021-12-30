//
// Created by pbbbbb on 2021/12/30.
//
#include <string>
#ifndef CIRCLE_STUDENT_H
#define CIRCLE_STUDENT_H


class student {
private:
    std::string name;
    int num;


public:
    student(std::string namein, int numin)
    : name(namein), num(numin)
    {}

    std::string returnmame() const {return name;}
    int returnnum() const {return num;}

    void setName(std::string name){
        this->name = name;
    }

    void setNum(int num1){
        num = num1;
    }
};


#endif //CIRCLE_STUDENT_H
