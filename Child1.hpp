#ifndef Child1_hpp
#define Child1_hpp

#include <stdio.h>
#include <string>
#include "baseAbstractClass.hpp"

class STUDENT : public BASE{
public:
    STUDENT();//Конструктор пустой
    STUDENT(std:: string name1,std:: string surname1, std:: string fathername1,int group1,std:: string speciality1,int course1,double averagScore1);
    STUDENT(int n);//Конструктор

    void showOne() override;
public:
    std :: string name;
    std :: string surname;
    std :: string fathername;
    int group;
    int course;
    double averagScore;
    std :: string speciality;
};

#endif /* Child1_hpp */
