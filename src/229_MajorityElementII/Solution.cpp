//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

vector<int> majorityElement(vector<int>& nums) {
    vector<int>result;
    int count1 = 0, count2 = 0, candi1 = 0, candi2 = 1;

    for (int& num : nums){
        if (num == candi1){
            ++count1;
        } else if (num == candi2){
            ++ count2;
        } else if (count1 == 0){
            candi1 = num;
            count1 = 1;
        } else if (count2 == 0){
            candi2 = num;
            count2 = 1;
        } else {
            --count1;
            --count2;
        }
    }

    count1 = 0;
    count2 = 0;
    for (int& num : nums){
        if (num == candi1){
            ++count1;
        } else if (num == candi2){
            ++count2;
        }
    }

    if (count1 > (nums.size() / 3)){
        result.push_back(candi1);
    }
    if (count2 > (nums.size() / 3)){
        result.push_back(candi2);
    }
    return result;
}

int main(){

}
