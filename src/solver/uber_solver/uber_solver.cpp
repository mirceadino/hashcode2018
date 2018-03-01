//
// Created by Mircea Popoveniuc on 01/03/2018.
//

#include "uber_solver.h"

namespace {
    int GetDistance(pair<int, int> a, pair<int, int> b) {
        return abs(a.first - b.first) + abs(a.second - b.second);
    }
}

void UberSolver::Solve() {
    const Input input = this->input_;
    Output &output = this->output_;

    auto rides = input.getRides();
    sort(rides.begin(), rides.end(), [](const Ride &a, const Ride &b) {
        return a.earliest_start < b.earliest_start;
    });

    vector<Vehicle> vehicles;
    for (int i = 0; i < input.getNumVehicles(); ++i) {
        Vehicle vehicle(i, 0, 0);
        vehicles.push_back(vehicle);
    }

    for (const auto &ride : rides) {
        int distance = GetDistance(ride.start_intersection, ride.finish_intersection);
    }

//    for (int i = 0; i < num_vehicles && i < num_rides; ++i) {
//        output.Assign(i, i);
//    }
}

