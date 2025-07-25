//g++ --std=c++14 STLS.cpp -o STLS && STLS
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
class Vector{

     public:
        static void printvector(vector<int>vs){

            for(auto i:vs){

                cout<<i<<" ";
            }

            cout<<endl;
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

        static void deleteMe(vector<int>vs){

              int pos;
              cout<<"original vector:"<<endl;
              vs.pop_back();
              cout<<" after delete last element:";
              printvector(vs);
              auto it=vs.begin();

              cout<<"Enter the pos:";
              cin>>pos;
              vs.erase(it+pos-1);
              cout<<"delete after first element:";
              printvector(vs);
        }

        static void Access(vector<int>vs){
               
               int vsize=vs.size()-1;
               cout<<"access first eleemnt:";
               auto it1=vs.begin(); // use also vs.front() 
               cout<<"first:"<<*it1<<endl;
               int mid=0+vs.size()/2;
               cout<< "mid:"<<vs.at(mid)<<endl;
               cout<<"accesss last element:"; // use also vs.back()
               int it3=vs.at(vsize);
               cout<<it3<<endl;
            
        }

        static void check(vector<int>vs){

               //vs.clear();

               if(!vs.empty()){

                     cout<<"size:"<<vs.size()<<endl;
                     cout<<"capacity:"<<vs.capacity()<<endl;
               }else{

                     cout<<"vector is empty!";
               }               
        }

        static void reversevector(vector<int>vs){

         cout<<"reverse vector:";
         vector<int>::reverse_iterator it=vs.rbegin();

         int i=0;
        for(;it!=vs.rend();++it){

              *it=++i;
        }
            for(auto it=vs.begin(); it!=vs.end();it++){

                    cout<<*it<<" ";
            }
        }

    static void sorts(vector<int>vs){

         cout<<"sort by assending order:";
         sort(vs.begin(),vs.end());
         printvector(vs);

    }

    static void  frequency(vector<int>vs){

         map<int,int>counts;

          for(auto i:vs){

              counts[i]++;
          }

          for(auto i:counts){

               cout<<i.first<<":"<<i.second<<" "<<endl;
          }
    }

    static void maxof(vector<int>vs){

         
         auto it=max_element(vs.begin(),vs.end());
         auto it2=min_element(vs.begin(),vs.end());

         cout<<"MAX:"<<*it<<endl;
         cout<<"min:"<<*it2<<endl;

    }

    static void duplicates(vector<int>vs){

          auto it=unique(vs.begin(),vs.end());

          vs.erase(it,vs.end());

          for(auto i:vs){

              cout<<i<<" ";
          }
    }

    static void finds(vector<int>vs){

          int index=0;

          int element;

          cout<<"Enter the element:";
          cin>>element;

          auto it=find(vs.begin(),vs.end(),element);

        if(it!=vs.end()){

            cout<<*it<<endl;
        }else{

            cout<<"Not found!";
        }
    }

    static void avge(vector<int>vs){

          int sum=0;

           for(auto i:vs){

               sum+=i;
           }

         double avg=sum/vs.size();

         cout<<"Sum:"<<sum<<endl;
         cout<<"average:"<<avg<<endl;

      }

      static void removeEven(vector<int>vs){

          auto it=remove_if(vs.begin(),vs.end(),[](int x){

               return x%2==0;
          });

          vs.erase(it,vs.end());

           cout<<"remove vector:";
           printvector(vs);

        }

        static void RotateVector(vector<int>vs){

              int mid=0+vs.size()/2;

              rotate(vs.begin(),vs.begin()+mid,vs.end());

              cout<<"after rotate:";
              printvector(vs);

        }

        static void secondlargest(vector<int>vs){

               sort(vs.begin(),vs.end());

               cout<<vs.back()-1<<endl;
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

          Vector::secondlargest(vs);
          vs.clear();

    }
}