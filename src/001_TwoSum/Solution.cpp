//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> result;
    map<int, int> comp;

    for (int i = 0; i < nums.size(); i++) {
        int cur = nums[i];
        int complement = target - cur;

        if (comp.find(complement) != comp.end()) {
            result.push_back(comp[complement]);
            result.push_back(i);
            return result;
        }

        comp[cur] = i;
    }

    return result;
}

int main() {
    vector<int> in;
    int n, t;
    cin >> n;
    while (n--) {
        cin >> t;
        in.push_back(t);
    }
    cin >> t;
    in = twoSum(in, t);
    cout << in[0] << ' ' << in[1] << endl;

}
