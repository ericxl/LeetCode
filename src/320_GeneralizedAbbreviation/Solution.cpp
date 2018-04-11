//
// Created by Eric Liang on 4/10/18.
//

#include <leetcode.h>

void back(vector<string>& result, string word, string cur, int count, int pos) {
    if (pos == word.size()){
        if(count > 0) cur += to_string(count);
        result.push_back(cur);
    }
    else {
        back(result, word, cur +(count > 0 ? to_string(count) : "") + word[pos], 0, pos+1);
        back(result, word, cur, count + 1 , pos+1);
    }
}

vector<string> generateAbbreviations(string word) {
    vector<string> result;

    back(result, word, "", 0, 0);
    return result;
}

int main(){

}
