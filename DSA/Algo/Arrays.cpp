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
			 cout<<"last ocurance:"<<*lastOcur<<endl;
			 indexLast.clear();

	  }

	   static void Reverseof(vector<int>&vs){

		    int left=0;
			int right=vs.size()-1;

			while(left<right){

              int temp=vs[left];
			  vs[left]=vs[right];
			  vs[right]=temp;

			  left++;
			  right--;
			}

		   for(auto i:vs){
			   cout<<i<<" ";
		   }
	   }

	   static void Rotateleft(vector<int>&vs){
 
		    rotate(vs.begin(),vs.begin()+1,vs.end());
			for(auto i:vs){
				cout<<i<<" ";
			}
	   }

	   static void Rotateright(vector<int>&vs){

		    int k=1;
			int n=vs.size();
			k=k%n;
		    rotate(vs.begin(),vs.begin()+(n-k),vs.end());
			for(auto i:vs){
				cout<<i<<" ";
			}
	   }

	    static void prefixSum(vector<int>&vs){

			 vector<int>prefix(vs.size());
			 prefix[0]=vs[0];

			 for(int i=1;i<vs.size();i++){

				  prefix[i]=prefix[i-1]+vs[i];
			 }
			 for(auto i:prefix){
				  cout<<i<<" ";
			 }
		}

		static void findsum(vector<int>&vs){

			 vector<int>prefix(vs.size()); 
			 prefix[0]=vs[0];

			 for(int i=1;i<vs.size();i++){
				  prefix[i]=prefix[i-1]+vs[i];
			 }

			  for(auto i:prefix){
				  cout<<i<<" ";
			 }

			  cout<<endl;

            int L;
			int R;

			cout<<"left and right:";
			cin>>L>>R;
			int sum=prefix[R]-(L>0? prefix[L-1]:0);

		   	cout<<"sum of :"<<sum<<endl;
		}

		static void kadane(vector<signed int>&vs){

			 int n=vs.size();
			 int currentSum=vs[0];
			 int maxSum=vs[0];

			 for(int i=1;i<vs.size();i++){

				   currentSum=max(vs[i],currentSum+vs[i]);
				   maxSum=max(maxSum,currentSum);
			 }

			 cout<<maxSum<<endl;
		}

		static void minimum_subarry(vector<signed int>&vs){

		   	signed int current_min=vs[0];
			signed int global_min=vs[0];

			  for(int i=1;i<vs.size();i++){
                    current_min=min(vs[i],current_min+vs[i]);
					global_min=min(global_min,current_min);
			  }
			  cout<<"global_min:"<<global_min<<endl; 
		}


static void maximumproduct(vector<signed int>&nums){
		
	int n = nums.size();
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < 0) 
            swap(maxProd, minProd);  // because multiplying with negative flips min/max

        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);

        result = max(result, maxProd);
    }

	cout<<"max product:"<<result<<endl;
}

static void minproduct(vector<int>&vs){

	 int n=vs.size();
	 int  maxProd=vs[0];
	 int  minProd=vs[0];
	 int  result=vs[0];

	 for(int i=1;i<n;i++){

		   if(vs[i]<0)
			   swap(maxProd,minProd);

		  maxProd=max(vs[i],maxProd*vs[i]);
		  minProd=min(vs[i],minProd*vs[i]);

		  result=min(result,minProd);
	 }

	  cout<<result<<endl;
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

				  minproduct(arr);	
				  arr.clear();
			}
		 }
};
int main(){

	Array::inputvector();
}
