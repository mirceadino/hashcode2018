#include <bits/stdc++.h>

#include "base/input.h"
#include "base/output.h"
#include "base/solver.h"

#include "solver/my_solver/my_solver.h"
#include "solver/uber_solver/uber_solver.h"

using namespace std;

vector<string> filenames =
        {"a_example", "b_should_be_easy", "c_no_hurry", "d_metropolis", "e_high_bonus"};

int main(int argc, char **argv) {
    int filename_index = 4;
    if (argc > 1) {
        sscanf(argv[1], "%d", &filename_index);
    }

    const string filename = filenames[filename_index];

    Input input;
    input.ReadFromFile("./input/" + filename + ".in");

    Solver *solver = new UberSolver(input);
    solver->Solve();

    Output output = solver->GetOutput();
    output.PrintToFile("./output/" + filename + ".out");

    return 0;
}