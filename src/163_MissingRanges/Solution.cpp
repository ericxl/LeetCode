//
// Created by Eric Liang on 4/5/18.
//

#include <leetcode.h>

vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
    vector<string> result;
    //if (nums.size() == 0) return result;
    vector<long>copy;
    for (int i = 0; i < nums.size(); ++i){
        copy.push_back((long)nums[i]);
    }

    copy.insert (copy.begin() , (long)lower-1 );
    copy.push_back((long)upper+1);

    int idx = 0;
    long cur = lower;
    while (idx < copy.size()){
        long next = copy[idx] - 1;
        if (next == cur){
            result.push_back(to_string(next));
        } else if (next > cur){
            result.push_back(to_string(cur) + "->"+to_string(next));
        }
        cur = copy[idx] + 1;
        ++idx;
    }

    return result;
}

int main(){

}
