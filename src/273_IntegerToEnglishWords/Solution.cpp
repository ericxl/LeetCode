//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

string numberToWords(int num) {
    if (num == 0) return "Zero";
    int bill = num / 1000000000;
    int mill = (num % 1000000000) / 1000000;
    int thou = (num % 1000000) / 1000;
    int one = (num % 1000) / 1;

    string res = "";
    if (bill > 0){
        res = toStr(bill) + " Billion";
    }
    if (mill > 0){
        if (res.size() != 0){
            res += " " + toStr(mill) + " Million";
        }
        else {
            res += toStr(mill) + " Million";
        }
    }
    if (thou > 0){
        if (res.size() != 0){
            res += " " + toStr(thou) + " Thousand";
        }
        else {
            res += toStr(thou) + " Thousand";
        }
    }
    if (one > 0){
        if (res.size() != 0){
            res += " " + toStr(one);
        }
        else {
            res += toStr(one);
        }
    }


    return res;
}
