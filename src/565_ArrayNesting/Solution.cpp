//
// Created by Eric Liang on 2/25/18.
//
#include "../../inc/leetcode.h"

class Solution565 {
public:
    int arrayNesting(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        vector<int> map(n);
        int index = 0;
        int visited = 0;
        int curCount = 0;

        while (visited < n){
            int val = nums[index];
            if (map[val] != 0){

                res = max(curCount, res);
                index++;
                curCount = 0;
            }
            else {
                curCount++;
                map[val] = 1;
                visited++;
                index = val;
            }
        }
        res = max(res, curCount);

        return res;
    }
};


int main(){
    Solution565 s;
    vector<int> v = {0,2,1};
    int val = s.arrayNesting(v);
    int x = 0;
}
