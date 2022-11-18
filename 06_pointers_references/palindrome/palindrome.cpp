#include<cassert>
#include<cstring>

bool palindrome_check(const char* s)
{
	int k = 0;
	int n = strlen(s) - 1;
	for (int i = 0, k = n; i <= k; i++, k--)
	{
		if (s[i] != s[k])
			return false;
	}
	return true;
}

int main()
{
	assert(palindrome_check("b") == true);
	assert(palindrome_check("uehheu") == true);
	assert(palindrome_check("super") == false);
	assert(palindrome_check("repaper") == true);
	assert(palindrome_check(nullptr) == true);
	assert(palindrome_check(" ") == true);
	return  0;
}