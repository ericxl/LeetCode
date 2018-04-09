//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

bool repeatedSubstringPattern(string s) {
    int n = s.size();
    vector<int> table(n+1, 0);

    int itr = 1;
    int pivot = 0;
    while (itr < s.size()){
        if (s[pivot] == s[itr]){
            table[itr+1] = pivot + 1;
            itr++;
            pivot++;
        }
        else if (pivot == 0) {
            itr++;
        }
        else {
            pivot = table[pivot] ;
        }
    }

    return table[n] != 0 && table[n]%(n-table[n])==0;
}

int main(){

}
