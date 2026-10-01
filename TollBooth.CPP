#include <iostream>
#include <conio.h> 
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

   
    void nopayCar() {
        totalCars++;
    }

   
    void display() const {
        cout << "===================================" << endl;
        cout << "       TOLL BOOTH FINAL REPORT     " << endl;
        cout << "===================================" << endl;
        cout << "Total Cars Passed : " << totalCars << endl;
        cout << "Total Cash" << totalCash << endl;
        cout << "===================================" << endl;
    }
};

int main() {
    TollBooth booth;
    char ch;

    cout << "=== TollBooth System ===" << endl;
    cout << "Press 'P' or 'p' -> Paying Car" << endl;
    cout << "Press 'N' or 'n' -> Non-Paying Car" << endl;
    cout << "Press 'ESC' key  -> Exit and Show Report\n" << endl;

    do {
        ch = _getch();
        if (ch == 'p' || ch == 'P') {
            booth.payingCar();
            cout << "Paying Car recorded." << endl;
        } else if (ch == 'n' || ch == 'N') {
            booth.nopayCar();
            cout << " Non-Paying Car recorded." << endl;
        }
    } while (ch != 27); 

    booth.display();

    return 0;
}