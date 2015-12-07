/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Classes representing shapes in a Euclidean plane.
 */

#ifndef SHAPES_H
#define SHAPES_H
// ----------------------------------------------------------------------------

#include "point.h"

class Shape {
    public:
        virtual ~Shape() {}
        virtual bool contains(const Point & p) const = 0;  // pure virtual
};

// ----------------------------------------------------------------------------

class Rectangle : public Shape{

	public:
		Rectangle(float width, float length);
		float get_area();
		float get_perimeter();

	private:
		float width, length;

};

#endif 

class Square : public Rectangle {
    public:
        Square(Point center = Point(), float side = 0);
};

// ----------------------------------------------------------------------------

class Ellipse : public Shape {
    private:
        Point f1;
        Point f2;
        float radius;

    public:
        Ellipse(Point f1 = Point(), Point f2 = Point(), float radius = 0);

        bool contains(const Point & p) const;
};

class Circle : public Ellipse {
    public:
        Circle(Point center = Point(), float radius = 0);
};

// ----------------------------------------------------------------------------
#endif  // SHAPES_H

