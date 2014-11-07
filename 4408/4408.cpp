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


# define M_PIl          3.141592653589793238462643383279502884L

typedef long long ll;

using namespace std;

int main(){
	int t;
	while(cin>>t && t!=0){
		double T = t*t;
		double ans = T/(double)(2*M_PIl);
		cout<<fixed<<setprecision(2)<<ans<<endl;
	}
}