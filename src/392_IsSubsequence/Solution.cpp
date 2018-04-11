//
// Created by Eric Liang on 4/10/18.
//

#include <leetcode.h>

bool isSubsequence(string s, string t) {
    queue<char> q;
    for (char& c: s){
        q.push(c);
    }

    int idx = 0;
    while (idx < t.size() && !q.empty()) {
        char c = q.front();
        if (c == t[idx]){
            q.pop();
        }

        idx++;
    }
    return q.empty();
}

int main(){

}
