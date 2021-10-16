#include <iostream>
#include <cmath>
using namespace std;
float f(float n, bool isRoundedTo100 = false) {
    float a;
    if (ceil(n)-n >= n-floor(n))
        a=floor(n);
    else
        a=ceil(n);
    return isRoundedTo100 ? n*100 : a;
}
int main() {
    float x = 12.534;
    cout<< f(x, true);
    return 0;
}
