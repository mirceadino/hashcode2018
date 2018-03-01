//
// Created by Mircea Popoveniuc on 01/03/2018.
//

#include "my_solver.h"

void MySolver::Solve() {
    const Input input = this->input_;
    Output &output = this->output_;

    for (int i = 0; i < 10; ++i) {
        output.Assign(i, 2 * i + 1);
    }
}

