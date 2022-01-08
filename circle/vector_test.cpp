//
// Created by pbbbbb on 2022/1/5.
//
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;
class person{
private:
    string name;
    int age;
public:
    person(string n, int a)
    :name(n), age(a)
    {}

    inline int getAge(){return age;}
};
int main(){

    vector<person> v1;
    person p1("a", 10);
    person p2("a", 20);
    person p3("a", 30);
    person p4("a", 40);
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);


    for(vector<person>::iterator it = v1.begin(); it != v1.end(); it++){
        cout << (*it).getAge() << endl;
    }

    return 0;
}