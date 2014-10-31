#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int a,int b){
	vector<int> last_digits;
	last_digits.push_back(a%10);
	int temp = a;
	while(1){
		temp = temp * a;
		int last_digit = temp%10;
		if(last_digit==last_digits[0]) break;
		else last_digits.push_back(last_digit);
	}
	int index = b%last_digits.size() - 1 ;
	if(index!=-1) cout<<last_digits[index]<<endl;
	else cout<<last_digits[last_digits.size()-1]<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(b==0) cout<<1<<endl;
		else solve(a,b);
	}
}