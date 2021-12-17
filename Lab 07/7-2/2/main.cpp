#include "setfunc.h"

int main(void) {

	while(true) {
		string inputs;
		getline(cin, inputs);

		if(inputs == "0") break;

		int index = inputs.find("}");
		string input1 = inputs.substr(2,index-3);
		inputs.erase(0,index+2);

		index = inputs.find("{");
		string op = inputs.substr(0,index-1);
		inputs.erase(0,index+2);

		index = inputs.find("}");
		string input2 = inputs.substr(0,index-1);

		set<int> set0 = parseSet(input1);
		set<int> set1 = parseSet(input2);

		set<int> s;
		if(op == "+") s = getUnion(set0, set1);
		else if(op == "-") s = getDifference(set0, set1);
		else if(op == "*") s = getIntersection(set0, set1);
		
		printSet(s);
	}
	return 0;
}