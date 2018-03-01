#ifndef HASHCODE2018_INPUT_CLASS_H
#define HASHCODE2018_INPUT_CLASS_H

#include <bits/stdc++.h>
#include "../domain/map.h"
#include "../domain/vehicle.h"
#include "../domain/ride.h"

using namespace std;

class Vehicle;

class Ride;

class Input {
public:
    Input() {}

    void ReadFromFile(const string filename) {
        freopen(filename.c_str(), "r", stdin);

        int R, C, F, N, B, T;
        scanf("%d%d%d%d%d%d", &R, &C, &F, &N, &B, &T);
        map_ = Map(R, C);

        for (int i = 0; i < N; ++i) {
            int a, b, x, y, s, f;
            scanf("%d%d%d%d%d%d", &a, &b, &x, &y, &s, &f);
            Ride ride(i, a, b, x, y, s, f);
            rides_.push_back(ride);
        }

        bonus_ = B;
        num_steps_ = T;
    }

    Map getMap() const { return map_; }

    vector<Ride> getRides() const { return rides_; }

    int getBonus() const { return bonus_; }
    int B() const { return getBonus(); }
    int getB() const { return getBonus(); }

    int getNumSteps() const { return num_steps_; }
    int T() const { return getNumSteps(); }
    int getT() const { return getNumSteps(); }

protected:
    Map map_;
    vector<Ride> rides_;
    int bonus_;
    int num_steps_;
};


#endif //HASHCODE2018_INPUT_CLASS_H
