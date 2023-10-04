#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double s;
    double v;
    double jarak;
    double sinA;

    cin >> s;
    cin >> v;
    sinA = sin(2 * s * 3.141 / 180) * 10 ;
    jarak = v * sinA / 10;
    cout <<fixed<<setprecision(1)<< jarak << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}

