#pragma once
#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape 
{
protected:
	float _area;
	float _perimeter;

public:
	Shape();
	virtual float get_area() const = 0;

};

#endif	// __SHAPE_H__
