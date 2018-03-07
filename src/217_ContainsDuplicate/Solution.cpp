//
// Created by Eric Liang on 3/6/18.
//

#include <leetcode.h>

bool containsDuplicate(vector<int>& nums) {
    set<int>intSet;
    for (auto i : nums){
        if (intSet.find(i) != intSet.end()){
            return true;
        }
        intSet.insert(i);
    }
    return false;
}

int main(){
    vector<int> s = {-1200000005,-1200000005};
    auto result = containsDuplicate(s);
}
