#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "dictionary.h"

#include <string>
#include <doctest.h>

TEST_CASE("something") 
{

	HashTable<std::string> d1;
	d1.insert("first", "hash");
	d1.insert("second", "hsah");

	CHECK_EQ(d1.size(), 2);
	CHECK_EQ(d1.get("first"), "hash");

}