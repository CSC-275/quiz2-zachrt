//
// Created by administrator on 11/5/25.
//

#ifndef QUIZ2_ZACHRT_CIRCLE_H
#define QUIZ2_ZACHRT_CIRCLE_H

class Circle
{
private:
    double m_radius;
protected:
    double m_m_area;
    void calcArea(double radius);
public:
    Circle();
    Circle(double radius);

    void display();
};

#endif //QUIZ2_ZACHRT_CIRCLE_H