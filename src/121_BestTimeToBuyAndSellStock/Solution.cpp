//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

int maxProfit(vector<int>& prices) {
    if (prices.size() < 2) return 0;
    vector<int> sum(prices.size());
    sum[0] = 0;
    int result = sum[0];
    for (int i = 1; i < prices.size(); i++){
        int prev = sum[i-1];
        int num = prices[i] - prices[i-1];
        sum[i] = max(prev + num, num);
        result = max(result, sum[i]);
    }
    return result;
}

int main(){

}
