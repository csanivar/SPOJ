#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>
#include <map>
#include <set>
#include <cassert>
#include <cstdio>
#include <cmath> 

typedef long long ll;

using namespace std;

void solve(int n){
	float temp = (float)(sqrt((8*n)+1) - 1);
	int group = 0;
	if(fmod(temp,2)==0) group = temp/2;
	else group = temp/2 +1;
	int f1 = n - ((group)*(group-1))/2;
	int f2 = group*(group+1)/2 - n + 1;
	if(group%2==0){
		cout<<"TERM "<<n<<" IS "<<f1<<"/"<<f2<<endl;
	}	
	else cout<<"TERM "<<n<<" IS "<<f2<<"/"<<f1<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		solve(n);
	}
}