//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

const unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
const unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
const unordered_set<char> row3 = {'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
bool canOneRow(string& s){
    if (s.size() == 0) return true;
    int row = 0;
    if (row1.find(s[0]) != row1.end()){
        row = 1;
    } else if (row2.find(s[0]) != row2.end()){
        row = 2;
    }
    else if (row3.find(s[0]) != row3.end()){
        row = 3;
    }
    else {
        return false;
    }
    for (int i = 1; i < s.size(); ++i){
        if (row==1){
            if (row1.find(s[i]) == row1.end()){
                return false;
            }
        }else if (row==2){
            if (row2.find(s[i]) == row2.end()){
                return false;
            }
        }else if (row==3){
            if (row3.find(s[i]) == row3.end()){
                return false;
            }
        }
    }

    return true;
}

vector<string> findWords(vector<string>& words) {
    vector<string> result;
    for (auto& w : words){
        if (canOneRow(w)){
            result.push_back(w);
        }
    }
    return result;
}

int main(){

}
