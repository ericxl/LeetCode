//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

char findTheDifference(string s, string t) {
    int mask = 0;
    for (auto& c : s){
        mask ^= c;
    }
    for (auto& c : t){
        mask ^= c;
    }
    return (char)mask;
}

int main(){

}
