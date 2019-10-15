/*
   Box.cpp
   By:Jared Maltos
   Created: 10/13/2019
   CS 202: Homework 01
   Purpose: .cpp file for Box
   Details: Put Box.hpp, Box.cpp, and boxtest.cpp into a project to work
*/

#include "Box.hpp"
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <ostream>
using std::ostream;

//gets width
int Box::getWidth() const {
	return _width;
}

//sets width
void Box::setWidth(int width) {
	_width = width;
}

//gets height
int Box::getHeight() const {
	return _height;
}

//sets height
void Box::setHeight(int height) {
	_height = height;
}

//default constructor: 1 x 1 filled box
Box::Box() {
	_width = 1;

	_height = 1;

	_filled = true;
}

//parameterized constructor: filled
Box::Box(int width, int height) {
	_width = width;

	_height = height;

	_filled = true;
}
