#include<iostream>
#include<vector>
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

                    arr[i]=arr[i-3];
               }

              arr[0]=last;
              for(int i=0;i<n;i++){

                  cout<<arr[i]<<" ";
              }
      }

       static void inputArr(){
          int size;
          int arr[10];
          int T;
          cin>>T;
          while(T--){
               int pos;
               cin>>size;
               for(int i=0;i<size;i++){
                  cin>>arr[i];
               }
                  rightRotate(arr,size);
          }
       }
};
int main(){

   Arrays::inputArr();
}