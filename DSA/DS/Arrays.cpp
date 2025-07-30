#include<iostream>
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

       static void inputArr(){

          int size;
          int arr[10];
          int T;
          cin>>T;
          for(int i=0;i<size;i++){


          }
       }
};
int main(){


}