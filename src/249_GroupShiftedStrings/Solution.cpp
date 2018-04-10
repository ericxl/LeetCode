//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

string convert(string s){
    if (s.size() < 1) return s;
    int offset = s[0] - 'a';
    string result = "";

    for (int i = 0; i < s.size(); ++i){
        char c = (char)(s[i] - offset);
        if (c < 'a') {
            c = c + 26;
        }
        result = result + c;
    }
    return result;
}

vector<vector<string>> groupStrings(vector<string>& strings) {
    map<string, vector<string>>m;
    for (string& s : strings){
        string hash = convert(s);
        m[hash].push_back(s);
    }

    vector<vector<string>> result;
    for (auto& pair : m){
        result.push_back(pair.second);
    }

    return result;
}

int main(){

}
