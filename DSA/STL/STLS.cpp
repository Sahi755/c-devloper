//g++ --std=c++14 STLS.cpp -o STLS && STLS
#include<iostream>
#include<vector>
using namespace std;
class Vector{

     public:
        static void printvector(vector<int>vs){

            for(auto i:vs){

                cout<<i<<" ";
            }
        }

        static void pushfront(vector<int>vs){

              int num;
              int pos;
              cout<<"Enter the num:";
              cin>>num;
              auto it=vs.begin();
              vs.insert(it,num);
              printvector(vs);

        }

        static void pushBack(vector<int>vs){

             int num;
             cout<<"Enter the num:";
             cin>>num;

             vs.push_back(num);
             cout<<"print at back:";
             printvector(vs);
        }
};
int main(){
    
    int T;

    cin>>T;

    while(T--){

         vector<int>vs;
          int n;
          cin>>n;
          for(int i=0;i<n;i++){

                int k;
               cin>>k;
               vs.push_back(k);
        
          }
          Vector::pushBack(vs);
          vs.clear();
    }
}