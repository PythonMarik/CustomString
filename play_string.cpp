#include "play_string.h"

play_string::play_string(const char* str)
{
	size = strlen(str);
	buf = new char[size + 1]; // +1 for '0/'
	strcpy_s(buf, size + 1, str);
}

play_string::play_string(const play_string& other)
{
	size = other.size;
	buf = new char[size + 1];
	strcpy_s(buf, size + 1, other.buf);
}

play_string::~play_string()
{
	delete[] buf;
}
