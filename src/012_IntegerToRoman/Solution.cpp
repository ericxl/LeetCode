//
// Created by Eric Liang on 3/2/18.
//

#include <leetcode.h>

string intToRoman(int num) {
    string Is[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    string Xs[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string Cs[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string Ms[] = {"", "M", "MM", "MMM"};

    return Ms[num / 1000] + Cs[(num % 1000)/100] + Xs[(num % 100)/10] + Is[num % 10];
}

int main(){

}
