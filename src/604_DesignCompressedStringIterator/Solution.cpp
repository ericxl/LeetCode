//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

class StringIterator {
public:
    StringIterator(string cs) : cs(cs), i(0), rep(0), ch(' ') { }

    char next() {
        if (rep > 0) {
            rep--;
            return ch;
        }
        else if (i < cs.size()) {
            ch = cs[i];
            int j = i + 1;
            while (j < cs.size() && isdigit(cs[j])) { j++; }
            string num = cs.substr(i + 1, j - 1 - i);
            rep = atoi(num.c_str()) - 1;
            i = j;
            return ch;
        }
        else {
            return ' ';
        }
    }

    bool hasNext() {
        return rep > 0 || i < cs.size();
    }

private:
    string cs;
    int i;
    long rep;
    char ch;
};

int main(){

}
