#include <iostream>
#include "circle.h"
#include "myprint.h"
using namespace std;
int main() {

    circle a (3);
    myprint my;
    my("lolololool");
    cout << a << endl;
    cout << a;
    //std::cout << a.round() << std::endl;

    return 0;
}
