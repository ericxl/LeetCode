//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

string largestNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int n1, int n2){
        string s1 = to_string(n1);
        string s2 = to_string(n2);
        return s1+s2>s2+s1;
    });

    string result="";
    for (int i = 0; i< nums.size(); i++){
        result = result + to_string(nums[i]);
    }

    while(result[0]=='0' && result.length()>1)
        result.erase(0,1);
    return result;
}

int main(){

}
