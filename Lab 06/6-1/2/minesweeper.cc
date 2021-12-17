#include "minesweeper.h"

using namespace std;

Minesweeper::Minesweeper() {
	map.push_back("");
}

Minesweeper::~Minesweeper() {
	map.clear();
}

size_t Minesweeper::width() const {
	return map[0].length();
}

size_t Minesweeper::height() const {
	return map.size();
}

char Minesweeper::get(int _x, int _y) const {
	if(_x >= int(width()) || _y >= int(height()) || _x < 0 || _y < 0) return ' ';
	else return map[_y].at(_x);
}