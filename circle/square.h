//
// Created by pbbbbb on 2021/12/30.
//
#include <iostream>
#ifndef CIRCLE_SQUARE_H
#define CIRCLE_SQUARE_H


class square {
private:
    int height;
    int width;
    int length;
    friend void allGetLength(const square& s);

public:
    square(int h=0, int w=0, int l=0)
    : height(h), width(w), length(l)
    {}

    int getLength() const {return length;}
    int getWidth() const {return width;}
    int getHeight() const {return height;}

    int computeV(){
        return length * width * height;
    }

    square& addSquare(const square& s);
};

inline square& square::addSquare(const square& s){
    this->length += s.getLength();
    this->width += s.getWidth();
    this->height += s.getHeight();
    return *this;
}

int outerComputeV(square& s){
    return s.getHeight() * s.getLength() *s.getWidth();
}

void allGetLength(const square& s){
    std::cout << s.length << std::endl;

}
void isSame(square& s1, square& s2){
    if((s1.getWidth() == s2.getWidth())&&(s1.getLength() == s2.getLength())&&(s1.getHeight() == s2.getHeight())){
        std::cout << "same" << std::endl;
    }else{
        std::cout << "not same" << std::endl;
    }
}


#endif //CIRCLE_SQUARE_H
