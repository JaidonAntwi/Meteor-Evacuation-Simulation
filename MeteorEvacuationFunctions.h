#ifndef METEOREVACUATIONFUNCTIONS_H_INCLUDED
#define METEOREVACUATIONFUNCTIONS_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

using namespace std;

// Declare and initialize handle globally
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void getMeteorData(double &size, double &distance) {
    do {
        cout << "Enter meteor diameter in meters: ";
        cin >> size;
        if (size <= 0)
            cout << "Invalid input. Please enter a value greater than 0.\n";
    } while (size <= 0);

    do {
        cout << "Enter distance from ISS in miles: ";
        cin >> distance;
        if (distance <= 0)
            cout << "Invalid input. Please enter a value greater than 0.\n";
    } while (distance <= 0);
}

void calculateMeteorPhysics(double size, double distance, double &speed, double &time) {
    speed = size * 120;
    time = (distance / speed) * 60;
}

string getEvacuationStatus(double time) {
    if (time <= 45)
        return "Evacuation CANNOT BE COMPLETED";
    else if (time <= 90)
        return "Evacuation is POSSIBLE";
    else
        return "Evacuation is PROBABLE";
}

void displayResults(double size, double distance, double speed, double time, const string& status) {
    cout << fixed << setprecision(2);
    cout << "\nMeteor Data:\n";
    cout << "\tDiameter in meters: " << size << " meters" << endl;
    cout << "\tDistance from ISS: " << distance << " miles" << endl;
    cout << "\tSpeed in mph: " << speed << " mph" << endl;
    cout << "\tTime to Impact: " << time << " minutes\n" << endl;

    // Set color based on status
    if (status == "Evacuation CANNOT BE COMPLETED")
        SetConsoleTextAttribute(hConsole, 12); // Bright red
    else if (status == "Evacuation is POSSIBLE")
        SetConsoleTextAttribute(hConsole, 14); // Bright yellow
    else if (status == "Evacuation is PROBABLE")
        SetConsoleTextAttribute(hConsole, 10); // Bright green

    cout << "Evacuation Status: " << status << endl;

    // Reset console color
    SetConsoleTextAttribute(hConsole, 15);
}

#endif // METEOREVACUATIONFUNCTIONS_H_INCLUDED
