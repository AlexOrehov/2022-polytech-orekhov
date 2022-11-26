#include "String.h"
#include <iostream>


using namespace std;


int main() {
	String frst = "clock"; // the first string
	String scnd = " wise:"; // the second string
	String thrd = frst + scnd; // Summa
	cout << thrd << '\t' << thrd.get_length() << endl;
	return 0;
}