//
// Created by Mircea Popoveniuc on 01/03/2018.
//

#include "my_solver.h"

void MySolver::Solve() {
    const Input input = this->input_;
    Output &output = this->output_;

    int num_vehicles = input.getNumVehicles();
    int num_rides = input.getRides().size();
    for (int i = 0; i < num_vehicles && i < num_rides; ++i) {
        output.Assign(i, i);
    }
}

