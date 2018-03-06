//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

int palindromic(string s, int start, int end, vector<vector<int>>& map, string& result){
    if (start > end) return 0;

    if (start == end){

        return 1;
    }

    if (s[start] == s[end]){
        return 2 + palindromic(s, start + 1, end - 1 , map, result);
    }
    int left = palindromic(s, start, end - 1 , map, result);
    int right = palindromic(s, start + 1, end, map, result);

    return max(left, right);
}

string longestPalindromeDPNoMemory(string s) {
    string result;
    vector<vector<int>> map(s.size(), vector<int>(s.size(), 0));
    palindromic(s, 0, s.size() - 1, map, result);
    return result;
}

string longestPalindromeDPWithMemory(string s) {
    vector<vector<bool>> mat(s.size(), vector<bool>(s.size()));
    int curLen = 0;
    int curStart = 0;

    // update diagonal
    for (int i = 0; i < s.size(); i++){
        mat[i][i] = true;
        curStart = i;
        curLen = 1;
    }

    //update length of 2
    for (int i = 1; i < s.size(); i++){
        bool isPal = s[i-1] == s[i];
        mat[i-1][i] = isPal;
        if (isPal){
            curStart = i - 1;
            curLen = 2;
        }
    }

    for (int length = 3; length <= s.size(); length++){
        for (int i = length - 1; i < s.size(); i++){
            bool isPal = s[i-length+1] == s[i] ? mat[i-length+2][i-1] : false;
            mat[i-length+1][i] = isPal;
            if (isPal){
                curStart = i - length + 1;
                curLen = length;
            }

        }
    }

    return s.substr(curStart, curLen);
}

int main(){
    string result = longestPalindromeDPWithMemory("aabaaa");
    int x = 0;
}
