#pragma once

#ifdef COMPARESTRINGS_EXPORTS
		#define COMPARESTRINGS_API __declspec(dllexport)
#else
		#define COMPARESTRINGS_API __declspec(dllimport)
#endif
