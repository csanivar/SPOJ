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

string solve(int input[],int n){
	for(int i=0;i<n;i++){
		if(input[input[i]-1]!=i+1) return "not ambiguous";
	}
	return "ambiguous";
}

int main(){
	int t;
	while(cin>>t && t!=0){
		int input[t+2];
		memset(input,0,sizeof(input));
		for(int i=0;i<t;i++){
			cin>>input[i];
		}
		cout<<solve(input,t)<<endl;
	}
}