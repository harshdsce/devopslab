#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin >> t ;
	
	while(t--)
	{
	    int n ;
	    cin >> n ;
	    
	    int a[n], ev[n], od[n], e = 0, o = 0 ;
	    
	    bool fl = false ;
	    for(int i = 0 ; i < n ; i++)
	    {
	        cin >> a[i] ;
	        
	        if(a[i]%2 == 0)
	        {   e++ ;   ev[e-1] = i+1 ; }
	        
	        else if(a[i] != 1)
	        {
	            o++ ;
	            
	            od[o-1] = i+1 ;
	            
	        }
	        
	        else if(fl == false)
	        {   o++ ; od[o-1] = i+1 ; fl = true ; }
	        
	    }
	    
	    if(e >= 2)
	    cout << ev[0] << " " << ev[1] << endl ;
	    
	    else if(o >= 2)
	    cout << od[0] << " " << od[1] << endl ;
	    
	    else
	    {
	        int tmp = a[0] + a[1] ;
	        
	        fl = false ;
	        
	        for (int i = 2; i <= std::sqrt(tmp); ++i) 
	        {
                if (tmp % i == 0) {
                    fl = true;
                    break;
                }
            }
            
            if(fl)
            cout << 1 << " " << 2 << endl ;
            
            else
            cout << -1 << endl ;
	        
	    }
	    
	    
	}

}
