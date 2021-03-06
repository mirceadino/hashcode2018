#ifndef HASHCODE2018_OUTPUT_CLASS_H
#define HASHCODE2018_OUTPUT_CLASS_H

#include <bits/stdc++.h>

using namespace std;

class Output {
public:
    Output(int num_vehicles) {
        for (int i = 0; i < num_vehicles; ++i) {
            assignments_[i] = vector<int>();
        }
    }

    void Assign(int vehicle, int ride) {
        assignments_[vehicle].push_back(ride);
    }

    void Assign(const Vehicle &vehicle, const Ride &ride) {
        assignments_[vehicle.index].push_back(ride.index);
    }

    void Assign(const Ride &ride, const Vehicle &vehicle) {
        assignments_[vehicle.index].push_back(ride.index);
    }

    void PrintToFile(const string filename) {
        freopen(filename.c_str(), "w", stdout);

        for (int i = 0; i < assignments_.size(); ++i) {
            vector<int> &rides = assignments_[i];
            printf("%d ", (int) rides.size());
            for (const auto &r: rides) {
                printf("%d ", r);
            }
            printf("\n");
        }

    }

protected:
    map<int, vector<int>> assignments_;
};


#endif //HASHCODE2018_OUTPUT_CLASS_H
