//
// Created by Owner on 10/31/2017.
//

#include "Distance.h"

/*!
 * Default constructor
 * Set initial values to zero
 */
Distance::Distance()
{
    feet = 0;
    inches = 0;
}

/*!
 * Get feet
 * @return
 */
int Distance::getFeet() const
{
    return feet;
}
/*!
 * Set feet variable
 * @param feet
 */
void Distance::setFeet(int feet)
{
    Distance::feet = feet;
}
/*!
 * Get inches
 * @return
 */
float Distance::getInches() const
{
    return inches;
}
/*!
 * Set inches variable
 * @param inches
 */
void Distance::setInches(float inches)
{
    Distance::inches = inches;
}

Distance:: Distance(int f, float i)
{
    feet = f;
    inches = i;
}

Distance Distance::operator+(const Distance &d1)
{
    int tfeet;
    float tinches;
    // <obj>(itself).attribute + <obj>(you're passing in).getter
    tfeet = feet + d1.getFeet();
    tinches = inches + d1.getInches();
    if(tinches >= 12.0)
    {
        tinches -= 12.0;
        tfeet += 1;
    }
    return Distance(tfeet, tinches);
}

Distance Distance::operator+(const int i)
{
    // <obj> + const
    return Distance(feet + i, inches);
}

Distance operator+(const int i, Distance d1)
{
    return Distance(i + d1.getFeet(), d1.getInches());
}
