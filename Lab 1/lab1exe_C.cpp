/*
 * lab1exe_C.cpp
 * ENSF 614 - Lab 1 - Execise C
 * An exercise to help you understand the use of pointer variables.
 * Created by Mahmood Moussavi
 * Completed by: Steven Duong (30022492)
 */

#include <iostream>
using namespace std;

int main(void)
{
    int foo;
    int bar;
    int *fred;
    int *sam;

    bar = 100;
    foo = 200;
    fred = &foo;

    /* point one */

    cout << "point one: foo is " << foo << " and bar is " << bar << ".\n";
    sam = &bar;
    *sam += 30;
    *fred -= 40;

    /* point two */

    cout << "point two: foo is " << foo << " and bar is " << bar << ".\n";
    fred = &bar;
    *fred += 5;

    /* point three */

    cout << "point three: foo is " << foo << " and bar is " << bar << ".\n";
    cout << "point three: *foo is " << *fred << " and *sam is " << *sam << ".\n";
    sam = &foo;
    *sam = *fred;

    /* point four */

    cout << "point four: foo is " << foo << " and bar is " << bar << ".\n";
    *sam *= 100;
    sam = fred;

    /* point five */
    cout << "point five: foo is " << foo << " and bar is " << bar << ".\n";
    cout << "point five: *foo is " << *fred << " and *sam is " << *sam << ".\n";
    //printf("point five: *fred is %d and *sam is %d.\n", *fred, *sam);
    return 0;
}
