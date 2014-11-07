#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <bitset>
#include <cstring>
#include <map>

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

bool checkPalin(string s){
    int len = s.length();
    int mid = len/2;
    bool res = false;
    for(int i=0;i<mid;i++){
        if(s[i]==s[len-i-1]) res = true;
        else{
            res = false;
            break;
        }
    }
    return res;
}


int main() {	
    map<uint,uint> values;
    bitset<16> a;
    vector<long long> d;
    string s = "addfgertwtregfdda";
    cout<<checkPalin(s)<<endl;
    return 0;
}
