//
// Created by Eric Liang on 4/4/18.
//

#include <leetcode.h>

vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
    vector<Interval> result;
    bool added = false;

    for (auto i : intervals){
        if (i.end < newInterval.start){
            result.push_back(i);
        } else if (i.start > newInterval.end){
            if (!added){
                result.push_back(newInterval);
            }
            result.push_back(i);
            added = true;
        } else {
            newInterval.start = min (newInterval.start, i.start);
            newInterval.end = max(newInterval.end, i.end);
        }
    }

    if (!added){
        result.push_back(newInterval);
    }
    return result;
}

int main(){

}
