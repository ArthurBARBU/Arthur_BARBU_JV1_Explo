#ifndef exam.cpp
#define exam.cpp

#include "exam.h"
#include <iostream>


Destinations::Destinations() : int_numero(1), _nomDestination("Mars")
{

}


void Destinations::afficher()  
{
    
    std::cout << "Lune", "Mars" << _numero << std::endl;
    
}


#endif