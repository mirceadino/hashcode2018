//
// Created by Mircea Popoveniuc on 01/03/2018.
//

#ifndef HASHCODE2018_HAMILTON_SOLVER_H
#define HASHCODE2018_HAMILTON_SOLVER_H

#include <bits/stdc++.h>
#include "../../base/solver.h"

class HamiltonSolver : public Solver {
public:
    HamiltonSolver(const Input &input) : Solver(input) {}

    void Solve();
};

#endif //HASHCODE2018_HAMILTON_SOLVER_H
