#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int recurse(string str,string out,int chk_pos){
	if(out[chk_pos]!='9'){
		int tmp = (int)out[chk_pos];
		tmp++;
		out[chk_pos]=(char)tmp;
		out[out.length()-1-chk_pos]=(char)tmp;
		if(atof(out.c_str())>atof(str.c_str())) {
			cout<<out<<endl;
			return 0;
		}
		else recurse(str,out,chk_pos-1);
	}
	else recurse(str,out,chk_pos-1);
	return 0;
}

int main(){
	long t;
	cin>>t;
	while(t-- >0){
		string str;
		string out;
		int str_val;
		cin>>str;
		out = str;
		str_val = atoi(str.c_str());
		int len = str.length();
		if(len%2==0){
			for(int i=0;i<len/2;i++){
				out[i] = str[i];
				out[len-1-i] = str[i];
			}
			if( atof(out.c_str())>str_val ) {
				cout<<out<<endl;
			}
			else recurse(str,out,len/2-1);
		}
		else {
			for(int i=0;i<=len/2;i++){
				out[i] = str[i];
				out[len-1-i] = str[i];
			}
			if( atof(out.c_str())>str_val ) {
				cout<<out<<endl;
			}
			else recurse(str,out,len/2);
		}
	}
	return 0;
}
