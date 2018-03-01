#ifndef HASHCODE2018_RIDE_H
#define HASHCODE2018_RIDE_H

#include <bits/stdc++.h>

using namespace std;

class Ride {
public:
    Ride(int index = -1, int a, int b, int x, int y, int earliest_start, int latest_start)
            : index(index), start_intersection({a, b}), finish_intersection({x, y}), earliest_start(earliest_start),
              latest_start(
                      latest_start) {}

    int index;
    pair<int, int> start_intersection;
    pair<int, int> finish_intersection;
    int earliest_start;
    int latest_start;
};

#endif //HASHCODE2018_RIDE_H
