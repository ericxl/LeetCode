//
// Created by Eric Liang on 3/16/18.
//

#include <leetcode.h>

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    pair<pair<int,int>,pair<int,int>> r1 = make_pair(make_pair(A,B), make_pair(C,D));
    pair<pair<int,int>,pair<int,int>> r2 = make_pair(make_pair(E,F), make_pair(G,H));
    if (r1.first.first > r2.first.first) {
        swap(r1,r2);
    };

    long width = (long) min(r1.second.first, r2.second.first) - (long)r2.first.first;
    if (width <= 0) width = 0;

    if (r1.first.second > r2.first.second) swap(r1,r2);

    long height = (long)min(r1.second.second, r2.second.second) - (long)r2.first.second;
    if (height <= 0) height = 0;

    long overlap = width * height;

    return (C-A) * (D-B) + (G-E)*(H-F) - overlap;
}

int main(){
    int result = computeArea(-1500000001,0,-1500000000,1,1500000000,0,1500000001,1);
}
