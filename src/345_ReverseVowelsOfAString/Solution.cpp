//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

string reverseVowels(string s) {
    vector<char> cs;
    for (auto&c: s) {
        if (c == 'e' || c == 'a' || c=='i' || c=='o' || c=='u' || c == 'E' || c == 'A' || c=='I' || c=='O' || c=='U' ){
            cs.push_back(c);
        }
    }
    reverse(cs.begin(), cs.end());
    int idx = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == 'e' || s[i] == 'a' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i] == 'E' || s[i] == 'A' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            s[i] = cs[idx];
            idx++;
        }
    }
    return s;
}

int main(){

}
