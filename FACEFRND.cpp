#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int t;
	cin>>t;
	vector<int> v1;
	vector<int> v2;
	int count=0;
	while(t--){
		int n1;
		cin>>n1;
		v1.push_back(n1);
		int len;
		cin>>len;
		vector<int> temp_v;
		for(int i=0;i<len;i++){
			int tmp;
			cin>>tmp;
			temp_v.push_back(tmp);
		}
		if(count!=0) {
			sort(v2.begin(),v2.end());
			sort(temp_v.begin(),temp_v.end());
			vector<int> c(v2.size()+len);
			vector<int>::iterator it = set_union(v2.begin(),v2.end(),temp_v.begin(),temp_v.end(),c.begin());
			c.resize(it-c.begin());
			v2.resize(0);
			v2 = c;
		}
		else {
			for(int i=0;i<len;i++) v2.push_back(temp_v[i]);
		}
		count++;
	}
	vector<int> c(v1.size());
	vector<int>::iterator it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),c.begin());
	c.resize(it-c.begin());
	int res = v2.size() - c.size();
	cout<<res<<endl;
	return 0;
}
