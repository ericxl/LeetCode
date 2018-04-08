//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

class MovingAverage {
private:
    int window=0;
    queue<int> q;
    int sum = 0;
public:
    /** Initialize your data structure here. */
    MovingAverage(int size) {
        window = size;
    }

    double next(int val) {
        if(q.size() == window)
        {
            sum-=q.front();
            q.pop();
        }
        q.push(val);
        sum+=val;
        return sum*1.0/q.size();
    }

};

int main(){

}
