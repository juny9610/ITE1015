#include <iostream>
#include <iomanip>
#include "clocks.h"

using namespace std;

Clock::Clock(int hour, int minute, int second, double driftPerSecond){
	this->_clockTime.setTime(hour, minute, second, 1);
	this->_driftPerSecond = driftPerSecond;
	this->_totalDrift = 0;
}

void Clock::reset() { this->_clockTime.reset(); }
void Clock::tick() {
	_clockTime.increment();
	_totalDrift += _driftPerSecond;
}

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}

SundialClock::SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, 0.0) {}

void SundialClock::displayTime() {
	cout<< "SundialClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift << endl;
}

void SundialClock::displayAlarm(int alarm) {
	cout << "Sundial alarm at ";
	int hour = 0, minute = 0, second = 0;
	second = alarm%60; alarm=alarm/60;
	minute = alarm%60; hour=alarm/60;
	cout << right << setw(2) << setfill('0') << hour   << ":"
       << right << setw(2) << setfill('0') << minute << ":" 
       << right << setw(2) << setfill('0') << second << endl;
}

CuckooClock::CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.0) {}

void CuckooClock::displayTime() {
	cout<< "CuckooClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift << endl;
}

void CuckooClock::displayAlarm(int alarm) {
	cout << "Cuckkoo alarm at ";
	int hour = 0, minute = 0, second = 0;
	second = alarm%60; alarm=alarm/60;
	minute = alarm%60; hour=alarm/60;
	cout << right << setw(2) << setfill('0') << hour   << ":"
       << right << setw(2) << setfill('0') << minute << ":" 
       << right << setw(2) << setfill('0') << second << endl;
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second,0.000694444) {}

void GrandFatherClock::displayTime() {
	cout<< "GrandFatherClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift << endl;
}

void GrandFatherClock::displayAlarm(int alarm) {
	cout << "GrandFatherClock alarm at ";
	int hour = 0, minute = 0, second = 0;
	second = alarm%60; alarm=alarm/60;
	minute = alarm%60; hour=alarm/60;
	cout << right << setw(2) << setfill('0') << hour   << ":"
       << right << setw(2) << setfill('0') << minute << ":" 
       << right << setw(2) << setfill('0') << second << endl;
}

WristClock::WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second,0.000347222) {}

void WristClock::displayTime() {
	cout<< "WristClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift << endl;
}

void WristClock::displayAlarm(int alarm) {
	cout << "WristClock alarm at ";
	int hour = 0, minute = 0, second = 0;
	second = alarm%60; alarm=alarm/60;
	minute = alarm%60; hour=alarm/60;
	cout << right << setw(2) << setfill('0') << hour   << ":"
       << right << setw(2) << setfill('0') << minute << ":" 
       << right << setw(2) << setfill('0') << second << endl;
}

AtomicClock::AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second,0.000034722) {}

void AtomicClock::displayTime() {
	cout<< "AtomicClock ";
	_clockTime.display();
	cout<< ", total drift: " << _totalDrift << endl;
}

void AtomicClock::displayAlarm(int alarm) {
	cout << "AtomicClock alarm at ";
	int hour = 0, minute = 0, second = 0;
	second = alarm%60; alarm=alarm/60;
	minute = alarm%60; hour=alarm/60;
	cout << right << setw(2) << setfill('0') << hour   << ":"
       << right << setw(2) << setfill('0') << minute << ":" 
       << right << setw(2) << setfill('0') << second << endl;
}