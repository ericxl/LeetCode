//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

vector<string> helper(int n, int last){
    if (n == 0) {
        return vector<string>(1,"");
    }
    if (n == 1) {
        return {"1","0","8"};
    }

    vector<string> list = helper(n-2, last);

    vector<string> res;
    for (auto& r : list){
        if (n != last){
            res.push_back("0" + r + "0");
        }
        res.push_back("1" + r + "1");
        res.push_back("6" + r + "9");
        res.push_back("8" + r + "8");
        res.push_back("9" + r + "6");
    }
    return res;
}

vector<string> findStrobogrammatic(int n) {
    vector<string> result = helper(n,n);
    return result;
}

int main(){

}
