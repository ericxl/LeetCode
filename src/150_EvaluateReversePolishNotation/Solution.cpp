//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

int evalRPN(vector<string>& tokens) {
    stack<int> nums;
    int result = 0;
    for (int i = 0; i < tokens.size(); ++i){
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
            int num1 = nums.top();
            nums.pop();
            int num2 = nums.top();
            nums.pop();
            int cur = 0;
            if (tokens[i] == "+"){
                cur = num1 + num2;
            } else if (tokens[i] == "-"){
                cur = num2 - num1;
            } else if (tokens[i] == "*"){
                cur = num1 * num2;
            } else if (tokens[i] == "/"){
                cur = num2 / num1;
            }
            nums.push(cur);
        }
        else{
            nums.push(stoi(tokens[i]));
        }
    }

    result = nums.top();
    nums.pop();


    return result;
}

int main(){

}
