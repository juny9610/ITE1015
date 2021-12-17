#include "setfunc.h"

set<int> parseSet(const string& str) {
	string input = str;
	set<int> s;
	vector<string> v;

	while(input.size() > 2) {
		size_t idx = input.find(' ');
		v.push_back(input.substr(0,idx));
		input.erase(0,idx+1);
	}
	v.push_back(input);

	for(int i = 0; i < v.size(); i++) {
		s.insert(stoi(v[i]));
	}

	return s;
}

void printSet(const set<int>& s) {
	set<int>::iterator it;
	cout << "{ ";
	for(it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << "}" << endl;
}

set<int> getIntersection(const set<int>& set0, const set<int>& set1) {
	set<int> s;
	set_intersection(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(s, s.begin()));
	return s;
}

set<int> getUnion(const set<int>& set0, const set<int>& set1) {
	set<int> s;
	set_union(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(s, s.begin()));
	return s;
}

set<int> getDifference(const set<int>& set0, const set<int>& set1) {
	set<int> s;
	set_difference(set0.begin(), set0.end(), set1.begin(), set1.end(), inserter(s, s.begin()));
	return s;
}