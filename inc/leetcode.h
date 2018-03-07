//
// Created by Eric Liang on 2/24/18.
//

#ifndef LEETCODE_LEETCODE_H
#define LEETCODE_LEETCODE_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#include <iostream>

#include <vector>
#include <deque>
#include <stack>
#include <map>
#include <queue>
#include <utility>
#include <set>
#include <tuple>
#include <iterator>
#include <sstream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

#endif //LEETCODE_LEETCODE_H
