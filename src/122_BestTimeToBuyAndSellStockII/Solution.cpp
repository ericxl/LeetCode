//
// Created by Eric Liang on 3/5/18.
//

#include <leetcode.h>

int maxProfit(vector<int>& prices) {
    int total = 0;
    if(prices.size() == 0) return total;
    for (int i=0; i < prices.size()-1; i++) {
        if (prices[i+1]>prices[i]) total += prices[i+1]-prices[i];
    }

    return total;
}

int main(){

}
