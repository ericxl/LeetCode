//
// Created by Eric Liang on 3/4/18.
//

#include <leetcode.h>

int largestRectangleArea(vector<int>& heights) {
    if (heights.size() == 0) return 0;
    if (heights.size() == 1) return heights[0];

    heights.push_back(0);
    int maxArea = 0;
    stack<int> stack;
    stack.push(0);
    int i = 1;
    while (i < heights.size()) {
        int curHeight = heights[i];
        if (curHeight > heights[stack.top()]){
            stack.push(i);
        }
        else {
            while (!stack.empty() && heights[stack.top()] >= heights[i]){
                int sVal = stack.top();
                stack.pop();
                int area;
                if(stack.empty()){
                    area = heights[sVal] * i;
                }
                else{
                    area = heights[sVal]*(i - stack.top() - 1);
                }
                maxArea = max(maxArea, area);
            }

            stack.push(i);
        }
        i++;
    }
    return maxArea;
}

int main(){
    vector<int> array = {1,2,4};
    int area = largestRectangleArea(array);
    int x = 0;
}
