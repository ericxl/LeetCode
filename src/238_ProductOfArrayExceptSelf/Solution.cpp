//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

    vector<int>res(n, 1);

    int fromBegin = 1;
    int fromLast = 1;

    for (int i = 0; i < n; i++){
        res[i] *= fromBegin;
        fromBegin *= nums[i];

        res[n-i-1] *= fromLast;
        fromLast *= nums[n-i-1];
    }

    return res;
}

int main(){

}
