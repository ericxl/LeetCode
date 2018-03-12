//
// Created by Eric Liang on 3/10/18.
//

#include <leetcode.h>

vector<Interval> merge(vector<Interval>& intervals) {
    vector<Interval> result;
    if (intervals.size() == 0) return result;
    std::sort(intervals.begin(), intervals.end(), [](Interval a, Interval b) {
        return a.start < b.start;
    });

    int start = intervals[0].start;
    int end = intervals[0].end;
    for (int i = 1; i < intervals.size(); ++i) {
        Interval inte = intervals[i];
        if (inte.start <= end && inte.end > end){
            end = inte.end;
        }
        else if (inte.start > end){
            Interval inv(start,end);
            result.push_back(inv);
            start = inte.start;
            end = inte.end;
        }

    }
    result.push_back(Interval(start, end));
    return result;
}

int main(){

}