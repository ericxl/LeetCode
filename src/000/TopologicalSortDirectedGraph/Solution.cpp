//
// Created by Eric Liang on 3/4/18.
//

#include <leetcode.h>

class DFSRECSolution {
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

    vector<int> topological_sort(int numCourses, vector<pair<int, int>>& prerequisites) {
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
};

class BFSITRSolution {
public:
    vector<int> topological_sort(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> result;

        vector<vector<int>> graph(numCourses);
        vector<int> incoming_degree(numCourses,0);

        //build graph
        for (auto p : prerequisites){
            graph[p.second].push_back(p.first);
            incoming_degree[p.first]++;
        }

        int node_root;
        while (true){
            bool isEmpty;
            node_root = nonEmpty(incoming_degree, isEmpty);
            if (node_root == -1 && !isEmpty){
                vector<int> r;
                return r;
            }
            if (node_root == -1)break;

            for (auto child : graph[node_root]){
                if (find(result.begin(), result.end(), child) != result.end()){
                    vector<int> r;
                    return r;
                }
                incoming_degree[child]--;
            }
            incoming_degree[node_root] = -1;

            result.push_back(node_root);
        }

        return result;
    }
private:
    int nonEmpty(vector<int>& incoming_degree, bool& isEmpty){
        isEmpty = true;
        int result = -1;
        for (int i = 0; i < incoming_degree.size(); i++) {
            if (incoming_degree[i] == 0) {
                return i;
            }
            else if (incoming_degree[i] > 0){
                isEmpty = false;
            }
        }
        return -1;
    }
};

int main(){
    pair<int,int> s1 = make_pair(1,0);
    pair<int,int> s2 = make_pair(1,2);
    pair<int,int> s3 = make_pair(0,1);

    vector<pair<int,int>> pre= {s1, s2,s3};
    BFSITRSolution solution;
    auto result = solution.topological_sort(3, pre);
    int x = 0;
}
