//
//  Prizma.h
//  training
//
//  Created by Duba on 23.04.17.
//  Copyright © 2017 Duba. All rights reserved.
//
#include<iostream>

class Prizma{
private:
    float volume; // объем
    float height; // высота
    float facet;  //количество граней
    float lenght; //длина сторон
    float area;   //площадь основания
public:
    void setVolume(float);
    void setHeight(float);
    void setFacet(float);
    void setLenght(float);
    void setArea(float);
    void getVolume();
    void getHeight();
    void getFacet();
    void getLenght();
    void getArea();
};


