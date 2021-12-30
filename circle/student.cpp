//
// Created by pbbbbb on 2021/12/30.
//

#include "student.h"
#include <iostream>

using namespace std;

int main () {

    student s1 ("zhangsan", 1);
    int a;
    a = s1.returnnum();
    std::cout << s1.returnmame() << std::endl;
    std::cout << s1.returnnum() << std::endl;
    return 0;
}
