#include <iostream>
#include "shapes.h"

using namespace std;

int main(void) {
    double pi = 3.14;

    char c;                  // shape type
    double x, y, r;          // for circle
    double x1, y1, x2, y2;   // for rectangle

    while(!(c == 'Q')) {
        cout << endl << "shape?" << endl;
        cin >> c;
        if(c == 'C') {
            cin >> x >> y >> r;
            Circle C;
            C.setInfo(x,y,r);
            C.getArea();
            C.getPerimeter();
            C.print();
        }
        
        if(c == 'R') {
            cin >> x1 >> y1 >> x2 >> y2;
            Rectangle R;
            R.setInfo(x1, y1, x2, y2);
            R.getArea();
            R.getPerimeter();
            R.print();
        }

        if(c == 'Q') break;
        
    }


    return 0;
}