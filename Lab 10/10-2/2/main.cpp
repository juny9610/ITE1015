#include <iostream>
#include <vector>
#include "clocks.h"

using namespace std;

int main() {
    int alarm;
    vector <int> alarm_times;
    for(int i = 0; i < 5; i++) {
        cin >> alarm;
        alarm_times.push_back(alarm);
    }

    int second;
    cin >> second;

    vector <Clock*> objects;
    
    objects.push_back(new SundialClock(0,0,0));
    objects.push_back(new CuckooClock(0,0,0));
    objects.push_back(new GrandFatherClock(0,0,0));
    objects.push_back(new WristClock(0,0,0));
    objects.push_back(new AtomicClock(0,0,0));

    for(int i = 0; i < objects.size(); i++) objects[i]->reset();
    cout << "Reported clock times after resetting:" << endl;

    for(int i = 0; i < objects.size(); i++) objects[i]->displayTime();
    cout << endl << "Running the clocks..." << endl << endl;

    for(int i = 0; i < objects.size(); i++) objects[i]->displayAlarm(alarm_times[i]);
    cout << endl;

    for(int i = 0; i < second; i++) {
        for(int i = 0; i < objects.size(); i++) {
            objects[i]->tick();
        }
    }
    cout << "Reported clocks times after running:" << endl;

    for(int i = 0; i < objects.size(); i++) {
        objects[i]->displayTime();
        delete objects[i];
    }

    return 0;
}