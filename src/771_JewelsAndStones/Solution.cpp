//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

int numJewelsInStones(string J, string S) {
    int result = 0;
    set<char> jewels;
    for (int i = 0; i < J.size(); i++){
        jewels.insert(J[i]);
    }

    for (int i = 0; i<S.size(); i++){
        if (jewels.find(S[i]) != jewels.end()){
            result++;
        }
    }

    return result;
}

int main(){

}
