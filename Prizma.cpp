//
//  Prizma.cpp
//  training
//
//  Created by Duba on 23.04.17.
//  Copyright © 2017 Duba. All rights reserved.
//

#include <iostream>
#include "Prizma.h"
using namespace std;
void Prizma::setVolume(float set_volume){
    volume = set_volume;
}
void Prizma::setHeight(float set_height){
    height = set_height;
}
void Prizma::setFacet(float set_facet){
    facet = set_facet;
}
void Prizma::setLenght(float set_lenght){
    lenght = set_lenght;
}
void Prizma::setArea(float set_area){
    area = set_area;
}
void Prizma::getVolume(){
    cout<<"Volume = "<<volume<<endl;
}
void Prizma::getHeight(){
    cout<<"Height = "<<height<<endl;
}
void Prizma::getFacet(){
    cout<<"Facet = "<<facet<<endl;
}

void Prizma::getLenght(){
    cout<<"lenght = "<<lenght<<endl;
}
void Prizma::getArea(){
    cout<<"Area = "<<area;
}
