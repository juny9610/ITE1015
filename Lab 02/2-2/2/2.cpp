#include <iostream>
using namespace std;

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    char name[7];
    Point points[3];
} Person;

int main(void) {

    Person p1, p2, p3;
    pair<double, double> m1 = make_pair(0,0), m2 = make_pair(0,0), m3 = make_pair(0,0);

    cin >> p1.name;
    for(int i = 0; i < 3; i++) {
        cin >> p1.points[i].x >> p1.points[i].y;
        if(abs(p1.points[i].x) + abs(p1.points[i].y) > abs(m1.first) + abs(m1.second)) 
            m1 = make_pair(p1.points[i].x, p1.points[i].y);
    }

    cin >> p2.name;
    for(int i = 0; i < 3; i++) {
        cin >> p2.points[i].x >> p2.points[i].y;
        if(abs(p2.points[i].x) + abs(p2.points[i].y) > abs(m2.first) + abs(m2.second)) 
            m2 = make_pair(p2.points[i].x, p2.points[i].y);
    }

    cin >> p3.name;
    for(int i = 0; i < 3; i++) {
        cin >> p3.points[i].x >> p3.points[i].y;
        if(abs(p3.points[i].x) + abs(p3.points[i].y) > abs(m3.first) + abs(m3.second)) 
            m3 = make_pair(p3.points[i].x, p3.points[i].y);
    }

    cout << p1.name << " ";
    cout << "(" << m1.first << ", " << m1.second << ")" << endl;

    cout << p2.name << " ";
    cout << "(" << m2.first << ", " << m2.second << ")" << endl;

    cout << p3.name << " ";
    cout << "(" << m3.first << ", " << m3.second << ")" << endl;

    return 0;
}
