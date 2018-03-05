//
// Created by Eric Liang on 3/4/18.
//

#include <leetcode.h>

bool visit(int node, vector<vector<int>>& graph, set<int>& white, set<int>& gray, set<int>& black, vector<int>&result){
    white.erase(node);
    gray.insert(node);

    for (int i = 0; i < graph[node].size(); i++){
        int child = graph[node][i];

        if (black.find(child) != black.end()){
            continue;
        }

        if (gray.find(child) != gray.end()){
            result.clear();
            return false;
        }

        if (!visit(child, graph, white, gray, black, result)) {
            result.clear();
            return false;
        }
    }

    gray.erase(node);
    black.insert(node);

    result.push_back(node);
    return true;
}

vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
    vector<vector<int>> graph(numCourses);
    vector<int> result;

    //build graph
    for (auto p : prerequisites){
        graph[p.second].push_back(p.first);
    }

    //
    set<int> white;
    for (int i = 0; i < numCourses; i++){
        white.insert(i);
    }
    set<int> gray;
    set<int> black;

    while(!white.empty()){
        auto itr = white.begin();
        int node = *itr;

        if (!visit(node, graph, white, gray, black, result)) {
            return result;
        };
    }
    reverse( result.begin(), result.end() );
    return result;
}

int main(){
    pair<int,int> s = make_pair(1,0);
    vector<pair<int,int>> pre= {s};
    auto result = findOrder(2, pre);
}
