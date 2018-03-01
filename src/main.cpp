#include <bits/stdc++.h>

#include "base/input.h"
#include "base/output.h"
#include "base/solver.h"

#include "solver/my_solver/my_solver.h"

using namespace std;

int main(int argc, char **argv) {
    Input input;
    input.ReadFromFile("");

    Solver *solver = new MySolver(input);
    solver->Solve();

    Output output = solver->GetOutput();
    output.PrintToStd();

    return 0;
}