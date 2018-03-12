//
// Created by Eric Liang on 3/10/18.
//

#include <leetcode.h>

vector<int> countBits(int num) {
    vector<int> result(num+ 1, 0);
    for (int i = 1; i <= num; i++){
        result[i] = result[i>>1] + i % 2;
    }
    return result;
}

int main(){

}
