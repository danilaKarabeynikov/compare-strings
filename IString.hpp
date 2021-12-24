#pragma once
#include "CompareStringsApi.hpp"
#include "stdafx.h"
#include <exception>
#include <vector>

struct IString
{
	COMPARESTRINGS_API virtual int Compare(IString& str) = 0;/*Сравнение строк в лексикографическом порядке*/
	COMPARESTRINGS_API virtual bool Equal(IString& str) = 0;/*проверка равенства строк*/
	COMPARESTRINGS_API virtual int IndexOf(char symbol) = 0;/*индекс символа строки*/
	COMPARESTRINGS_API virtual void Append(IString& str) = 0;
	COMPARESTRINGS_API ~IString() = default;
};