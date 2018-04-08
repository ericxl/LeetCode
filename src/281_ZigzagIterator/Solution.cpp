//
// Created by Eric Liang on 4/7/18.
//

#include <leetcode.h>

class ZigzagIterator {
public:
    int v1i = 0;
    int v2i = 0;
    int turn = 0;
    vector<int> nums1;
    vector<int> nums2;
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        nums1 = v1;
        nums2 = v2;
    }

    int next() {
        if (turn == 0){
            if (v1i < nums1.size()) {
                int result = nums1[v1i];
                v1i++;
                turn = 1;
                return result;
            }
            else {
                int result = nums2[v2i];
                v2i++;
                return result;
            }
        }
        else {
            if (v2i < nums2.size()){
                int result = nums2[v2i];
                v2i++;
                turn = 0;
                return result;
            }
            else {
                int result = nums1[v1i];
                v1i++;
                return result;
            }
        }
    }

    bool hasNext() {
        return v1i < nums1.size() || v2i < nums2.size();
    }
};

int main(){

}
