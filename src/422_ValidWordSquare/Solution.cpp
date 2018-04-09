//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

bool validWordSquare(vector<string>& words) {
    if(words.size() == 0){
        return true;
    }
    int n = words.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<words[i].size(); j++){
            if(j >= n || words[j].size() <= i || words[j][i] != words[i][j])
                return false;
        }
    }
    return true;
}

int main(){

}
