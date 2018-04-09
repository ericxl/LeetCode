//
// Created by Eric Liang on 4/8/18.
//

#include <leetcode.h>

int guess(int num);

int guess(int num) {
    return 0;
}

int guessNumber(int n) {
    int maxNumber = n, minNumber = 1;
    while (true) {
        int meanNumber = (maxNumber - minNumber) / 2 + minNumber;
        // Do NOT use (maxNumber+minNumber)/2 in case of over flow
        int res = guess(meanNumber);
        if (res == 0) {
            return meanNumber;
        } else if (res == 1) {
            minNumber = meanNumber + 1;
        } else {
            maxNumber = meanNumber - 1;
        }
    }
}

int main(){

}