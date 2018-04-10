//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

class Trie {
    class TrieNode {
        vector<TrieNode*> children;
        bool isEnd;
    public:
        TrieNode() {
            children = vector<TrieNode*>(26);
        }

        bool containsKey(char ch) {
            return children[ch -'a'] != nullptr;
        }

        TrieNode* get(char ch) {
            return children[ch -'a'];
        }

        void put(char ch, TrieNode* node) {
            children[ch -'a'] = node;
        }

        void setEnd() {
            isEnd = true;
        }

        bool end() {
            return isEnd;
        }
    };

    TrieNode* root;
public:

    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* node = root;
        for (int i = 0; i < word.size(); ++i) {
            char currentChar = word[i];
            if (!node->containsKey(currentChar)) {
                node->put(currentChar, new TrieNode());
            }
            node = node->get(currentChar);
        }
        node->setEnd();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* node = root;
        for (int i = 0; i < word.size(); ++i) {
            char currentChar = word[i];
            if (!node->containsKey(currentChar)) {
                return false;
            }
            node = node->get(currentChar);
        }
        return node && node->end();
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (int i = 0; i < prefix.size(); ++i) {
            char currentChar = prefix[i];
            if (!node->containsKey(currentChar)) {
                return false;
            }
            node = node->get(currentChar);
        }
        return node != nullptr;
    }
};

int main(){

}
