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
        int ride_time = GetDistance(ride.start_intersection, ride.finish_intersection);

        int best_arrival_time = 1 << 30;
        int best_vehicle_index = -1;
        for (auto &vehicle : vehicles) {
            int arrival_time = max(vehicle.time + GetDistance(make_pair(vehicle.x, vehicle.y), ride.start_intersection),
                                   ride.earliest_start);
            if (arrival_time + ride_time > ride.latest_start) {
                continue;
            } else {
                if (arrival_time < best_arrival_time) {
                    best_arrival_time = arrival_time;
                    best_vehicle_index = vehicle.index;
                }
            }
        }

        if (best_vehicle_index != -1) {
            output.Assign(best_vehicle_index, ride.index);
            Vehicle updated_vehicle = Vehicle(best_vehicle_index, ride.finish_intersection.first,
                                              ride.finish_intersection.second);
            vehicles[best_vehicle_index] = updated_vehicle;
        }
    }
}

