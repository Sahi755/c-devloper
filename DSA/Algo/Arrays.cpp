#include<iostream>
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

	   static inputArray(){

		    int arr[10];
			int size;

			int T;

			cin>>T;
			cin>>size;

			while(T--){
				 for(int i=0;i<size;i++){
					  cin>>arr[i];
				 }
				   minFound(arr,size);
			}
		 }
};
int main(){

	Array::inputArray();
}
