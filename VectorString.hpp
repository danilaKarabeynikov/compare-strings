#pragma once

#include "IString.hpp"

class VectorString : public IString
{
public:
	COMPARESTRINGS_API VectorString(const std::string str);
	COMPARESTRINGS_API VectorString();
	COMPARESTRINGS_API int Compare(IString& str) override;
	COMPARESTRINGS_API bool Equal(IString& str) override;
	COMPARESTRINGS_API int IndexOf(char symbol) override;
	COMPARESTRINGS_API void Append(IString& str) override;	
	COMPARESTRINGS_API ~VectorString();

private:
	std::vector<char> _string;
};