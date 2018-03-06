//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

int maxArea(vector<int>& height) {
    if (height.size() < 2) return 0;

    int res = 0;

    int start = 0;
    int end = height.size()-1;
    while (start < end){
        res = max(min(height[start], height[end]) * (end - start), res);
        if (height[start] < height[end]){
            start++;
        }
        else {
            end--;
        }
    }
    return res;
}

int main(){

}
