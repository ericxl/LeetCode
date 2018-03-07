//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

bool isPalindrome(int x) {
    int val = x;
    int newVal = 0;
    while (val > 0){
        newVal = newVal * 10 + val % 10;
        val /= 10;
    }
    if (newVal == x) return true;
    return false;
}

int main(){

}
