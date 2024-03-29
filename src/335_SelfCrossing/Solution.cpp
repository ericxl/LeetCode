//
// Created by Eric Liang on 3/17/18.
//

#include <leetcode.h>

bool isSelfCrossing(vector<int>& x) {
    int l = x.size();
    if(l <= 3) return false;

    for(int i = 3; i < l; i++){
        if(x[i] >= x[i-2] && x[i-1] <= x[i-3]) return true;  //Fourth line crosses first line and onward
        if(i >=4)
        {
            if(x[i-1] == x[i-3] && x[i] + x[i-4] >= x[i-2]) return true; // Fifth line meets first line and onward
        }
        if(i >=5)
        {
            if(x[i-2] - x[i-4] >= 0 && x[i] >= x[i-2] - x[i-4] && x[i-1] >= x[i-3] - x[i-5] && x[i-1] <= x[i-3]) return true;  // Sixth line crosses first line and onward
        }
    }
    return false;
}

int main(){

}
