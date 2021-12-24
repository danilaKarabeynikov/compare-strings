#include "pch.h"
#include "../CompareStrings/String.hpp"
#include "../CompareStrings/VectorString.hpp"

TEST(IndexOf, StringTest)
{
	String str("nohomo");

	ASSERT_TRUE(str.IndexOf('n') == 0);
}

TEST(Compare, StringTest)
{
	String str("nohomo");
	String newStr("avadacedavra");

	ASSERT_TRUE(str.Compare(newStr) == -1);

	ASSERT_TRUE(newStr.Compare(str) == 1);
}

TEST(Equal, StringTest)
{
	String str("nohomo");
	String newStr("nohomosexual");

	ASSERT_FALSE(str.Equal(newStr));
}

TEST(Append, StringTest)
{
	String str("a");
	String newStr("b");
	String eq("ab");

	str.Append(newStr);

	ASSERT_TRUE(str.Equal(eq));
}

