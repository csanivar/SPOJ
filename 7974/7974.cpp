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

using namespace std;

void solve(int n1,int n2,int n3){
	if(n2-n1 == n3-n2){
		cout<<"AP "<<(n3+n2-n1)<<endl;
	}
	else if(n3/n2 == n2/n1 && n3/n2!=0){
		cout<<"GP "<<(n3*n2/n1)<<endl;
	}
	else if(n2/n3 == n1/n2 && n1/n2!=0){
		cout<<"GP "<<(n3/(n1/n2))<<endl;
	}

}

int main(){
	int n1,n2,n3;
	while(cin>>n1>>n2>>n3){
		if(n1==0 && n2==0 && n3==0) break;
		else solve(n1,n2,n3);
	}
}