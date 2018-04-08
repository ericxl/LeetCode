//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

string minWindow(string s, string t) {
    if (t.size() == 0) return "";
    if (t.size() > s.size()) return "";
    unordered_map<char, int> m;
    for (char& c: t){
        m[c]++;
    }

    int resultLen = INT_MAX;
    int matched = 0;
    unordered_map<char, int> window;
    string result;
    for (int start = 0, next=0; next < s.size(); ++next){
        char cur = s[next];
        if (m.find(cur) != m.end()){
            //if found
            window[cur]++;
            if (window[cur] <= m[cur]){
                matched++;
            }
        }

        if (matched >= t.size()){
            while(m.find(s[start]) == m.end() || window[s[start]] > m[s[start]]){
                window[s[start]]--;
                start++;
            }
            if(next - start + 1 < resultLen){
                resultLen = next - start + 1;
                result = s.substr(start, resultLen);
            }
        }

    }
    return result;
}

int main(){

}
