//
// Created by Eric Liang on 4/10/18.
//

#include <leetcode.h>

static bool compare(Interval& interval1, Interval& interval2) {
    return interval1.start < interval2.start;
}
bool overlap(Interval& interval1, Interval& interval2) {
    return interval1.end > interval2.start;
}

bool canAttendMeetings(vector<Interval>& intervals) {
    sort(intervals.begin(), intervals.end(), compare);
    int n = intervals.size();
    for (int i = 0; i < n - 1; i++)
        if (overlap(intervals[i], intervals[i + 1]))
            return false;
    return true;
}

int main(){

}
