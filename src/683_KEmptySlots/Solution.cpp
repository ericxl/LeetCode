//
// Created by Eric Liang on 4/10/18.
//

#include <leetcode.h>

int kEmptySlots(vector<int>& flowers, int k) {
    vector<int> days(flowers.size());
    for (int i = 0; i < flowers.size(); ++i){
        int flowerBloomAtI = flowers[i];
        days[flowerBloomAtI - 1] = i + 1;
    }

    int result = INT_MAX;
    int start = 0;
    int end = k+1;
    int i = 0;
    while (end < flowers.size()){
        if (i == end){
            result = min(result, max(days[start], days[end]));
            start = i;
            end = i + k + 1;
            ++i;
            continue;
        }

        if (days[start] > days[i] || days[end] > days[i]){
            start = i;
            end = i + k + 1;
        }
        ++i;
    }
    return result == INT_MAX ? -1 : result;
}

int main(){
    vector<int> f = {1,3,2};
    kEmptySlots(f, 1);
}
