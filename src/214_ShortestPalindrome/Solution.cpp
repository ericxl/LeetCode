//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

string shortestPalindrome(string s) {
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    string l = s + "#" + rev_s;


    int n = l.size();
    vector<int> table(n+1, 0);

    int itr = 1;
    int pivot = 0;
    while (itr < l.size()){
        if (l[pivot] == l[itr]){
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

    return rev_s.substr(0, s.size() - table[l.size() ]) + s;
}
int main(){
    shortestPalindrome("catacb");
}