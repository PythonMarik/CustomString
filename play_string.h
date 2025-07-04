#pragma once

#include <string.h>

class play_string
{
private:
	char* buf = nullptr;    //��������� �� ������ �����
	unsigned int size = 0;  //����� ������ (��� '0/')
	
public:
	play_string() : buf(nullptr), size(0) {}  //������ ����������� 
	play_string(const char* str);		      //����������� �� C-������
	~play_string();                        	  //������ ����������
};
