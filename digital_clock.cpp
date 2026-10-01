#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:

    Time() : hours(0), minutes(0), seconds(0) {}

   
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    
    void display() const {
        cout << setfill('0') << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }

   
    void addTime(const Time& t1, const Time& t2) {
        int totalSec = t1.seconds + t2.seconds;
        int totalMin = t1.minutes + t2.minutes + (totalSec / 60);
        
        seconds = totalSec % 60;
        minutes = totalMin % 60;
        hours = t1.hours + t2.hours + (totalMin / 60);
    }
};

int main() {
  
    const Time t1(2, 45, 50);
    const Time t2(1, 20, 30);
    Time t3; 

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

   
    t3.addTime(t1, t2);

    cout << "Summed Time (t3): ";
    t3.display();

    return 0;
}