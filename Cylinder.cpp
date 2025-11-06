//
// Created by administrator on 11/5/25.
//

#include "cmath"
#include "iostream"
#include "Cylinder.h"

using namespace std;

Cylinder::Cylinder(double radius, double height):Circle(radius)
{
    m_height=height;

    Cylinder::calcVolume(radius, height);
}

void Cylinder::calcVolume(double r, double h)
{
    m_volume = 3.14 * pow(r, 2) * h;
}

void Cylinder::display()
{
    Circle::display();
    cout<<"And the volume of a Cylinder with..."<<endl;
    cout<<"a circular end area of "<<m_m_area<<" square inches"<<endl;
    cout<<"and a height of "<<m_height<<" inches"<<endl;
    cout<<"has a volume of "<<m_volume<<" cubic inches"<<endl;
}


