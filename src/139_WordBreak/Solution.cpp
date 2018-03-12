//
// Created by Eric Liang on 3/12/18.
//

#include <leetcode.h>

bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool> dp(s.size() + 1, false);
    dp[0] = true;

    for (int i = 1; i <= s.size(); ++i){
        for (int j = i - 1; j >=0; --j){
            if (dp[j]){
                if (find(wordDict.begin(), wordDict.end(), s.substr(j, i-j)) != wordDict.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
    }

    return dp[dp.size() -1];
}

int main(){

}
