#ifndef HASHCODE2018_SOLVER_H
#define HASHCODE2018_SOLVER_H

#include <bits/stdc++.h>
#include "input.h"
#include "output.h"

using namespace std;

class Solver {
public:
    Solver(Input input) : input_(input), output_(input.getNumVehicles()) {}

    virtual

    void Solve() = 0;

    Output GetOutput() {
        return output_;
    }

protected:
    Input input_;
    Output output_;
};

#endif //HASHCODE2018_SOLVER_H
