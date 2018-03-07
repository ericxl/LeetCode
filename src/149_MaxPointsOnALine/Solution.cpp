//
// Created by Eric Liang on 2/24/18.
//

#include <leetcode.h>

struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

int gcd(int x, int y){
    if (y==0) return x;
    return gcd(y,x%y);
}

int maxPoints(vector<Point>& points) {
    if(points.size()<2) return points.size();
    int result = 0;
    for (int i = 0; i < points.size(); i++){
        map<int, map<int,int>> votes;
        int verticles = 0;
        int sames = 0;

        int curMaxVotes = 0;
        for (int j = 0; j < points.size(); j++){
            if (i == j) continue;

            if (points[i].x == points[j].x && points[i].y == points[j].y){
                sames++;
            }
            else if (points[i].x == points[j].x){
                verticles++;
            }
            else {
                int dX = points[j].x - points[i].x;
                int dY = points[j].y - points[i].y;
                int g = gcd(dX, dY);
                dX /= g;
                dY /= g;
                int cur = votes[dX][dY];
                cur++;
                votes[dX][dY] = cur;

                curMaxVotes = max(curMaxVotes, cur);
            }
        }

        int curMax = max(curMaxVotes, verticles);

        result = max(result, curMax + sames + 1);

    }
    return result;
}

int main(){

}
