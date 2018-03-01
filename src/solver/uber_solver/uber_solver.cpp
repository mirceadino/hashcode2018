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

    double average_earliest_start = 0;
    double average_distance = 0;
    for (const Ride &ride:rides) {
        average_earliest_start += ride.earliest_start;
        average_distance += GetDistance(ride.start_intersection, ride.finish_intersection);
    }

    double p = 0.0;

    sort(rides.begin(), rides.end(), [p, average_earliest_start, average_distance](const Ride &a, const Ride &b) {
        if (a.earliest_start == b.earliest_start) {
            return GetDistance(a.start_intersection, a.finish_intersection) >
                   GetDistance(b.start_intersection, b.finish_intersection);
        }
        return a.earliest_start < b.earliest_start;
    });

//    for (int i = 1; i < rides.size(); ++i) {
//        int mlc = rand() % 3;
//        if (mlc == 0) {
//            swap(rides[i - 1], rides[i]);
//        }
//    }

    int D = 50;
    for (int i = 0; i < rides.size(); i += 5) {
        random_shuffle(rides.begin() + i, min(rides.begin() + i + D, rides.end()));
    }

    vector<Vehicle> vehicles;
    for (int i = 0; i < input.getNumVehicles(); ++i) {
        Vehicle vehicle(i, 0, 0);
        vehicles.push_back(vehicle);
    }
    srand(time(0));

    for (const auto &ride : rides) {
        int ride_time = GetDistance(ride.start_intersection, ride.finish_intersection);

        int best_arrival_time = 1 << 30;
        int best_vehicle_index = -1;
        int best_finish_time = -1;
        int best_ride_time = -1;
        for (auto &vehicle : vehicles) {
            int arrival_time = vehicle.time + GetDistance(make_pair(vehicle.x, vehicle.y), ride.start_intersection);
            int finish_time = max(arrival_time, ride.earliest_start) + ride_time;
            if (finish_time > ride.latest_finish) {
                continue;
            } else {
                if (arrival_time < best_arrival_time) {
                    best_arrival_time = arrival_time;
                    best_vehicle_index = vehicle.index;
                    best_finish_time = finish_time;
                    best_ride_time = ride_time;
                }
            }
        }

        if (best_vehicle_index != -1) {
            output.Assign(best_vehicle_index, ride.index);
            Vehicle updated_vehicle = Vehicle(best_vehicle_index, ride.finish_intersection.first,
                                              ride.finish_intersection.second);
            updated_vehicle.time = best_finish_time + 1;
            vehicles[best_vehicle_index] = updated_vehicle;
        }
    }
}

