//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    //nums1 smaller
    if (nums1.size() > nums2.size()){
        return findMedianSortedArrays(nums2, nums1);
    }

    int n1 = nums1.size();
    int n2 = nums2.size();

    bool isOdd = (n1 + n2) % 2 == 1;

    int start = 0;
    int end = n1;
    int partX, partY;

    //partX + partY = (n1+n2 + 1) / 2;
    int leftMaxX, rightMinX, leftMaxY, rightMinY;


    while(start<=end){
        partX = (start + end) / 2;
        partY = (n1+n2 + 1) / 2 - partX;

        leftMaxX = partX > 0 ? nums1[partX - 1] : INT_MIN;
        rightMinX = partX < n1 ? nums1[partX] : INT_MAX;
        leftMaxY = partY > 0 ? nums2[partY - 1] : INT_MIN;
        rightMinY = partY < n2 ? nums2[partY] : INT_MAX;

        if (leftMaxX <= rightMinY && leftMaxY <= rightMinX){
            if (isOdd){
                return (double)max(leftMaxX, leftMaxY);
            }
            return (double)(max(leftMaxX, leftMaxY) + min(rightMinX,rightMinY))/(double)2;
        }
        else if(leftMaxX > rightMinY){
            end = partX - 1;
        }
        else {
            start =  partX + 1;
        }
    }

    return 0;
}

int main(){

}
