//
// Created by Eric Liang on 3/7/18.
//

#include <leetcode.h>

vector<string> getLines(string& input) {
    istringstream iss(input);
    string curr;
    vector<string> lines;
    while (getline(iss, curr, '\n')) lines.push_back(curr);
    return lines;
}

int lengthLongestPath(string input) {
    vector<string> lines = getLines(input);
    int numLines = lines.size();
    vector<int> lens(numLines + 1, 0);
    int maxLen = 0;
    for (auto line : lines) {
        size_t pos = line.find_last_of('\t');
        int levl = (pos == string::npos) ? 0 : (levl = pos + 1);
        if (line.find('.') == string::npos) {
            lens[levl + 1] = lens[levl] + line.size() - levl;
        } else {
            //maxLen = max(maxLen, (int)(lens[levl - 1] + line.size() + 1));
            maxLen = max(maxLen, (int)(lens[levl] + line.size() ));
        }
    }
    return maxLen;
}

int main(){
    int result = lengthLongestPath("dir\n\tsubdir1\n\t\tfile1.ext\n\t\tsubsubdir1\n\tsubdir2\n\t\tsubsubdir2\n\t\t\tfile2.ext");
}