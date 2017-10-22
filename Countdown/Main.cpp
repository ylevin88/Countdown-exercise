#include <iostream>
#include <thread>
#include <iomanip>
using namespace std;

#define COUNTDOWN_NUM 12
#define BLINKING_TIME 5

void main()
{
	int time = 1;
	cout << "Time until takeoff:   ";
	for (size_t i = COUNTDOWN_NUM; i > 0; i--)
	{
		cout << "\b\b" << setw(2) << i;
		this_thread::sleep_for(1s);
	}
	cout << "\r                                      ";

	for (int i = BLINKING_TIME; i > 0; i--)
	{
		cout << "\r       ";
		this_thread::sleep_for(0.5s);
		cout << "\rTakeoff";
		this_thread::sleep_for(0.5s);
	}
	cout << endl;
}