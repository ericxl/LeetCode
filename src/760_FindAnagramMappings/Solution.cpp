//
// Created by Eric Liang on 3/12/18.
//

#include <leetcode.h>

vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
    map<int, int> hash;
    vector<int> result;
    for (int i = 0; i < B.size(); ++i){
        hash[B[i]] = i;
    }

    for (int i = 0; i < A.size(); ++i){
        result.push_back(hash[A[i]]);
    }
    return result;
}

int main(){

}
