#include <iostream>
#include <string>
#include "HeshTable.h"

using namespace std;

int c = 0;
int arr[4] = {145, 134, 78, 65};

//Грубая реализация
string HeshFunction(string x) {

	string arr1[] { "apple", "plum", "tomato", "potato" };

	for (size_t i = 0; i < 4; i++) {
		c = c + 1;
		if (x == arr1[i]) {
			string s = to_string(arr[i]);
			return s;
		}
		else if (c == 4) {
			string s = "Don't find";
			return s; 
		}
	}   
}


int main()
{
	
	return 0;
}
