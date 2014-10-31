#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <bitset>
#include <cstring>

#define MOD 1000000007

using namespace std;

long long combi(int n, int r) {
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}


int main() {		
	int n = 16385;
    bitset<16> a = n;
    cout<<a<<endl;
    return 0;
}
