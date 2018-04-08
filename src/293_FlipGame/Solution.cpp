//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

vector<string> generatePossibleNextMoves(string s) {
    vector<string> result;
    if (s.size() < 2) return result;

    for (int i = 1; i < s.size(); ++i){
        if (s[i] == s[i-1] && s[i] == '+'){
            string copy = s;
            copy[i] = '-';
            copy[i-1] = '-';
            result.push_back(copy);
        }
    }
    return result;
}

int main(){

}
