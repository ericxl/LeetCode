//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

int minMeetingRooms(vector<Interval>& intervals) {
    sort(intervals.begin(), intervals.end(), [](Interval &i, Interval &j){return i.start < j.start;});
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for(auto interval : intervals){
        if(!min_heap.empty() && min_heap.top() <= interval.start) min_heap.pop();
        min_heap.push(interval.end);
    }
    return min_heap.size();
}

int main(){

}
