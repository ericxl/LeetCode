//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

double findMaxAverage(vector<int>& nums, int k) {
    int sum = 0;
    int maximum = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); ++i){
        if (count < k){
            sum += nums[i];
            maximum = sum;
            count++;
        }
        else {
            sum -= nums[i-k];
            sum += nums[i];
            maximum = max(maximum, sum);
        }
    }
    return (double)maximum / k;
}

int main(){

}
