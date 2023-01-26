/*
 *  File Name: lab1exe_E.cpp
 *  Assignment: ENSF 614 Lab 1 Exercise E2
 *  Lab Section: Lab B01
 *  Created by: Mahmood Moussavi
 *  Completed by: Steven Duong (30022492)
 *  Submission Date: Jan 20, 2023
 */

#include <iostream>
#include <cmath>
using namespace std;

void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr);
/*
 * Converts time in milliseconds to time in minutes and seconds.
 * For example, converts 123400 ms to 2 minutes and 3.4 seconds.
 * REQUIRES:
 *    ms_time >= 0.
 *    minutes_ptr and seconds_ptr point to variables.
 * PROMISES:
 *    0 <= *seconds_ptr & *seconds_ptr < 60.0
 *    *minutes_ptr minutes + *seconds_ptr seconds is equivalent to
 *    ms_time ms.
 */

int main(void)
{
    int millisec;
    int minutes;
    double seconds;

    cout << "Enter a time interval as an integer number of milliseconds: ";

    // printf("Enter a time interval as an integer number of milliseconds: ");
    cin >> millisec;

    // This allows the user to continuously input a number until the number is
    // positive.
    while (millisec < 0) {
        cout << "Enter a time interval as an integer number of milliseconds: ";

        // printf("Enter a time interval as an integer number of milliseconds: ");
        cin >> millisec;
    }

    if (!cin) {
        cout << "Unable to convert your input to an int.\n";
        exit(1);
    }

    cout << "Doing conversion for input of " <<  millisec <<" milliseconds ... \n", millisec;

    /* MAKE A CALL TO time_convert HERE. */
    time_convert(millisec, &minutes, &seconds);
    cout << "That is equivalent to " << minutes << " minute(s) and " << seconds << " second(s).\n";
    return 0;
}

/* PUT YOUR FUNCTION DEFINITION FOR time_convert HERE. */
void time_convert(int ms_time, int *minutes_ptr, double *seconds_ptr) {

    // Local variable mins.
    int mins = floor(ms_time / 60000);

    // Modulus ensures that:
    // 0 <= *seconds_ptr & *seconds_ptr < 60.0
    // Local variable secs.
    double secs = (ms_time % 60000)/1000.0;

    // Ensures that the minutes and seconds pointers have
    // values that add up to the total original ms_time
    // before re-assigning.
    if ((mins * 60000 + secs * 1000) == ms_time) {
        *minutes_ptr = mins; // points to local variable mins
        *seconds_ptr = secs; // points to local variable secs
    }
}
