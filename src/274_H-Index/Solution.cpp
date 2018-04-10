//
// Created by Eric Liang on 4/9/18.
//

#include <leetcode.h>

int hIndex(vector<int>& citations) {
    int length = citations.size();
    if (length == 0) return 0;

    vector<int> array2(length + 1);
    for (int i = 0; i < length; i++) {
        if (citations[i] > length) {
            array2[length] += 1;
        } else {
            array2[citations[i]] += 1;
        }
    }
    int t = 0;
    int result = 0;

    for (int i = length; i >= 0; i--) {
        t = t + array2[i];
        if (t >= i) {
            return i;
        }
    }
    return 0;
}

int main(){

}
