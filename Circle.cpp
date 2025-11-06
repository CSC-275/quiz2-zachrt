//
// Created by administrator on 11/5/25.
//
#include "cmath"
#include "iostream"
#include "Circle.h"

using namespace std;

Circle::Circle()
{
    m_radius=1;
    m_m_area=3.14;
}

Circle::Circle(double radius)
{
    m_radius=radius;

    calcArea(radius);
}

void Circle::display()
{
    cout<<"The area of a circle with ..."<<endl;
    cout<<"a radius of "<<m_radius<<" inches"<<endl;
    cout<<"has an area of "<<m_m_area<<" square inches."<<endl;
}

void Circle::calcArea(double radius)
{
    m_m_area = 3.14 * pow(radius,2);
}



