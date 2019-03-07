// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int minus = Y - X;
    int ix = minus%D;
    int res = minus/D;
    if(ix > 0)
        res++;
    return res;
}