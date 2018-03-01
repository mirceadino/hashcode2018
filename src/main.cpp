#include <bits/stdc++.h>

#include "base/input.h"
#include "base/output.h"
#include "base/solver.h"

#include "solver/my_solver/my_solver.h"

using namespace std;

vector<string> filenames =
        {""};

int main(int argc, char **argv) {
    int filename_index = 0;
    if (argc > 1) {
        sscanf(argv[1], "%d", &filename_index);
    }

    const string filename = filenames[filename_index];

    Input input;
    input.ReadFromFile("input/" + filename);

    Solver *solver = new MySolver(input);
    solver->Solve();

    Output output = solver->GetOutput();
    output.PrintToFile("output/" + filename);

    return 0;
}