//
// Created by pbbbbb on 2021/12/30.
//

#include "square.h"

int main(){

    square s1(2, 3, 4);
    //square s2(2, 5, 4);
    square s2(s1);
    std::cout << sizeof (s1) << std::endl;
    s1.addSquare(s2).addSquare(s2).addSquare(s2);
    std::cout << s1.computeV() << std::endl;
    std::cout << outerComputeV(s1) << std::endl;
    allGetLength(s1);
    isSame(s1, s2);
    return 0;
}