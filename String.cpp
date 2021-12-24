#include "stdafx.h"
#include "String.hpp"

String::String()
	:_string("")
{}

String::String(std::string str)
	:_string(str)
{}

String::~String()
{}

int String::Compare(IString& str)
{
	if (_string.size() == dynamic_cast<String &>(str)._string.size())
	{
		for (int i = 0; i < _string.size(); ++i)
		{
			if (_string[i] > dynamic_cast<String &>(str)._string[i])
			{
				return 1;
			}
			if (_string[i] < dynamic_cast<String &>(str)._string[i])
			{
				return -1;
			}
		}
		return 0;
	}
	else if (_string.size() < dynamic_cast<String &>(str)._string.size())
	{
		return -1;
	}
	return 1;
}

int String::IndexOf(char symbol)
{
	return _string.find(symbol);
}

bool String::Equal(IString& str)
{
	return this->Compare(str) == 0;
}

void String::Append(IString& str)
{
	for (int i = 0; i < dynamic_cast<String &>(str)._string.size(); ++i)
	{
		_string.push_back(dynamic_cast<String &>(str)._string[i]);
	}
}