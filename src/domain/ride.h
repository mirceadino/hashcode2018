#ifndef HASHCODE2018_RIDE_H
#define HASHCODE2018_RIDE_H

#include <bits/stdc++.h>

using namespace std;

class Ride {
public:
    Ride(int index = -1, int a = 0, int b = 0, int x = 0, int y = 0, int earliest_start = 0, int latest_finish = 0)
            : index(index), start_intersection({a, b}), finish_intersection({x, y}), earliest_start(earliest_start),
              latest_finish(
                      latest_finish) {}

    int index;
    pair<int, int> start_intersection;
    pair<int, int> finish_intersection;
    int earliest_start;
    int latest_finish;
};

#endif //HASHCODE2018_RIDE_H
