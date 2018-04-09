//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

int findNthDigit(int n) {
    long long multiplier = 9,digits = 1,begin = 1;
    while(n>multiplier*digits){
        n -= multiplier*digits++;
        multiplier *= 10;}
    int after = (n-1)/digits, location = (n-1)%digits;
    begin = pow(10,(digits-1));
    string a= (to_string(begin+after));
    a = a[location];
    return stoi(a);
}

int main(){

}
