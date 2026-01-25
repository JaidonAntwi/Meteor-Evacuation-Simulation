#include <iostream>
#include <cstdlib>
#include <string>
#include "MeteorEvacuationFunctions.h"

using namespace std;

int main() {
    char choice;

    do {
        //system("CLS");

        double size, distance, speed, time;
        string status;

        getMeteorData(size, distance);
        calculateMeteorPhysics(size, distance, speed, time);
        status = getEvacuationStatus(time);
        displayResults(size, distance, speed, time, status);

        cout << "\nEnter Y to run again, any other key to quit. ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
