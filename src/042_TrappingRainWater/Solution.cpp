//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

int trap(vector<int> &height) {
    int size = height.size();
    if (size == 0) {
        return 0;
    }
    int left = 0;
    int right = size - 1;
    int water = 0;
    int leftMax = -1;
    int rightMax = -1;

    while (left <= right) {
        if (height[left] < height[right]) {
            if (height[left] > leftMax) {
                leftMax = height[left];
            } else {
                water += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] > rightMax) {
                rightMax = height[right];
            } else {
                water += rightMax - height[right];
            }
            right--;

        }
    }
    return water;
}

int main() {

}
