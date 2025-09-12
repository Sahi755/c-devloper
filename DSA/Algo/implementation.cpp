#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
using namespace std;
class Group1{

	  public:
		static void solve(string s){

			  int count=0;
               for(int i=0;i<s.length();i++){

				    if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='E'||s[i]=='U'){

						  count+=1;
					}
			   }
			  cout<<count<<endl; 
		  }

		  static void sumofDigit(int num){


			  int sum=0;

			   while(num!=0){
				   int save=num%10;
				   sum+=save;
				   num/=10;
			   }

			   cout<<sum;
		  }

		  static void palindroms(string s){

			  string ori=s;

			  reverse(s.begin(),s.end());

              if(ori==s){

				  cout<<"Yes";
			  }else{
				  cout<<"No";
			  }
		  }

		  static void max3(int num1,int num2,int num3){

			   if(num1>=num2 && num1>=num3){

				    cout<<num1;

			   }else if(num2>=num1 && num2>=num3){

				    cout<<num2;

			   }else if(num3>=num1 && num3>=num2){
				   
                   cout<<num3;
			   }
		  }


		  static long long fact(int num){
			   
			   if(num<=1){
				   return 1;
			   }
			   return num*fact(num-1);
		  }
};
class  Group2{

	  public:
		  static void Rotates(vector<int>&vs){

			    rotate(vs.begin(),vs.end()-1,vs.end());

				for(auto i:vs){

					cout<<i<<" ";
				}

		  }

		  static void max_elements(vector<int>& vs) {

			  int maxi = vs[0];

			  for (int i = 0; i < vs.size(); i++) {

				  if (vs[i] > maxi) {

					  maxi = vs[i];
				  }
			  }
			  cout << maxi << endl;
		}

		 static void secondLarge(vector<int>&vs){

			   
		 }

		 static void reverseArr(vector<int>&vs){
 
			     int right=vs.size()-1;
				 int left=0;

				 int temp;
				 while(left<right){

					 temp=vs[left];
					 vs[left]=vs[right];
					 vs[right]=temp;

					 right--;
					 left++;
				 }

	   for(auto i:vs){

		   cout<<i<<" ";
	    }
   }

	static void duplicateCount(vector<int>&vs,int num){

		   int count=0;

		   for(int i=0;i<vs.size();i++){

			    if(num==vs[i]){

					 count++;
				}
		   }
		 cout<<count<<endl;
	}

	static void AllUniq(vector<int>&vs){

           set<int>uniq;

           for(auto i:vs){

			    uniq.insert(i);
		   }		 
		  vs.clear();
		  for(auto i:uniq){

			   cout<<i<<" ";
		  } 
	}

	static void ArraySorted(vector<int>&vs){

		  bool isSorted=true;
          
		 int left=0;
		 int  right=vs.size()-1;

		  while(left<right){
			   if(vs[left]>vs[left+1]){
				      isSorted=false;
					  break;
			   }

			   left++;
		  }

		 if(isSorted){
			 cout<<"its sorted!";
		 }else{
			 cout<<" its not sorted!";
		 }
	}

	static void merage(vector<int>&vs,vector<int>&vs2){

		int count=vs2.size();

		int i=0;

		while(i<count){
		
			  int num=vs2[i];
			  vs.push_back(num);
			  i+=1;
		}

		for(auto i:vs){
			 cout<<i<<" ";
		}
	 }
};
class Group3{


};
int main(){

	  vector<int>vs;
	  vector<int>vs2;

	  int size;
	  int q;
	  cin>>size;

	   for(int i=0;i<size;i++){

		   int ans;
		   cin>>ans;
		   vs.push_back(ans);
	   }

	   for(int i=0;i<size;i++){

		   int ans;
		   cin>>ans;
		   vs2.push_back(ans);
	   }

	   Group2::merage(vs,vs2);

}
