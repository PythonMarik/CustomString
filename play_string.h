#pragma once

#include <string.h>

class play_string
{
private:
	char* buf = nullptr;    //указатель на массив чаров
	unsigned int size = 0;  //длина строки (без '0/')
	
public:
	play_string() : buf(nullptr), size(0) {}  //дефолт конструктор 
	play_string(const char* str);		      //конструктор из C-строки
	~play_string();                        	  //дефолт деструктор
};
