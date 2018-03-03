//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

using namespace std;
struct Node {
    int val;
    vector<Node*> children;
    Node(int value) {
        val = value;
    }
};

//bottom up approach
pair<Node*, int> searchRec(Node* root, int target){
    if (root==nullptr) return make_pair(nullptr, 0); //but depth here is no-care
    if (root->val == target) return make_pair(root, 1); //use make_pair(root, 0) if you want the root to have level of 0

    for(uint i = 0; i < root->children.size(); i++){
        pair<Node*, int> childRet = searchRec(root->children[i], target);
        if(childRet.first != nullptr) {
            return make_pair(childRet.first, (childRet.second + 1) );
        }
    }
    return make_pair(nullptr, 0);
};

//top down approach
Node* searchRec(Node* root, int target, int depth, int& outDepth){
    if (root==nullptr) return nullptr; //but depth here is no-care
    if (root->val == target) root; //use make_pair(root, 0) if you want the root to have level of 0

    for(uint i = 0; i < root->children.size(); i++){
        Node* childRet = searchRec(root->children[i], target, depth+1, outDepth);
        if(childRet != nullptr) {
            outDepth = depth;
            return childRet;
        }
    }
    return nullptr;
};

Node* search(Node* root, int target, int& outDepth){            //or use top down approach
    auto res = searchRec(root, target);                         //int depth;
    outDepth = res.second;                                      //auto res = searchRec(root, target, 1, depth);
    return res.first;                                           //outDepth = depth;
                                                                //return res;
}

int main(){
    // not declaring them as points will make them allocated on the stack, rather than heap.
    // this way we avoided dealing with memory leak.
    // if we use: Node* n5 = new Node(5), then at the end we need to call: delete n5;
    Node n5(5); Node n4(4); Node n2(2); Node n3(3); Node n8(8); Node n7(7); Node n9(9);

    n2.children.push_back(&n8);
    n2.children.push_back(&n7);
    n2.children.push_back(&n9);
    n5.children.push_back(&n4);
    n5.children.push_back(&n2);
    n5.children.push_back(&n3);

    int depth;
    search(&n5, 7, depth);

    int dummyVar = 0;
}

