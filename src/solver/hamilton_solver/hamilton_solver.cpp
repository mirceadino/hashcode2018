//
// Created by Mircea Popoveniuc on 01/03/2018.
//

#include "hamilton_solver.h"

namespace {
    int GetDistance(pair<int, int> a, pair<int, int> b) {
        return abs(a.first - b.first) + abs(a.second - b.second);
    }
}

void HamiltonSolver::Solve() {
    const Input input = this->input_;
    Output &output = this->output_;

    auto rides = input.getRides();
    vector<bool> viz(rides.size());

    for (int i = 0; i < input.getNumVehicles(); ++i) {
        int time = 0;
        int x = 0;
        int y = 0;

        while (time < input.getNumSteps()) {
            int best_ride = -1;
            int best_distance = 1 << 30;
            int best_x = 1 << 30;
            int best_y = 1 << 30;
            int best_time = 1 << 30;
            for (const auto &ride: rides) {
                if (viz[ride.index]) {
                    continue;
                }
                int curr_distance = GetDistance(make_pair(x, y), ride.start_intersection);
                int arrival_time = time + curr_distance;
                int ride_distance = GetDistance(ride.start_intersection, ride.finish_intersection);
                int finish_time = max(arrival_time, ride.earliest_start) + ride_distance;
                if (finish_time > ride.latest_finish) {
                    continue;
                }
                if (curr_distance < best_distance) {
                    best_distance = curr_distance;
                    best_ride = ride.index;
                    best_x = ride.finish_intersection.first;
                    best_y = ride.finish_intersection.second;
                    best_time = finish_time;
                }
            }

            if (best_ride != -1) {
                output.Assign(i, best_ride);
                viz[best_ride] = 1;
                x = best_x;
                y = best_y;
                time = best_time;
            } else {
                break;
            }
        }
    }

}

