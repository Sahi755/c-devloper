#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include <numeric> 
#include <iomanip>
using namespace std;
class Vectors{

  public:
	 static void display(vector<int>&vs){

		  for(int i:vs){
			    cout<<i<<" ";
		   }
	 }
	 static deleteLastelement(vector<int>&vs){

          vs.pop_back();
          cout<<"remove back element:";
		  display(vs);
	 }
      
   	static void maxelement(vector<int>&vs){

	 	auto maxi=max_element(vs.begin(),vs.end());
	    cout<<"maxi:"<<*maxi;
	 }

	static void minelement(vector<int>&vs){

		auto minx=min_element(vs.begin(),vs.end());
		cout<<"min:"<<*minx<<endl;
	}

    static void reverseVector(vector<int>&vs){
	   	reverse(vs.begin(),vs.end());
		cout<<"reverse vector:";
		display(vs);
	}	
	static void sortdata(vector<int>&vs){

		 sort(vs.begin(),vs.end()); 
		 cout<<"display:";
		 display(vs);
	}

	static void countfreq(vector<int>&vs){

	    int element;
		cout<<"Enter the element:";
		cin>>element;
		auto it=count(vs.begin(),vs.end(),element);
		cout<<it<<endl;
	}
	static void RotateLeft(vector<int>vs){

	    int k;	
		cout<<"enter the k:";
		cin>>k;
	
	    rotate(vs.begin(),vs.begin()+k,vs.end());
  
			   cout<<"display left rotate k postion:";
	           display(vs);
		}

   static void RotateRight(vector<int>&vs){
         
	   int k;

	   cout<<"Enter the k:";
	   cin>>k;

	   int n=vs.size();
	   rotate(vs.begin(),vs.begin()+(n-k%n),vs.end());

	   cout<<"right rotate by k:";
       display(vs);
   }

   static void findsecondlargest(vector<int>&vs){

	    // only for uniq data 
	    sort(vs.begin(),vs.end());

		int left=0;
	    int right=vs.size();

		bool allequals=false;
		while(left<right){
		     if(vs[left]==vs[right]){
				   allequals=true;
			 }
		     left++;
		     right--;	 
		}
	   if(allequals==false){
		    cout<<vs[vs.size()-2];
	   }else{
		    cout<<"all elements are equals!";
	   }
   }

   static string duplicateFirst(vector<int>&vs){

       map<int,int>mp;
	   for(int ints :vs){
		   mp[ints]++;
	   }

	   for(int ints:vs){
		   if(mp[ints]>1){

			   return to_string(ints); 
		   }
	   } 
	   return "none";

   }

  static void Alluniq(vector<int>vs){

	  set<int>st; 
	  for(auto i:vs){
		 st.insert(i);
	  }

	  for(auto i:st){
		  cout<<i<<" ";
	  } 
  }

  static void sumvector(vector<int>vs){


	 int sum=accumulate(vs.begin(),vs.end(),0);

	 cout<<"sum:"<<sum<<endl;
}

 static void palindromvector(vector<int>vs){

	  int right=vs.size()-1;
	  int left=0;

	  bool ispali=true;
	  while(left<right){

		   if(vs[left]!=vs[right]){
                 ispali=false;
				 break;
		   }
		  left++;
		  right--;
	  }

	  if(ispali){
		   cout<<"is palindrom array!";
	  }else{
		   cout<<"is not palindrom array!";
	  }
 }

 static void perfixsum(vector<int>vs){

	  vector<int>vs2(vs.size());
	  vs2[0]=vs[0];

	  for(int i=1;i<vs.size();i++){

		   vs2[i]=vs2[i-1]+vs[i];
	  }

	  for(auto i:vs2){

		  cout<<i<<" ";
	  }
 }
static void inputvector(){

		  int size;
		  int T;
		  vector<int>vs;
		  cin>>T;
		  while(T--){
			  cin>>size;
			  for(int i=0;i<size;i++){
				   int num;
				   cin>>num;
				   vs.emplace_back(num);
			  }			      

			    perfixsum(vs);
			    vs.clear();
		  }
      }
};

class Methodtraing{

    public:
		 static void display(vector<int>&vs){

			 vector<int>::iterator it;
			 for(it=vs.begin();it!=vs.end();it++){
				  cout<<*it<<" ";
			 }
	      }
		    static void  reversevector(vector<int>vs){
          
			 for(auto it=vs.rbegin();it!=vs.rend();it++){
				 cout<<*it<<" ";
			 }
		 }
		       static void sums(vector<int>vs){

			  auto sum=0;
			  vector<int>::iterator its;
			  for(auto it=vs.cbegin();it!=vs.cend();it++){
				   sum+=*it;
			  }
			  cout<<sum<<endl;
		 }

	  	 static void rev(vector<int>vs){
			 for(auto it=vs.crbegin();it!=vs.crend();it++){
				  cout<<*it<<" ";
			 }
		 }

		 static void mul(vector<int>vs){


	    	 }

		  static void inputvector(){
		  int size;
		  int T;
		  vector<int>vs;
		  cin>>T;
		  while(T--){
			  cin>>size;
			  for(int i=0;i<size;i++){
				   int num;
				   cin>>num;
				   vs.emplace_back(num);
			  }			      
			    rev(vs);
			    vs.clear();
		  }
      }
};
int main(){

	Methodtraing::inputvector();
}
