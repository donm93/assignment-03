/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Dong Kim Ben Blazak <donm93@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Classes representing shapes in a Euclidean plane.
 */

#ifndef SHAPES_H
#define SHAPES_H
// ----------------------------------------------------------------------------

#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H

class Shape{	

	public:
		Shape();
		float get_area();

	private:
		float area, perimeter;

};

#endif 

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

