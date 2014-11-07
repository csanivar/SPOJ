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
#include <sstream>
#include <iomanip>

typedef long long ll;

using namespace std;

string solve(vector<int> pos){
	vector<int> unsort_pos = pos;
	sort(pos.begin(),pos.end());
	vector<int> que;
	que.push_back(pos[pos.size()-1]+1);
	int j=0;
	for(int i=0;i<pos.size();i++){
		if(unsort_pos[i]==pos[j]){
			j++;
		}
		else if(que[que.size()-1]==pos[j]){
			i--;
			j++;
			que.pop_back();
		}
		else{
			if(que[que.size()-1]<unsort_pos[i]) return "no";
			else que.push_back(unsort_pos[i]);
		}
	}
	return "yes";
}

int main(){
	int t;
	while(cin>>t && t!=0){
		vector<int> pos;
		for(int i=0;i<t;i++){
			int tmp;
			cin>>tmp;
			pos.push_back(tmp);
		}
		cout<<solve(pos)<<endl;
	}
}