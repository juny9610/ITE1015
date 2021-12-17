#include "minesweeper.h"

using namespace std;

int x, y = 0;
int dx[8] = { -1,-1,-1,0,1,1,1,0 };
int dy[8] = { 1,0,-1,-1,-1,0,1,1 };

void getInput(string inputs, int n) {
	inputs.erase(0, n);
	int number = -1;

	for(int i = 0; i < int(inputs.size()); ++i) {
		char c = inputs[i];

		if(isdigit(c))
		{
			int num = (int)c - (int)'0';
			if(number < 0) number = num;
			else number = number * 10 + num;
		}
		else if(c == ' ') {
			x = number;
			number = -1;
		}
	}
	y = number;
}


bool Minesweeper::setMap(size_t _width, size_t _height, vector<string>& _map) {
	for(int i = 0; i < int(_height); i++) {
		string s = _map[i];

		if(s.length() != _width) return false;

		for(int j = 0; j < int(_width); j++) {
			if(s[j] != '*' && s[j] != '.') return false;
		}
	}

	for(int _y = 0; _y < int(_height); _y++) {
		for(int _x = 0; _x < int(_width); _x++) {
			char c = _map[_y].at(_x);
			int num = 0;
			if(c == '.') {
				for(int a = 0; a < 8; a++) {
					int nx = _x + dx[a];
					int ny = _y + dy[a];
					if(nx < 0 || nx >= x || ny < 0 || ny >= y) continue;
					char nc = _map[ny].at(nx);
					if(nc == '*') num++;
				}
				_map[_y].at(_x) = num + 48;
			}
		}
	}
	map.clear();
	map = _map;

	for(int i = 0; i < y; i++) {
		cout << map[i] << endl;
	}

	return true;
}

bool Minesweeper::toggleMine(int _x, int _y) {
	int h = map.size();
	int w = map[0].length();
	if(_x < 0 || _x >= w || _y < 0 || _y >= h) return false;

	char c = get(_x, _y);
	if(isdigit(c)) {
		map[_y].at(_x) = '*';

		for(int i = 0; i < 8; i++) {
            int nx = _x + dx[i];
			int ny = _y + dy[i];
			if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;

			char nc = map[ny].at(nx);

			if(nc == '*') continue;
			else if(isdigit(nc)) {
				int nnc = nc - '0' + 1;
				map[ny].at(nx) = nnc + '0';
			}
		}
	}
	else if(c == '*') {
		int num = 0;
		for(int i = 0; i < 8; i++) {
			int nx = _x + dx[i];
			int ny = _y + dy[i];
			if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;

			char nc = map[ny].at(nx);

			if(nc == '*') {
				num++;
				continue;
			}
			else if(isdigit(nc)) {
				int nnc = nc - '0' - 1;
				map[ny].at(nx) = nnc + '0';
			}
		}
		(map.at(_y)).at(_x) = num + '0';
	}
	else return false;

	int a = map.size();
	for(int i = 0; i < a; i++) {
		cout << map[i] << endl;
	}

	return true;
}

vector<string> map;

int main(void) {
	Minesweeper *minesweeper = new Minesweeper();

	while (true) {
		string inputs;
		getline(cin, inputs);

		if(inputs == ":quit") break;

		if(inputs.find(":set") != string::npos) {
			getInput(inputs, 5);
			map.clear();
			for(int i = 0; i < y; i++) {
				string s;
				cin >> s;
				map.push_back(s);
			}
			minesweeper->setMap(x, y, map);
		}

		if(inputs.find(":toggle") != string::npos) {
			getInput(inputs, 8);
            minesweeper->toggleMine(x, y);
		}
	}

	delete minesweeper;

	return 0;
}