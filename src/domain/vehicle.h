#ifndef HASHCODE2018_VEHICLE_H
#define HASHCODE2018_VEHICLE_H

#include <bits/stdc++.h>

class Vehicle {
public:
    Vehicle(int index = -1, int x = 0, int y = 0) : index(index), x(x), y(y), time(0) {}

    int index;
    int x;
    int y;
    int time;

};

#endif //HASHCODE2018_VEHICLE_H
