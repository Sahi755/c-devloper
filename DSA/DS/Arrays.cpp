#include<iostream>
#include<vector>
#include<set>
#include<climits>
#include<stack>
#include<algorithm>
using namespace std;
class Arrays{

    public:
       static void maxArr(int arr[],int size){

            int maxi=arr[0];
            for(int i=0;i<size;i++){
                 if(arr[i]>maxi){
                     maxi=arr[i];
                 }
            }
            cout<<"Max:"<<maxi<<endl;
       }

    static void secondmin(int arr[],int size){

         sort(arr,arr+size);
         bool allsame=false;
         int secondmin=0;
         int left=0;
         int right=size-1;
         while(left<=right){
                if(arr[left]==arr[left+1]){
                       allsame=true;
                }
                left++;
         }
         if(allsame==false){
               cout<<arr[1];
         }else{
               cout<<"No second min all are same!";
         }
    }


     static void elementSorted(int arr[],int size){

         bool isSorted=true;
         for(int i=0;i<size;i++){
              if(arr[i]>=arr[i+1]){
                   isSorted=false;
              }
         }

         if(isSorted==true){
            cout<<"array is sorted!";

         }else{
              cout<<"array is not sorted!";
         }
     }

      static void reverseArray(int arr[],int n){

            int start=0;
            int end=n-1;
            while(start<end){
                   int temp=arr[start];
                   arr[start]=arr[end];
                   arr[end]=temp; 
                   start++;
                   end--;
            }
            cout<<"reverse arr:" ;

            for(int i=0;i<n;i++){

                 cout<<arr[i]<<" ";
            }
      }

      static void rightRotate(int arr[],int n){

               int last=arr[n-1];

               for(int i=n-1;i>0;i--){

                    arr[i]=arr[i-1];
               }

              arr[0]=last;
              for(int i=0;i<n;i++){

                  cout<<arr[i]<<" ";
              }
         }
     static void misstingNumber(int arr[],int size){
  
     }

      static void findduplicate(int arr[],int size){

      
     }

     static void removeDuplicate(int arr[],int size){

           sort(arr,arr+size);

           set<int>st;
           for(int i=0;i<size;i++){

               st.insert(arr[i]);
           }

           for(auto i:st){
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

     static void countEvenOdd(int arr[],int size){

          int countEven=0;
          int countOdd=0;

          for(int i=0;i<size;i++){

                if(arr[i]%2==0){
                    countEven++;
                }else{
                    countOdd++;
                }
          }
           
          cout<<"even:"<<countEven<<endl;
          cout<<"odd:"<<countOdd<<endl;
     }

     static void sumofarr(int arr[],int size){
            int sum=0;
            for(int i=0;i<size;i++){
                 sum+=arr[i];
            }
            cout<<"sum:"<<sum<<endl;
     }
     static void subarrmax(int arr[],int size){
          // (Kadane’s Algorithm)
          int Maxsorfar=INT_MIN;
          int MAXendinghere=0;

          for(int i=0;i<size;i++){
                MAXendinghere+=arr[i];
                if(Maxsorfar<MAXendinghere)
                     Maxsorfar=MAXendinghere;
                if(MAXendinghere<0)
                    MAXendinghere=0;
          }

        cout<<Maxsorfar<<endl;

     }

     static void intersection(int nums1[], int nums2[],int size1,int size2){
             vector<int>get;
             set<int>st;
           for(int i=0;i<size1;i++){
               for(int j=0;j<size2;j++){
                     if(nums1[i]==nums2[j]){
                          int t=nums1[i];
                          st.insert(t);
                          break;
                     }
               }
           }
       for(auto i:st){
              get.push_back(i);
             }
       for(auto i:get){
            cout<<i<<" ";
             }
     }
       static void inputArr(){

          int size1;
          int size2;
          int arr1[10];
          int arr2[10];
          int T;
          cin>>T;
          while(T--){
               cout<<"Enter the sizees:";
               cin>>size1>>size2;
               cout<<"enter the data:";
               for(int i=0;i<size1;i++){
                  cin>>arr1[i];
               }
                cout<<"enter the data:";
                for(int i=0;i<size2;i++){
                  cin>>arr2[i];
               }
                 intersection(arr1,arr2,size1,size2);
          }
     }
};
int main(){

   Arrays::inputArr();
}