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

vector<int> divide(vector<int> num,int divisor){
	int size = num.size();
	vector<int> ans;
	int temp = 0;
	for(int i=0;i<size;i++){
		temp = temp*10 + num[i];
		if(temp/divisor==0 && temp!=0) continue;
		else{
			ans.push_back(temp/divisor);
			temp = temp%divisor;
		}
	}
	//for(int i=0;i<ans.size();i++) cout<<ans[i];
	//	cout<<" ";
	return ans;
}

vector<int> add(vector<int> n1,vector<int> n2){
	int size = max(n1.size(),n2.size());
	if(size>n1.size()) swap(n1,n2);
	int temp[size];
	memset(temp,0,sizeof(n1));
	int size2 = n2.size();
	for(int i=0;i<size2;i++){
		temp[size-size2+i] = n2[i];
	}
	int ans[size+1];
	memset(ans,0,sizeof(ans));
	int temp2 = 0;
	for(int i=size-1;i>=0;i--){
		int sum = n1[i] + temp[i] + temp2;
		if(sum>=10){
			sum = sum -10;
			temp2 = 1;
		} 
		else temp2 = 0;
		ans[i+1] = sum;
		if(i==0 && temp2==1) ans[0] = 1;
	}
	vector<int> result;
	if(ans[0]!=0) result.push_back(ans[0]);
	for(int i=1;i<size+1;i++){
		result.push_back(ans[i]);
	}
	return result;
}

vector<int> subtract(vector<int> n1,vector<int> n2){
	int size = n1.size();
	int temp[size];
	memset(temp,0,sizeof(n1));
	int size2 = n2.size();
	for(int i=0;i<size2;i++){
		temp[size-size2+i] = n2[i];
	}
	int temp_ans[size];
	memset(temp_ans,0,sizeof(temp_ans));
	int temp2 = 0;
	for(int i=size-1;i>=0;i--){
		int diff = n1[i] - temp[i] + temp2;
		if(diff<0){
			diff = 10 + diff;
			temp2 = -1;
		}
		else temp2 = 0;
		temp_ans[i] = diff;
	}
	vector<int> ans; 
	int temp3 = 0;
	for(int i=0;i<size;i++){
		if(temp_ans[i]==0 && temp3==0) continue;
		else{
			ans.push_back(temp_ans[i]);
			temp3 = 1;
		}
	}
	if(ans.size()==0) ans.push_back(0);
	//for(int i=0;i<ans.size();i++) cout<<ans[i];
	//	cout<<" ";
	return ans;
}

void solve(vector<int> n1,vector<int> n2){
	vector<int> ans;
	ans = subtract(n1,n2);
	ans = divide(ans,2);
	vector<int> temp;
	temp = add(ans,n2);
	for(int i=0;i<temp.size();i++) cout<<temp[i];	
	cout<<endl;
	for(int i=0;i<ans.size();i++) cout<<ans[i];
	cout<<endl;
}

int main(){
	for(int i=0;i<10;i++){
		vector<int> n1;
		vector<int> n2;
		string s="";
		getline(cin,s);
		for(int j=0;j<s.length();j++){
			if(s[j]-'0'>=0 && s[j]-'9'<=0) n1.push_back(s[j]-'0');
		}
		s = "";
		getline(cin,s);
		for(int j=0;j<s.length();j++){
			if(s[j]-'0'>=0 && s[j]-'9'<=0) n2.push_back(s[j]-'0');
		}
		solve(n1,n2);
	}
}