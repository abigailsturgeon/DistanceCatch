//
// Created by Owner on 10/31/2017.
//

#ifndef DISTANCE_DISTANCE_H
#define DISTANCE_DISTANCE_H

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance();

    Distance(int f, float i);

    int getFeet() const;
    void setFeet(int feet);

    float getInches() const;
    void setInches(float inches);

    Distance operator +(const Distance &d1);

    Distance operator +(const int i);
};
Distance operator +(const int i, Distance d1);

#endif //DISTANCE_DISTANCE_H
