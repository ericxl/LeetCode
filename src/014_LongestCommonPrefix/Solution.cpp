//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

int commonPrefix(string x, string y, int upto){
    if (x.size() > y.size()) return commonPrefix(y, x, upto);

    upto = upto > x.size() ? x.size() : upto;
    upto = upto > y.size() ? y.size() : upto;


    int i = -1;
    while ( i < upto){
        i++;
        if (x[i] != y[i]) break;
    }

    return i;
}

string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) return "";
    if (strs.size() == 1) return strs[0];

    int prefixIdx = INT_MAX;
    for (int i = 0; i < strs.size() - 1; i++){
        prefixIdx = commonPrefix(strs[i], strs[i+1], prefixIdx);
    }

    return strs[0].substr(0, prefixIdx);
}



int main(){

}
