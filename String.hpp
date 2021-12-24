#pragma once
#include "IString.hpp"

class String : public IString
{
public:
	COMPARESTRINGS_API String();
	COMPARESTRINGS_API String(std::string str);
	COMPARESTRINGS_API int Compare(IString& str) override;
	COMPARESTRINGS_API bool Equal(IString& str) override;
	COMPARESTRINGS_API int IndexOf(char symbol) override;
	COMPARESTRINGS_API void Append(IString& str) override;
	COMPARESTRINGS_API ~String();

private:
	std::string _string;
};