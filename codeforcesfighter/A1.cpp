#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;
class A1{

	public:
	   static int sumof(int n){

		   return n*(n+1)/2;
	   }

	   static void cal(unsigned int a, signed int b){
           
		     int sum=0;

		     sum=a+b;
			 cout<<sum<<endl;

			 int ans=a-b;
			 cout<<ans<<endl;

			 if(b!=0){
				 cout<<a/b<<endl;
			 }else{
				 cout<<"division by zero!";
			 }
	   }  
	   static bool nisPrime(unsigned int n){

             
		   if(n<=1){

			   return false;
		  }
		        bool isprime = true;
		  		for(int i=2;i*i<=n;i++){
				     if(n%i==0){
						  isprime=false;
						  break;
					 }
			   } 
			 if(isprime){
				    return true;
			 }else{
				    return false;
			 }
	   }

	   static void divisble(int n){

		     int cnt=0;
		     for(int i=1;i<=n;i++){
      		   if(n%i==0){
					  cout<<i<<",";
					  cnt++;
				  }
			 }
			cout<<"count:"<<cnt<<endl;
	   }

	    static void sumDigit(int num){
		     int save;
			 int sum=0;
			 while(num!=0){
				  save=num%10;
				  sum+=save;
				  num/=10;
			 }
			cout<<"sum:"<<sum<<endl;
	      }

		 static void reverseNumber(int num){

			  string revs="";
			  
			  while(num!=0){

				 int k=num%10;
				 revs+=to_string(k);
				 num/=10;
			  }	
			  cout<<"revser:"<<revs<<endl;
		 }

		 static void poweers(unsigned int n){

			  unsigned int ans=1;

			  while((ans<<1)<=n){

				  ans<<=1;
			  }
			  cout<<"laraget power:"<<ans<<endl;
		 }

		 static void mods(int n,int k,int mod){

			   int MOD=100000000+mod ;
			   int ans=pow(n,k);

			   cout<<ans<<endl;
			   cout<<ans%mod;

		 }

		 static int  GCD(int a,int b){

			    if(b==0) return a;

				 return GCD(b,a%b);
			}

		  static int LCM(int a,int b){

			  if(b==0) return 0;

			   return (a*b)/GCD(a,b);

		  }

		  static long long tralingZeros(int n){

			  long long count =0;

			  for(long long  i=5;i<=n;i*=5){

				   count+=n/i;
			  }
			  return count;
		  }

		  static void perpectsquare(int n){

			    bool isperfectsq=false;
				for(int i=0;i<=n;i++){
					 if(n==i*i){
                          isperfectsq=true;
						  break;
					 }
				}
			  if(isperfectsq==true){
				   cout<<"is perfect square!";
			  }else{
				   cout<<"is not perfect square!";
			  }
		  }


		  static int smalllestK(int n){

			   long long sum=0;
			   long long k=0;
				   while(sum<n){
					   k++;
					   sum+=k;
				   }
			   return k;
		  }

		  static unsigned int Fibonaccinumber(unsigned int n){

			    vector<unsigned int>dp(n+1,0);

				dp[0]=0;
				dp[1]=1;

				for(int i=2;i<=n;i++){

					dp[i]=dp[i-1]+dp[i-2];
				}
			 return dp[n];
		  }

static void  prefixSum(int arr[],int size){

	   int arr3[size];
	   arr[size];

	   arr3[0]=arr[0];

	    for(int i=1;i<size;i++){

			 arr3[i]=arr3[i-1]+arr[i];
		}

		for(int i=0;i<size;i++){

			cout<<arr3[i]<<" ";
		}
   }

static void oddSum(int n){

	  int ans=n*n;

	  cout<<ans<<endl;
}

static void countNpair(int n){

	  cout<<n/2<<endl;
}

static void NpowThree(int n){

	  // is time exceed algorith o(n)+o(n);


	   bool ispw=true;

	   vector<int>powers;
       for(int i=0;i<n;i++){

		   unsigned int ans=pow(3,i);
           powers.push_back(ans);
	   }

	   for(auto i:powers){
		   if(n==i){
			   ispw=true;
			   break;
		   }else{
			   ispw=false;
		   }
	   }

	  if(ispw){
		  cout<<"yes";
	  }else{
		  cout<<"no";
	  }
}
static string isPowerof3(int N) {

      if(N<=0) return "No";
      
      while(N%3==0){
          N/=3;
      }
      if(N==1){
          return "Yes";
      }else{
          return "No";
      }
   }
static void input(){

	   int n;
	   cin>>n;
	   NpowThree(n);
   }
};
int main(){

	 A1::input();
}
