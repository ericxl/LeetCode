//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

int diff(string a, string b){
    int i = 0;
    int result = 0;
    while (i < a.size()){
        if (a[i] != b[i]) {
            result ++;
        }
        i++;
    }
    return result;
}

int minMutation(string start, string end, vector<string>& bank) {
    unordered_set<string> dict(bank.begin(), bank.end());
    if (dict.count(end) == -1) return 0;

    queue<string> q;
    unordered_set<string> visited;
    q.push(start);
    int level = 0;
    while (!q.empty()){
        int size = q.size();
        while (size > 0){
            string cur = q.front();
            q.pop();
            if(cur == end) return level;
            for (string& b : bank){
                if (visited.find(b) == visited.end() && diff(cur, b) == 1){
                    visited.insert(b);
                    q.push(b);
                }
            }

            size--;
        }
        level++;
    }
    return -1;
}

int main(){

}
