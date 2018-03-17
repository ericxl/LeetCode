//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

int numTrees(int n) {
    map<int, int> m;
    m[0] = 1;
    m[1] = 1;
    for (int i = 2; i <= n; i++){
        int root = 0;
        int sum = 0;
        while (root < i){
            int left = root;
            int right = i - root - 1;
            sum += m[left]*m[right];
            ++root;
        }
        m[i] = sum;
    }

    return m[n];
}

int main(){

}
