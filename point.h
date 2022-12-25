#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#ifndef POINT_H
#define POINT_H
#endif // !POINT_H

/*
  Examples of classes, inheritance, overloading, overriding,   
  static binding, and dynamic binding
  with classes Point2D and Point3D.

  Not an example of polymorphism.
*/



using namespace std;

/*
  Base class Point2D represents a point in two dimensional space
*/
static const double ZERO = 0.0;
class Point2D {

public:

    /*
      Static data members have to be initialized when declared.
      Static data memebers are usually declared const (constant),
      because the values should not be changed (Principle of Least Privilege)
    */
    

    /*
      Overloaded constructor with zero parameters
    */
    Point2D() {
        //initialize the data members
        x = ZERO;
        y = ZERO;
        //cout<<*this<<endl;
    }

    /*
      Overloaded constructor with two parameters
    */
    Point2D(double x2, double y2) {
        //initialize the data members
        x = x2;
        y = y2;
        //cout<<*this<<endl;
    }

    //set (mutator) functions
    void setX(double x2) {
        x = x2;
    }

    void setY(double y2) {
        y = y2;
    }

    //get (accessor) functions   
    double getX() {
        return x;

    }

    double getY() {
        return y;
    }

    /*
      Returns the distance from point (0,0).
      Can be the magnitude of a vector or length of a line.
    */
    double distance() {
        return sqrt(x * x + y * y);
    } 
    
    double distance(Point2D a) {
        return sqrt(a.x * a.x + a.y * a.y);
    }
    double distance(Point2D a,Point2D b) {
        /*return sqrt(a.x * a.x + a.y * a.y);*/
        return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
    }

    //friend function for overloading output operator<<()
    friend ostream& operator<<(ostream& output, const Point2D& point) {
        output << "(" << point.x << ", " << point.y << ")";
        return output;
    }

    //data members represent two points in space
protected:
    double x;
    double y;
};

/*
  Derived class Point3D represents a podouble in three dimensional space
*/
class Point3D :public Point2D {

public:
    /*
      Overloaded constructor with zero parameters
    */
    Point3D() :Point2D() {
        //initialize data member
        z = ZERO;
        //cout<<*this<<endl;
    }

    /*
      Overloaded constructor with three parameters
    */
    Point3D(double x2, double y2, double z2) :Point2D(x2, y2) {
        //initialize data member
        z = z2;
        //cout<<*this<<endl;
    }

    //set (mutator) functions
    void setZ(double z2) {
        z = z2;
    }

    //get (accessor) functions       
    double getZ() {
        return z;
    }

    //overridden function, returns the distance from point (0,0,0)
    double distance() {
        return sqrt(x * x + y * y + z * z);
    }
    double distance(Point3D a) {
        return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
    }
    double distance(Point3D a, Point3D b) {
        /*return sqrt(a.x * a.x + a.y * a.y);*/
        return sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)) + ((b.z - a.z) * (b.z - a.z)));
    }

    //Operator Overload
    Point3D operator = (Point3D const& obj)
    {
        Point3D c;
        c.x = obj.x;
        c.y = obj.y;
        c.z = obj.z;
        return c;

    }

    Point3D addpoint(Point3D a, Point3D b)
    {
        Point3D c;
        c.x = a.x + b.x;
        c.y = a.y + b.y;
        c.z = a.y + b.z;
        return c;
    }

    Point3D vectp3D(Point3D origin, double azimuth, double inclination, double distance)
    {
        Point3D B;
        B.x = (origin.x+(distance * sin(azimuth)*cos(inclination)));
        B.y = (origin.y+ (distance * sin(inclination)));
        B.z = (origin.z+(distance * cos(azimuth) * cos(inclination)));

        return B;
                
    }              
    
    //friend function for overloading output operator<<()
    friend ostream& operator<<(ostream& output, const Point3D& point) {
        output << "(" << point.x << ", " << point.y << ", " << point.z << ")";
        return output;
    }

    /*
      Data members represent three points in space.
      Points x and y are inherited from Point2D.
    */
protected:
    double z;
};



/*
point = (3, 4, 5)
7.07107
*pointer2D = (3, 4)
5
*pointer3D = (3, 4, 5)
7.07107

*/

//
//
//template< typename T, int Dimensions = 2 >
//class point
//{
//public:
//    double xPos;
//    double yPos;
//    double zPos;
//    typedef typename T value_type;
//
//    point() { std::fill(elements_, elements_ + Dimensions, 0); }
//    point(const point& rhs) : elements_(rhs.elements_) {}
//    virtual ~point() {}
//
//
//    point& operator=(const point& rhs) { return *this; }
//
//    point operator+(const point& p)
//    {
//        point<T, Dimensions> ret;
//
//        for (int i = 0; i < Dimensions; i++)
//        {
//            ret[i] += elements_[i] + p[i];
//        }
//
//        return ret;
//    }
//
//    point& operator+=(const point& p)
//    {
//        for (int i = 0; i < Dimensions; i++)
//        {
//            elements_[i] += p[i];
//        }
//
//        return *this;
//    }
//
//    point& operator-=(const point& p)
//    {
//        for (int i = 0; i < Dimensions; i++)
//        {
//            elements_[i] -= p[i];
//        }
//
//        return *this;
//    }
//
//    T& operator[](const size_t index)
//    {
//        return elements_[index];
//    }
//
//    const T& operator[](const size_t index) const
//    {
//        return elements_[index];
//    }
//
//private:
//    T elements_[Dimensions];
//};
//
//
//template<typename T>
//class point2D : public point<T, 2>
//{
//public:
//
//    point2D()
//    {
//    }
//
//    point2D(const point2D& rhs) : point<T, 2>(rhs)
//    {
//    }
//
//    point2D(const T x, const T y)
//    {
//        (*this)[0] = x;
//        (*this)[1] = y;
//    }
//};
//
//template<typename T>
//class point3D : public point<T, 3>
//{
//public:
//
//    point3D()
//    {
//    }
//
//    point3D(const point3D& rhs) : point<T, 3>(rhs)
//    {
//    }
//
//    point3D(const T x, const T y, const T z)
//    {
//        (*this)[0] = x;
//        (*this)[1] = y;
//        (*this)[2] = z;
//    }
//};
//
//
//typedef point2D< int > point2Di;
//typedef point3D< int > point3Di;
//
//


//point_H_

