//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    if (nums.size() == 0){
        return result;
    }
    nums.push_back(-1);
    int start = nums[0];
    int last = nums[0];
    int idx = 1;
    while (idx < nums.size()){
        if (nums[idx] != last + 1){
            if (start == last){
                result.push_back(to_string(start));
            }
            else {
                result.push_back(to_string(start) + "->" + to_string(last));
            }

            start = nums[idx];
        }
        last = nums[idx];

        ++idx;
    }

    return result;
}

int main(){

}
