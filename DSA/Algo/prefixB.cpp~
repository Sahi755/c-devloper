#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

class BinarySearch{

	  public:
		 static int Bsearch(int arr[],int size,int element){

			 int left=0;
			 int right=size-1;

			 while(left<=right){
				 int mid = left + (right - left) / 2;

				 if(arr[mid]==element)
					  return mid;
				 else if(arr[mid]<element)					 
					   left=mid+1;
				 else
					   right=mid-1;
				 }

			 return -1;
		 }


static int firstOccurrenceSTL(const vector<int>& nums, int target) {

    auto it = lower_bound(nums.begin(), nums.end(), target);

    if (it != nums.end() && *it == target)

        return it - nums.begin();
    return -1;
}

static int lastOccurrenceSTL(const vector<int>& nums, int target){
      
     auto it=upper_bound(nums.begin(),nums.end(),target);

	  if(it!=nums.begin() && *(it-1)==target)

         return (it-1)-nums.begin();
      
       return -1;		 
  }

static void countAccur(const vector<int>&nums,int target){

	 int count=0;
	 int left=0;
	 int right=nums.size()-1;

	 while(left<right){
		    if(nums[left]==target){
		    	count+=1;
			}
	     left++;
	   }
	   cout<<count<<endl;
     }
};
class prefix{
  
	 public:
		 static void prefixsum(vector<int>&vs){  

			  int n=vs.size();
			  vector<int>vs2(vs.size());

             vs2[0]=vs[0];
		     for(int i=1;i<=vs.size();i++){

				  vs2[i]=vs2[i-1]+vs[i];

			  }
			 for(auto i:vs2){

				 cout<<i<<" ";
			 }
		 }
};
int main(){

	vector<int>vs;
	int size;
    int element;
	int T;
	cin>>T;
	while(T--){   
			cin>>size;

			for(int i=0;i<size;i++){
				int num;
				cin>>num;
				vs.push_back(num);
			} 
	      prefix::prefixsum(vs);

	  }
	 vs.clear();
}
