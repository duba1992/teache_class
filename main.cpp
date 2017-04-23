//
//  main.cpp
//  training
//
//  Created by Duba on 23.04.17.
//  Copyright © 2017 Duba. All rights reserved.
//

#include "Prizma.h"
#include <iostream>
using namespace std;
int main(){
    int choice = 1;
    float set_volume = 0.0, set_height = 0.0, set_facet = 0.0,set_lenght = 0.0,set_area = 0.0;
    Prizma a;
    a.setVolume(set_volume);
    a.setHeight(set_height);
    a.setFacet(set_facet);
    a.setLenght(set_lenght);
    a.setArea(set_area);
    
    while(choice){
        cout<<"Make your choice"<<endl;
        cin>>choice;
        switch (choice) {
            case 0:{
                choice = 0;
                break;
            }
            case 1:{
                a.getHeight();
                break;
            }
            case 2:{
                a.getFacet();
                break;
            }
            case 3:{
                a.getArea();
                break;
            }
            case 4:{
                a.getLenght();
                break;
            }
            case 5:{
                a.getVolume();
                break;
            }
            case 6:{
                cin>>set_volume;
                a.setHeight(set_volume);
                break;
            }
            case 7:{
                cin>>set_lenght;
                a.setLenght(set_lenght);
                break;
            }
            case 8:{
                cout<<
                cin>>set_facet;
                a.setFacet(set_facet);
                break;
            }
            case 9:{
                cout<<"Enter area"<<endl;
                cin>>set_area;
                a.setArea(set_area);
                break;
            }
            default:{
                cout<<"Wrong choice,please wait and enter your choice"<<endl;
                for(int i = 0;i<200;i++){
                    
                }
                break;
        }
    }
        
    }

    
    
    
    
    
    
}


