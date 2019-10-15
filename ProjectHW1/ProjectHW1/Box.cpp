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
