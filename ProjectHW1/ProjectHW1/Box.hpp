/*
   Box.hpp
   By: Jared Maltos
   Created: 10/13/2019
   CS 202: Homework 01
   Purpose: .hpp file for Box
   Details: Put Box.hpp, Box.cpp, and boxtest.cpp into a project to work
*/

#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>
#include <string>
using std::string;

#include <ostream>
using std::ostream;


//class box
class Box {

public:
	int getWidth() const; //accessor fucntion width

	int getHeight() const; //accessor function height

	void setWidth(int width); //mutator function width

	void setHeight(int height); //mutator function height 

	string type() const; //returns filled or hollow box

	void print(ostream & obj) const; //member function returns either the string "Filled" or "Hollow"

	Box(); //default constructor: 1 x 1 box

	Box(int width, int height); //parameterized constuctor: filled

	Box(int width, int height, bool filled); //parameterized constuctor: hollow

	~Box(); //destructor

private:
	int _width;

	int _height;

	bool _filled;

};

#endif

//end of file
