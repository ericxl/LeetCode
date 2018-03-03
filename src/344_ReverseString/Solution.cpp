//
// Created by Eric Liang on 2/26/18.
//

#include <leetcode.h>

string reverseString(string s) {
    string res = s;
    int size = res.size();

    for (int i = 0; i < size / 2; i++){
        swap(res[i], res[size - i - 1]);
    }
    return res;
}

int main(){

}
