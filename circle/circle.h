//
// Created by pbbbbb on 2021/12/29.
//

#ifndef CIRCLE_CIRCLE_H
#define CIRCLE_CIRCLE_H
const static double PI = 3.14;

class circle{

private:
    const double r;

public:
    circle (const double re=0)
            : r(re)
    {}

    //compute circumference
    double round() const {return 2 * PI * r;}

    //overloaded operater

};

std::ostream& operator<< (std::ostream& o, circle& c){

    o << c.round() << std::endl;
    return o;

}


//masssttter
#endif //CIRCLE_CIRCLE_H
