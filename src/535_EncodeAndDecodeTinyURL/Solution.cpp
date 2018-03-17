//
// Created by Eric Liang on 3/12/18.
//

#include <leetcode.h>

map<string, string> m;
int curIndex = 0;
// Encodes a URL to a shortened URL.
string encode(string longUrl) {
    string cur = "http://tinyurl.com/" + to_string(curIndex);
    m[cur] = longUrl;
    curIndex++;
    return cur;
}

// Decodes a shortened URL to its original URL.
string decode(string shortUrl) {
    return m[shortUrl];
}

int main(){

}
