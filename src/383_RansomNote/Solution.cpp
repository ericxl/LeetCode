//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

bool canConstruct(string ransomNote, string magazine) {
    if (ransomNote == "") return true;
    map<char, int> m;
    for (int i = 0; i < ransomNote.size(); i++){
        int cur = m[ransomNote[i]];
        cur ++;
        m[ransomNote[i]] = cur;
    }

    for (int i = 0; i < magazine.size(); i++){
        if (m.find(magazine[i]) != m.end()){
            int cur = m[magazine[i]];
            cur--;
            if (cur <= 0){
                m.erase(magazine[i]);
            }
            else {
                m[magazine[i]] = cur;
            }
        }
        if (m.empty()){
            return true;
        }
    }
    return false;
}

int main(){

}
