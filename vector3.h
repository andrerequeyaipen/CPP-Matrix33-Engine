#pragma once

#include<iostream>
#include<cmath>

class Point3D{
    private: 
        double x_;
        double y_;
        double z_;

    public:
        Point3D(double x=0, double y=0, double z=0): x_(x), y_(y), z_(z){}

        Point3D operator+(const Point3D& other) const;

        Point3D operator-(const Point3D& other) const;

        Point3D operator*(double scalar) const;

        Point3D operator/(double scalar) const;

        bool operator==(Point3D& other) const;

        friend std::ostream& operator<<(std::ostream& out, const Point3D& p);

        friend std::istream& operator>>(std::istream& in, Point3D& p);

        double magnitude() const;
        double& operator()(int index);
        const double& operator()(int index) const;
};