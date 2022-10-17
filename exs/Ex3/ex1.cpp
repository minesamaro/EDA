#include <iostream>
#include <math.h>

using namespace std;

/**
 Calculates the distance between two points of coordinates (x1, y1) and (x2, y2)
 @param x1 - x coordinate of the first point
 @param y1 - y coordinate of the first point
 @param x2 - x coordinate of the second point
 @param y2 - y coordinate of the second point
 @return distance value based on the formula of distance
*/
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
}

/**
 Calculates the area of a triangle, given the coordinates of the three points
 @param x1 - x coordinate of the first point
 @param y1 - y coordinate of the first point
 @param x2 - x coordinate of the second point
 @param y2 - y coordinate of the second point
 @param x3 - x coordinate of the third point
 @param y3 - y coordinate of the third point
 @return area of the triangle based on the Heron formula 
*/
double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x1, y1, x3, y3);
    double semiper = ( a + b  + c) /2;

    double area = sqrt(semiper* (semiper-a) * (semiper-b) *(semiper-c));
    
    cout << area << endl;
    
    return area;
}


int main()
{
    double x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a = area(x1, y1, x2, y2, x3, y3);

    return 0;

}