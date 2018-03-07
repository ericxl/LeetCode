//
// Created by Eric Liang on 2/25/18.
//

#include <leetcode.h>

class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1 = toVector(version1);
        vector<int>v2 = toVector(version2);

        int i = 0;
        while (i < v1.size() || i < v2.size()){
            if (i >= v1.size()){
                return -1;
            }
            if (i >= v2.size()){
                return 1;
            }

            if (v1[i] > v2[i]){
                return 1;
            }
            else if (v1[i] < v2[i]){
                return -1;
            }
            else {
                i++;
            }
        }
        return 0;
    }

    vector<int> toVector(const string& s){
        vector<int>res;
        int i = 0;
        int cnt = 0;
        while (i < s.size()){
            if (s[i+cnt] == '.'){
                res.push_back(atoi(s.substr(i, cnt).c_str()));
                i += cnt + 1;
                cnt = 0;
            }
            else if (i+cnt >= s.size()) {
                res.push_back(atoi(s.substr(i, cnt).c_str()));
                break;
            }
            cnt++;
        }
        for (int j = res.size() - 1; j > 0; j--){
            if (res[j] ==0){
                res.pop_back();
            }
            else {
                break;
            }
        }

        return res;
    }
};

int main(){
    Solution s;
    auto val1 = s.compareVersion("1","1");
    auto val2 = s.compareVersion("1","2");
    auto val3 = s.compareVersion("1.1","1.2");
    auto val4 = s.compareVersion("1.1","1.1");
    auto val5 = s.compareVersion("1.2.3","1.3.4");
    auto val6 = s.compareVersion("2.3.5","1.5.6");
    auto val7 = s.compareVersion("1.0.0.0","1");
    auto val8 = s.compareVersion("3.0.4.10","3.0.4.2");
}

