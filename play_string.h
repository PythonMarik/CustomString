#pragma once

#include <string.h>

class play_string
{
private:
	char* buf = nullptr;    //pointer to arr of chars
	unsigned int size = 0;  //len of string (without '0/')
	
public:
	play_string() : buf(nullptr), size(0) {}  //default constructor
	play_string(const char* str);		      //constructor with C-string
	play_string(const play_string& other);	  //copy constructor 
	~play_string();                        	  //default destructor
};
