#include <iostream>
#include <cctype>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
   
    Angle() : degrees(0), minutes(0.0), direction('N') {}


    Angle(int d, float m, char dir) {
        setAngle(d, m, dir);
    }

    void setAngle(int d, float m, char dir) {
        dir = toupper(dir);
        if (dir != 'N' && dir != 'S' && dir != 'E' && dir != 'W') {
            cout << "Invalid Direction! Defaulting to N.\n";
            direction = 'N';
        } else {
            direction = dir;
        }

        if (d < 0 || d > 180) {
            cout << "Invalid Degrees (0-180 expected)! Defaulting to 0.\n";
            degrees = 0;
        } else {
            degrees = d;
        }

        if (m < 0.0 || m >= 60.0) {
            cout << "Invalid Minutes (0-59.9 expected)! Defaulting to 0.0.\n";
            minutes = 0.0;
        } else {
            minutes = m;
        }
    }

    
    void getAngle() {
        int d;
        float m;
        char dir;
        cout << "Degrees (0-180) enter karein: ";
        cin >> d;
        cout << "Minutes (0-59.9) enter karein: ";
        cin >> m;
        cout << "Direction (N/S/E/W) enter karein: ";
        cin >> dir;
        setAngle(d, m, dir);
    }

    void display() const {
        cout << degrees << "\xF8" << minutes << "' " << direction;
    }
};

int main() {
    cout << "=== Angle Class Test ===" << endl;

   
    Angle lat(17, 31.5, 'S');
    Angle lon(149, 34.8, 'W');

    cout << "Ship Position: ";
    lat.display();
    cout << ", ";
    lon.display();
    cout << endl;

  
    cout << "\n--- Custom Input Test ---" << endl;
    Angle userAngle;
    userAngle.getAngle();
    cout << "Entered Angle: ";
    userAngle.display();
    cout << endl;

    return 0;
}