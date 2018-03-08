//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

vector<int> singleNumber(vector<int>& nums) {
    int pass = 0;
    for (int num : nums){
        pass ^= num;
    }

    int lastSet = pass & (-pass);
    vector<int> result(2,0);
    for (int num : nums){
        if ((num & lastSet) == 0){
            result[0] ^= num;
        } else {
            result[1] ^= num;
        }

    }
    return result;
}

int main(){

}
