//g++ --std=c++14 code2.cpp -o code2 && code2:wd
//g++ --std=c++14 code3.cpp -o code3 && code3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Algorithms{
};

class NewAlgo{

	public:
        static int gcd(int a, int b) {
       if (b == 0)
          return a;
         return gcd(b, a % b);
        }
         static int lcm(int a, int b) {
           return (a * b) / gcd(a, b);
      }

	   static int oddcount(int x){
	         
	           int count=0;
	           for(int i=0;i<=x;i++){
	               
	                if(i%2==1) count++;
	           }
	        return count;
	    }
	    
	  static int evencount(int x){
	        
	         int count=0;
	         for(int i=0;i<=x;i++){
	             if(i%2==0)count++;
	         }
	         return count;
	    }

	  static void equalstringsum(string s){

		    vector<unsigned int>vs;

				unsigned int sum1=0;
				unsigned int sum2=0;

				 for(long unsigned int i=0;i<s.length();i++){
					   
					   int sum=s[i]-'0';
					   vs.push_back(sum);  	         	   
				 }
				 int n=vs.size()/2;
                 int count=0;
				 for(int i=0;i<n;i++){

					   sum1+=vs[i]; 
					   count++;
				 }
				 for(int i=count;i<6;i++){
					   sum2+=vs[i];
				 }
				 if(sum1==sum2){
					 cout<<"YES\n";
				 }else{
					 cout<<"NO\n";
				 }
	  }

	   static void Cointransform(long long x){ 
			   long long ans=1;
			   while(x>3){
				     x/=4;
					 ans*=2;
				}
			   cout<<ans<<endl;
 		 }

	    static bool perpectsqure(int n){
			  if(n<0) return false;
			  if(n==0) return true;
			  int root=sqrt(n);
			  return root*root==n;

		}

};
class Solution:public NewAlgo{

	public:
	   
       static void solve(int n){
			    
             
	}

	static void input(){	
			    int T;
				cin>>T;
				while(T--){
					int size;
					cin>>size;
					vector<int>arr(size);
					for(int i=0;i<size;i++)cin>>arr[i];			 
   				}

				solve(arr);

	       }

		static void singleInputs(){
             int T;
			 cin>>T;
			 while(T--){

				  int n;
				  cin>>n;

				  solve(n);
			 }
    	}
};
int main(){

	Solution::singleInputs();
 }

