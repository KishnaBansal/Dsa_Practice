#include<iostream>
using namespace std;
int mySqrt(int n) {
    int s=0,e=n;
    int ans=0;
    while(s<=e) {
        int mid = (e-s)/2+s;
        if(mid*mid<=n) {
            ans=mid;
            s=mid+1;
        }
        else {
            e=mid-1;
        }
    }
    return ans;
}
// double myPrecisionSqrt(int n) {
//     double sqrt = mySqrt(n);
//     double step=0.01;
//     double j=sqrt;
//     while(j*j<=n) {
//         sqrt=j;
//         j+=step;
//     }
//     return sqrt;
// }
double myPrecisionSqrt(int n) {
    double sqrt = mySqrt(n);
    double step=0.1;
    int precision = 10;
    for(int i=0;i<precision;i++) {
        double j=sqrt;
        while(j*j<=n) {
            sqrt=j;
            j+=step;
        }
        step /= 10;
    }
    return sqrt;
}
int main() {
    int n;cin>>n;
    double val = myPrecisionSqrt(n);
    //cout<<val<<endl;
    printf("%0.10f", val);
    cout<<endl;
}