//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for (auto& num : nums){
        freq[num] = freq[num] + 1;
    }
    vector<vector<int>>bucket(nums.size() + 1, vector<int>(0,0));
    for (auto &pair : freq){
        bucket[pair.second].push_back(pair.first);
    }

    vector<int> result;
    for (int pos = bucket.size() - 1; pos >= 0 && result.size() < k ; --pos){
        for (auto &n : bucket[pos]){
            result.push_back(n);
        }
    }

    return result;
}

int main(){

}
