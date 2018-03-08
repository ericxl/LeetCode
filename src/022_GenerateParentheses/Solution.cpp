//
// Created by Eric Liang on 3/8/18.
//

#include <leetcode.h>

void dfs(int n, string cur, vector<string>& result, int left, int right) {
    if (right >= n){
        result.push_back(cur);
        return;
    }
    if (left < n){
        dfs(n, cur + "(", result, left + 1, right);
    }
    if (right < left){
        dfs(n, cur + ")", result, left, right+1);
    }
}

vector<string> generateParenthesisDFS(int n) {
    vector<string> result;
    dfs(n, "", result, 0, 0);
    return result;
}

vector<string> generateParenthesisBFS(int n) {
    vector<string> result;
    if (n == 0) return result;
    queue<pair<pair<int,int>, string>> q;
    q.push(make_pair(make_pair(1,0), "("));

    while (!q.empty()) {
        auto node = q.front();
        q.pop();

        int left = node.first.first;
        int right = node.first.second;
        if (right >= n) {
            result.push_back(node.second);
            continue;
        }

        if (left < n){
            q.push(make_pair(make_pair(left + 1, right), node.second + "("));
        }
        if (right < left){
            q.push(make_pair(make_pair(left, right + 1), node.second + ")"));
        }
    }
    return result;
}

int main(){
    auto result = generateParenthesisBFS(0);
}
