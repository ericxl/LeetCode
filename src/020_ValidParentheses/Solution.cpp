//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

bool isValid(string s) {
    stack<char> stack;

    int index = 0;
    while (index < s.size()){
        char cur = s[index];
        if (cur=='(' || cur=='{' || cur=='['){
            stack.push(cur);
        }
        else {
            if (stack.empty()) return false;
            char top = stack.top();
            if (top=='[' && cur !=']') return false;
            if (top=='(' && cur !=')') return false;
            if (top=='{' && cur !='}') return false;
            stack.pop();
        }

        index++;
    }
    return stack.empty();
}

int main(){

}
