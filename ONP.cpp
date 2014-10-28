#include <iostream>
#include <cstring>
#include <stack>
#include <cctype>
using namespace std;

int main(){
	int t;
	cin>>t;
	char str[1000];
	stack <char> s;
	while(t-->0){
		cin>>str;
		int len = strlen(str);
		for(int i=0;i<len;i++){
			
			if(isalpha(str[i])) cout<<str[i];
			else if(str[i]==')') {
				cout<<s.top();
				s.pop();
			}
			else if(str[i]!='(') s.push(str[i]);
		}
		cout<<endl;
	}
return 0;
}		
