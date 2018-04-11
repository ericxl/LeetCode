//
// Created by Eric Liang on 4/10/18.
//

#include <leetcode.h>

string find(map<string, string>& m, string s) {
    return !m.count(s) ? m[s] = s : (m[s] == s ? s : find(m, m[s]));
}

bool areSentencesSimilarTwo(vector<string>& a, vector<string>& b, vector<pair<string, string>> pairs) {
    if (a.size() != b.size()) return false;
    map<string, string> m;
    for (pair<string, string> p : pairs) {
        string parent1 = find(m, p.first), parent2 = find(m, p.second);
        if (parent1 != parent2) m[parent1] = parent2;
    }

    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i] && find(m, a[i]) != find(m, b[i])) return false;

    return true;
}

int main(){

}
