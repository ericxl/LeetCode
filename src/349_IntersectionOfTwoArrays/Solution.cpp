//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    unordered_set<int> s(nums1.begin(), nums1.end());

    for (int&num : nums2){
        if (s.find(num) != s.end()){
            result.push_back(num);
            s.erase(num);
        }
    }
    return result;
}

int main(){

}
