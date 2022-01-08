//
// Created by pbbbbb on 2022/1/3.
//

#ifndef CIRCLE_MYPRINT_H
#define CIRCLE_MYPRINT_H
#include <string>

class myprint {
public:
    void operator() (std::string a){
       std::cout << a  << std::endl;

    }
};


#endif //CIRCLE_MYPRINT_H
