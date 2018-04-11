//
// Created by Eric Liang on 4/10/18.
//

#include <leetcode.h>

int diff = INT_MAX;
string result;
void helper(vector<int>&digits, string cur, int index, int target) {
    if (index == 4){
        int h = stoi(cur.substr(0, 2));
        int m = stoi(cur.substr(2));
        int t = h * 60 + m;
        int d = t - target;
        if (d < 0) d += 1440;
        if (d == 0) return;
        if (d < diff) {
            diff = d;
            result = cur.substr(0, 2) + ":" + cur.substr(2);
        }
        return;
    }

    for (int i = 0; i < digits.size(); ++i){
        if (index == 0){
            helper(digits, to_string(digits[i]), 1, target);
        }
        else if (index == 1){
            if (stoi(cur + to_string(digits[i])) < 24){
                helper(digits, cur + to_string(digits[i]), 2, target);
            }
        }
        else if (index == 2){
            helper(digits, cur + to_string(digits[i]), 3, target);
        }
        else if (index == 3){
            if (stoi((cur + to_string(digits[i])).substr(2)) < 60){
                helper(digits, cur + to_string(digits[i]), 4, target);
            }
        }
    }
}

string nextClosestTime(string time) {
    size_t colon = time.find(':');
    int t = stoi(time.substr(0, colon)) * 60 + stoi(time.substr(colon + 1));
    set<int> digits;
    for (int i = 0; i < time.size(); ++i){
        if (time[i] != ':') digits.insert(time[i] - '0');
    }
    if (digits.size() == 1) return time;
    vector<int> ds(digits.begin(), digits.end());
    helper(ds, "", 0, t);
    return result;
}

int main(){
    string result = nextClosestTime("19:34");
}
