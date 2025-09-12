#include<iostream>
#include<algorithm>
#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Array{

	public:
		static void maxFound(int arr[],int size){

			  int maxi=arr[0];
			  for(int i=0;i<size;i++){
				   if(arr[i]>maxi){
					    maxi=arr[i];
				   }
			  }
			cout<<"Max:"<<maxi<<endl;
	   }

	  static void minFound(int arr[],int size){

		    int mini=arr[0];
			for(int i=0;i<size;i++){
				if(arr[i]<mini){
					 mini=arr[i];
				}
			}
		    cout<<"min:"<<mini<<endl;
	  }

	  static void sums(int arr[],int size){

		   int sum=0;

		   for(int i=0;i<size;i++){
			   sum+=arr[i];
		   }

		  cout<<sum<<endl;
	  }

	  static void averageof(int arr[],int size){

		   int sum=0;
		   double avg;

		   for(int i=0;i<size;i++){
                sum+=arr[i];
		   }

		   avg=sum/size;
		   cout<<"Average:"<<avg<<endl;
	  }

	  static void frequencyCount(int arr[],int size,int target){

		    int  count=0;
		    for(int i=0;i<size;i++){
				 if(arr[i]==target){
					 count++;
				 }
			}
		  cout<<"freqency:"<<count<<endl;	
	  }

	  static void firstOcurace(vector<int>&vs,int target){

		     int minindex=0;

             vector<int>indexfirst;

			 for(int i=0;i<vs.size();i++){

				  if(vs[i]==target){

					  minindex=i;
					  indexfirst.push_back(minindex);
				  }
			 }

			 auto firstOcur=min_element(indexfirst.begin(),indexfirst.end());

			 cout<<"firstOcur:"<<*firstOcur<<endl;
			 indexfirst.clear();
	  }

	    static void LastOcurace(vector<int>&vs,int target){

		     int maxindex=0;
             vector<int>indexLast;
			 for(int i=0;i<vs.size();i++){

				  if(vs[i]==target){

					  maxindex=i;
					  indexLast.push_back(maxindex);
				  }
			 }

			 auto lastOcur=max_element(indexLast.begin(),indexLast.end());
			 cout<<"firstOcur:"<<*lastOcur<<endl;
			 indexLast.clear();

	  }

	   static void Reverseof(vector<int>&vs){



	   }

	   static inputArray(){

		    int arr[10];
			int size;
            int target=0;
			int T;

			cin>>T;		

			while(T--){
				 cin>>size;
				 for(int i=0;i<size;i++){
					  cin>>arr[i];
				 }
				  cin>>target;
				  frequencyCount(arr,size,target);	
			}
	}

	    static inputvector(){

		    vector<int>arr;
			int sizein;
            int target=0;
			int T;
			cin>>T;		
			while(T--){

				 cin>>sizein;
				 for(int i=0;i<sizein;i++){
					  
					    int t;
						cin>>t;
						arr.push_back(t);
				 }

				  cin>>target;
				  LastOcurace(arr,target);	
				  arr.clear();
			}
		 }
};
int main(){

	Array::inputvector();
}
