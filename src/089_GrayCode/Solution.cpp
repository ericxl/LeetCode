//
// Created by Eric Liang on 3/18/18.
//

#include <leetcode.h>

vector<int> grayCode(int n) {
    vector<int> result;
    for (int i = 0; i < 1<<n; i++) result.push_back(i ^ i>>1);
    return result;
}

int main(){

}
