#include<iostream>
#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Arrays{
	
	public:

		static void display(vector<int>&vs){
			 for(auto i:vs){
				 cout<<i<<" ";
			 }
		}

 static void subarrmax(int arr[], int size) {
    int maxSoFar = INT_MIN;
    int maxEndingHere = 0;

    for (int i = 0; i < size; i++) {
        maxEndingHere += arr[i];
        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }

    cout << "Maximum Subarray Sum: " << maxSoFar << endl;
}


static void duplicate(int arr[],int size){

	  vector<int>vs;
      map<int,int>mp;

	  for(int i=0;i<size;i++){
		  int t=arr[i];
		  vs.push_back(t);
	  }

	  for(auto i:vs){
		  mp[i]++;
	  }
	  
	  string s;
	  for(auto i:vs){
		  if(mp[i]>1){
             s=to_string(i);
		  }
	  }
	 cout<<s<<endl;
}

static void moveAllzeros(int arr[],int size){

	  arr[size];
	  sort(arr,arr+size);
	  vector<int>backzero;

	  stack<int>st;
	  
	  for(int i=0;i<size;i++){

		   int t=arr[i];
		   st.push(t);
	  }

	  while(!st.empty()){

		   int t=st.top();
		   backzero.push_back(t);
		   st.pop();
	  }

	   for(auto i:backzero){

		   cout<<i<<" ";
	   }  
 }  
 static void movesZerosend(int arr[],int size){
          
          int n=size;
          int nonzero=0;
          for(int i=0;i<size;i++){
               if(arr[i]!=0){
                    arr[nonzero++]=arr[i];
               }
          }
          while(nonzero<n){
                arr[nonzero++]=0;
          }
          for(int i=0;i<size;i++){
               cout<<arr[i]<<" ";
          }
}
static void Rotateright(int arr[],int size){

	 vector<int>vs;

	 for(int i=0;i<size;i++){

		 int s=arr[i];
		 vs.push_back(s);
	 }

	 int n=vs.size();
	 int k;
	 cout<<"Enter the k:";
	 cin>>k;

	 rotate(vs.begin(),vs.begin()+(n-k%n),vs.end());

	 for(auto i:vs){

		 cout<<i<<" ";
	 }
}
static void RotateLeft(int arr[],int size){
  
	int k; 
	 vector<int>vs;

	 for(int i=0;i<size;i++){

		 int s=arr[i];
		 vs.push_back(s);
	 }
	cout<<"Enter the size:";
	cin>>k;
	rotate(vs.begin(),vs.begin()+k,vs.end());

	for(auto i:vs){

		cout<<i<<" ";
	}

}
static void fixArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Place arr[i] at the correct index if not already in place
        while (arr[i] != -1 && arr[i] != i) {
            // If arr[i] == arr[arr[i]], break to avoid infinite loop
            if (arr[i] == arr[arr[i]]) break;

            // Swap arr[i] and arr[arr[i]]
            swap(arr[i], arr[arr[i]]);
        }
    }

    // Set remaining elements to -1 if they are not at correct index
    for (int i = 0; i < n; i++) {
        if (arr[i] != i)
            arr[i] = -1;
    }
}

static void sumofpair(int arr[],int size){

	 
}
static void inputArray(){

             int T;
			 int arr[10];
			 cin>>T;
			 while(T--){
			     int size;
		       	 cin>>size;
                 for(int i=0;i<size;i++){
					  
					  cin>>arr[i];
				  }
                       sumofpair(arr,size);
				 }
	    	}
};
int main(){

   
	Arrays::inputArray();
}
