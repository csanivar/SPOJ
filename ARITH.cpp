#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
			string inp;
			string num1,num2;
			char opr;
			cin>>inp;
			int len = inp.length();
			for(int i=0;i<len;i++){
				if(inp[i]<48||inp[i]>57){
					opr = inp[i];
					num1 = inp.substr(0,i);
					num2 = inp.substr(i+1,len);
				}
			}
			int len1 = num1.length();
			int len2 = num2.length()+1;
			if(len1>len2){
				if(opr=='-'){
					int tmp = atof(num1.c_str())-atof(num2.c_str());
					int tmp_len = to_string(tmp).length();
					if(tmp_len>len1){
						for(int i=0;i<tmp_len-len1;i++) cout<<" ";
						cout<<num1<<endl;
						for(int i=0;i<tmp_len-len2;i++) cout<<" ";
						cout<<opr<<num2<<endl;
						for(int i=0;i<len1;i++) cout<<"-";
						cout<<endl;
						cout<<tmp<<endl;
					}
					else {
						cout<<num1<<endl;
						for(int i=0;i<len1-len2;i++) cout<<" ";
						cout<<opr<<num2<<endl;
						for(int i=0;i<len1;i++) cout<<"-";
						cout<<endl;
						for(int i=0;i<len1-tmp_len;i++) cout<<" ";
						cout<<tmp;
					}
				}
						
			}
			else if(len1==len2) cout<<num1<<endl<<opr<<num2<<endl;
			else if(len2>len1){
				for(int i=0;i<len2-len1;i++) cout<<" ";
				cout<<num1<<endl<<opr<<num2<<endl;
				for(int i=0;i<len2;i++) cout<<"-";
				cout<<endl;
			}
	}
	return 0;
}
