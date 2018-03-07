//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

bool visit(int node, set<int>& white, set<int>& grey, set<int>& black, vector<vector<int>>& edges){
    white.erase(node);
    grey.insert(node);

    for (int i = 0; i < edges[node].size(); i++){
        int child = edges[node][i];

        if (black.find(child) != black.end()) continue;

        if (grey.find(child) != grey.end()) return false;

        if(!visit(child, white, grey, black, edges)) {
            return false;
        }
    }

    grey.erase(node);
    black.insert(node);

    return true;
}

bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
    set<int>white;
    for (int i = 0; i < numCourses; i++){
        white.insert(i);
    }
    vector<vector<int>> edges(numCourses);
    for (int i = 0; i < prerequisites.size(); i++){
        pair<int, int> prereq = prerequisites[i];
        edges[prereq.second].push_back(prereq.first);
    }

    set<int>grey;
    set<int>black;

    while (white.size() > 0){
        auto itr = white.begin();
        int node = *itr;
        if (!visit(node, white, grey, black, edges)) return false;
    }
    return true;
}


int main(){
    vector<pair<int, int>> m = {make_pair(1,0)};

    bool can = canFinish(2, m);
}

