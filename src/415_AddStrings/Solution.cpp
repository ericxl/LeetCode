//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

string addStrings(string num1, string num2) {
    if (num1.size() < num2.size()) swap(num1, num2);
    string result = "";
    int carry = 0;
    for (int i = 0; i < num1.size(); ++i){
        int a = (num1[num1.size() - i - 1] - '0') + (i >= num2.size() ? 0 : num2[num2.size() - i - 1] - '0') + carry;
        if (a > 9){
            a = a%10;
            carry = 1;
        } else {
            carry = 0;
        }
        result = to_string(a) + result;
    }
    if (carry != 0){
        result = to_string(carry) + result;
    }
    return result;
}

int main(){

}
