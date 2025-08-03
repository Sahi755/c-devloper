#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class Queues{
   
    public:

	   static void printqueue(queue<int>q){

		   cout<<"print queue:";
		   while(!q.empty()){

			   cout<<q.front()<<" ";
			   q.pop();
		   }	
	   }

	   static void nonrep(queue<int>q){

		   unordered_map<int, int> freq;

		   queue<int>qs;

		   while(!q.empty()){

			   int k=q.front();
			   q.pop();
			   freq[k]++;
			   qs.emplace(k);

			    // Remove all repeating elements from the front
			   while(!qs.empty() && freq[qs.front()]>1){

				   qs.pop();
			   }

			   if(!qs.empty()){

				   cout<<qs.front()<<" ";
			   }else{

				   cout<<-1<<endl;
			   }
          }
       }

	   static void reversequeue(queue<int>q){

		      stack<int>st;

			  while(!q.empty()){

				   int k=q.front();
				   st.push(k);
				   q.pop();
			  }

			while(!st.empty()){

				int prints=st.top();
				cout<<prints<<" ";
				st.pop();
			}
	   }

	   static void palindromQ(queue<int>q){

		 
		  int arrs=q.size();
		  int arr[arrs];
		  int k=0;
		  cout<<arrs<<endl;
		  while(!q.empty()){
				arr[k]=q.front();
				k++;
				q.pop();
				
		  }
		 int left=0;
		 int right=arrs-1;
		 bool ispali=true;
		 while(left<right){
			  if(arr[left]!=arr[right]){
				    ispali=false;
					break;
			  }
			  left++;
			  right--;
		 }
         if(ispali){
			 cout<<"is palindrom!";
		 }else{
			 cout<<"is not palindrom!";
		 }
	 }

	 static void intervals(queue<int>&q){

		 /*

		   	 Input: 10 20 30 40 50 60
             firstHalf: 10 20 30
             remaining q: 40 50 60
             After interleaving: 10 40 20 50 30 60
			 The function first checks if the size is even.
             If not, interleaving wouldn't make sense (since two equal halves are needed).
			 We create a new queue firstHalf.
             We remove the first n/2 elements from the original queue and put them into firstHalf.
		 */

		  int k=q.size();

		  if(k%2!=0){

			  cout<<"queue size must be even:";
			  return;
		  }

          queue<int>firstHalf;

		  for(int i=0;i<k/2;i++){
 
			  int m=q.front();
			  firstHalf.emplace(m);
			  q.pop(); 
		  }
		  while(!firstHalf.empty()){

			   q.emplace(firstHalf.front());
			   firstHalf.pop();

			 q.emplace(q.front());
			 q.pop();
		  }
	 }

static void sortQueue(queue<int>& q) {
    int n = q.size();
    queue<int> sorted;

    for (int i = 0; i < n; ++i) {


        int minVal = INT_MAX;
        int size = q.size();


        // Step 1: Find minimum in the unsorted part
        for (int j = 0; j < size; ++j) {
            int val = q.front();
            q.pop();

            if (val < minVal && j < n - i)
                minVal = val;

            q.push(val);
        }


        // Step 2: Push min to sorted queue, rest back to q
        bool pushed = false;
        for (int j = 0; j < size; ++j) {
            int val = q.front();
            q.pop();

            if (val == minVal && !pushed && j < n - i) {
                sorted.push(val);  // move to sorted queue
                pushed = true;

            } else {
                q.push(val);       // keep in original queue
            }
        }
    }

    // Move sorted elements back to original queue
    while (!sorted.empty()) {
        q.push(sorted.front());
        sorted.pop();
    }
}

static void freqency(queue<int>q){

     map<int,int>mp;

	 while(!q.empty()){

		 auto k=q.front();
		 q.pop();
		 mp[k]++;		 
	 }
	 for(auto i:mp){

		 cout<<i.first<<":"<<i.second<<endl;
	 }      	  
}

	   static void inputqueue(){

		   int size;
		   queue<int>q;

			   cout<<"size:";
			   cin>>size;
               
			   cout<<"Enter the queue:";
			   while(size!=q.size()){

                    int num;
					cin>>num;
					q.emplace(num);
			     }
			        
				    freqency(q);
		      }	   
};
int main(){


      Queues::inputqueue();

}
