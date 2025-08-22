#include<iostream>
using namespace std;
void solve(int m,int a,int b,int c){
 
	    int ans=0,rem=0;
        ans+=min(m,a);
		rem+=m-min(m,a);

        ans+=min(m,b);
		rem+=m-min(m,b);

        ans+=min(rem,c);
        cout<<ans<<'\n';
		
	 }

     

int main(){


}
