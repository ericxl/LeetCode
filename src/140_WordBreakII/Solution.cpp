//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

vector<string> combine(string word, vector<string> prev){
    for(int i=0;i<prev.size();++i){
        prev[i] = word + " " + prev[i];
    }
    return prev;
}

vector<string> wordBreakHelper(string s, unordered_set<string>& dict, unordered_map<string, vector<string>>& m){
    if (m.find(s) != m.end()){
        return m[s];
    }

    vector<string> result;
    if(dict.find(s) != dict.end()){ //a whole string is a word
        result.push_back(s);
    }

    for(int i=1;i<s.size();++i){
        string word=s.substr(0, i);
        if(dict.count(word)){
            string rem=s.substr(i);
            vector<string>b = wordBreakHelper(rem,dict, m);
            vector<string> prev=combine(word,b);
            result.insert(result.end(),prev.begin(), prev.end());
        }
    }
    m[s]=result; //memorize
    return result;
}

vector<string> wordBreak(string s, vector<string>& wordDict) {
    unordered_map<string, vector<string>>m;
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    return wordBreakHelper(s, dict, m);
}

int main(){

}
