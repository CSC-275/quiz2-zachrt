#include <iostream>
#include <cmath>
#include <iomanip>

// #include "Circle.h"
// #include "Cylinder.h"

using namespace std;

class Circle {
private:
    double m_radius;
protected:
    double m_m_area;
    void calcArea(double radius)
    {
        m_m_area = M_PI * pow(radius,2);
    }
public:
    Circle()
    {
        m_radius=1;
        calcArea(1);
    };

    Circle(double radius)
    {
        m_radius=radius;

        calcArea(radius);
    }

    void display() {
        cout<<fixed<<setprecision(2);
        cout<<"The area of a circle with ..."<<endl;
        cout<<"a radius of "<<m_radius<<" inches"<<endl;
        cout<<"has an area of "<<m_m_area<<" square inches."<<endl;
    };
};

class Cylinder : public Circle {
private:
    double m_height;
    double m_volume;

    void calcVolume(double r, double h)
    {
        m_volume = M_PI * pow(r, 2) * h;
    };
public:
    Cylinder(double radius, double height):Circle(radius){
        m_height=height;

        calcVolume(radius, height);
    };
    void display()
    {
        cout<<"And the volume of a Cylinder with..."<<endl;
        cout<<"a circular end area of "<<m_m_area<<" square inches"<<endl;
        cout<<"and a height of "<<m_height<<" inches"<<endl;
        cout<<"has a volume of "<<m_volume<<" cubic inches"<<endl;
    };
};

int main() {
    Circle c1, c2(5.25);
    c1.display();
    cout<<endl;
    c2.display();
    cout<<endl;
    Cylinder *cl1 = new Cylinder(3.5,8.65);
    cl1->display();
    return 0;
}
