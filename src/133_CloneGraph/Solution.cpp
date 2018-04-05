//
// Created by Eric Liang on 4/4/18.
//

#include <leetcode.h>

unordered_map<int, UndirectedGraphNode*> m;

UndirectedGraphNode *clone(UndirectedGraphNode *node) {
    if (node == nullptr) {
        return nullptr;
    }
    if (m.find(node->label) != m.end()) return m[node->label];

    UndirectedGraphNode* newNode = new UndirectedGraphNode(node->label);
    m[node->label] = newNode;
    for (auto& nei : node->neighbors){
        newNode->neighbors.push_back(clone(nei));
    }
    return newNode;
}

UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
    return clone(node);
}

int main(){
    UndirectedGraphNode* n0 = new UndirectedGraphNode(0);
    UndirectedGraphNode* n1 = new UndirectedGraphNode(1);
    UndirectedGraphNode* n2 = new UndirectedGraphNode(2);
    n0->neighbors.push_back(n1);
    n0->neighbors.push_back(n2);
    n1->neighbors.push_back(n0);
    n1->neighbors.push_back(n2);
    n2->neighbors.push_back(n1);
    n2->neighbors.push_back(n0);
    n2->neighbors.push_back(n2);

    UndirectedGraphNode* copy = cloneGraph(n0);
}
