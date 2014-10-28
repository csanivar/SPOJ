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

int reverse(int num){
	int result = num%10;
	num = num/10;
	while(num!=0){
		result = result*10 + num%10; 
		num = num/10;
	}
	return result;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int num1,num2;
		cin>>num1>>num2;
		cout<<reverse(reverse(num1)+reverse(num2))<<endl;
	}
}