//
// Created by Eric Liang on 4/5/18.
//

#include <leetcode.h>

bool isStrobogrammatic(string num) {
    int start = 0;
    int end = num.size() - 1;

    while (start <= end){
        if (num[start] == '2' || num[start] == '3' || num[start] == '4' || num[start] == '5' || num[start] == '7') return false;
        if (num[end] == '2' || num[end] == '3' || num[end] == '4' || num[end] == '5' || num[end] == '7') return false;
        if (num[start] == '6' && num[end] != '9') {
            return false;
        }
        else if (num[start] == '6' && num[end] == '9'){
            ++start;
            --end;
            continue;
        }
        if (num[start] == '9' && num[end] != '6') {
            return false;
        }
        else if (num[start] == '9' && num[end] == '6') {
            ++start;
            --end;
            continue;
        }
        if (num[start] == '8' && num[end] != '8') {
            return false;
        }
        else if (num[start] == '8' && num[end] == '8'){
            ++start;
            --end;
            continue;
        }
        if (num[start] != num[end]) {
            return false;
        }
        ++start;
        --end;
    }
    return true;
}

int main(){

}
