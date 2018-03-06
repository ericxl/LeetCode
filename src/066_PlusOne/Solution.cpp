//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

vector<int> plusOne(vector<int>& digits) {
    vector<int>result(digits.size());
    int carry = 1;
    int idx = digits.size() - 1;
    while (idx >= 0 || carry != 0){
        if (idx == -1 && carry != 0){
            result.insert (result.begin(), 1);
            carry = 0;
            break;
        }
        result[idx] = digits[idx] + carry;
        carry = 0;
        if (result[idx] > 9){
            carry = 1;
            result[idx] = 0;
        }
        idx --;
    }
    return result;
}

int main(){

}
