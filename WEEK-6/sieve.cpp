#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool>Sieve(int n) {
    vector<bool>sieve(n+1,true);
    //if(n==0) return false;
    sieve[0] = sieve[1] = false;
    for(int i=2;i*i<=n;i++) {      //Optimization 2
        if(sieve[i]) {
            //int j=2*i;
            
            int j=i*i;            //Optimization No. 1
            
            while(j<=n) {
                sieve[j] = false;
                j+=i;
            }
        }
    }
    return sieve;
}

vector<bool>segSieve(int l,int r) {
    vector<bool>sieve = Sieve(sqrt(r));
    vector<bool>basePrimes;
    for(int i=0;i<sieve.size();i++) {
        if(sieve[i]) {
            basePrimes.push_back(i);
        }
    }
    
}

int main() {
    vector<bool>sieve=Sieve(25);
    for(int i=0;i<=25;i++) {
        if(sieve[i]) {
            cout<<i<<" ";
        }
    }
}