/*
 *  File Name: lab1exe_B.cpp
 *  Assignment: ENSF 614 Lab 1 Exercise B
 *  Lab Section: Lab B01
 *  Created by: Mahmood Moussavi
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Jan 20, 2023
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

int main(void)
{
    double velocity;

    cout << "Please enter the velocity at which the projectile is launched (m/sec): ";
    cin >> velocity;

    if(!cin)  // means if cin failed to read
    {
        cout << "Invalid input. Bye...\n";
        exit(1);
    }

    while (velocity < 0 )
    {
        cout << "\nPlease enter a positive number for velocity: ";
        cin >> velocity;
        if(!cin)
        {
            cout << "Invalid input. Bye...";
            exit(1);
        }
    }

    create_table(velocity);
    return 0;
}

// Creates a table with 3 columns which represents the angle in degrees,
// time in seconds and distance in meters.
void create_table(double v) {
    int size = 90/5;
    int angles_d[size];

    cout << "Angle\t\t" << "t\t\t\t" << "d" << endl;
    cout << "(deg)\t\t" << "(sec)\t\t" << "(m)" << endl;

    for (int i = 0; i <= size; i++) {
        angles_d[i] = 5*(i);

        cout << fixed;
        cout << setprecision(5);

        cout << angles_d[i] << "\t\t\t" << Projectile_travel_time(angles_d[i], v) << "\t\t" <<
        Projectile_travel_distance(angles_d[i], v) << endl;
    }
}

// Calculates the travel time for the projectile.
double Projectile_travel_time(double a, double v) {

    double rad = degree_to_radian(a);
    return (2*v*sin(rad))/G;
}

// Calculates the travel distance for the projectile.
double Projectile_travel_distance(double a, double v) {

    double rad = degree_to_radian(a);
    return abs((pow(v,2)/G)*sin(2*rad));
}

// Converts degrees to radians.
double degree_to_radian(double d) {

    return d * (PI/180);
}

