#include "charlist.h"

using namespace std;

int main(void) {

	while(true) {
		string input;
		cin >> input;

		const char* c = input.c_str();

		if(input == "quit") break;

		CharList *CL = new CharList(c);

		bool check = CL->CheckPalindrome();
		cout << boolalpha << check << endl;
	}


	return 0;
}