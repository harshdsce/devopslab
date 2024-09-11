#include <iostream>
using namespace std;
#define int long long

int32_t main() {
	int T;
	cin>>T;
	while(T--)
	{
	  int n,m;
	  cin>>n>>m;
	  if(n>m)
	  cout<<2*m+1<<endl;
	  else 
	  cout<<-1<<endl;
	  
	}
	return 0;
}
