//g++ --std=c++14 rating800to1000.cpp -o rating800to1000 && rating800to1000
#include<iostream>
#include<string>
#include<set>
#include<cmath>
#include<vector>
#include<stack>
#include <sstream>
#include<map>
using namespace std;
class BasicIo{

      public:
      static void sum(long num1,long num2){

           cout<<num1+num2<<endl;
      }

      static void greet(){

           string name;
           cin>>name;
           cout<<"hello "<<name<<endl; 
      }

      static void evenodd(){

         int n;
         cin>>n;
         string s=(n%2==0)?"even":"odd";
         cout<<s<<endl;
      }

      static void flotproduct(){

          float pi1;
          float pi2;

          cin>>pi1>>pi1;

          float s;
          s=pi1*pi2;

          cout<<"float prodtuct:"<<float(s);
      }

      static void Assci(){

           char ch;

           cin>>ch;

           int k=int(ch);

           cout<<k<<endl;
      }

      static void averageThree(){

          int num1;
          int num2;
          int num3;

          cin>>num1>>num2>>num3;

          int avg=num1+num2+num3;

          cout<<avg/3<<endl;
      }

      static void squares(){

          int side1;
          int side2;

          cin>>side1>>side2;

          int sqrts=side1*side2;

          cout<<sqrts<<endl;

      }

      static void CircleArea(){

          float pi=3.14;

          int radius;
         
          cin>>radius;

          float Areas=pi*(radius*radius);

          cout<<Areas<<endl;
      }

      static void temprature(){

           float celcius;

           cin>>celcius;

           float F=(celcius*9/5)+32;

           cout<<F<<endl;

      }
      
      static void maxof(){

          int num1;
          int num2;

          cin>>num1>>num2;

          int k=(num1>num2)?num1:num2;

          cout<<"MAX:"<<k<<endl;
      }

      static void loopx1(){

           int n;
           cin>>n;

           for(int i=0;i<n;i++){

               cout<<"I love my Aai!"<<endl;
           }
      }
      static void loopx2(){
        
          int num;

          int sum=0;

          cin>>num;

          for(int i=0;i<num;i++){

               int val;
               cin>>val;
               sum+=num;
          }

          cout<<sum<<endl;
      }

      static void multiplicationTable(){

              int num;

              cin>>num;

              for(int i=1;i<=10;i++){

                    cout<<i<<" * "<<num <<"="<<i*num<<endl;
              }
      }

      static void fact(){

            long long fact=1;

            long n;
            cin>>n;

           for(int i=1;i<=n;i++){

                 fact*=i;
           }
           cout<<"factorial:"<<fact<<endl;
      }

      static void positve(){

            int count=0;
            int n;
            cin>>n;

            for(int i=0;i<n;i++){
                   int num;         
                   cin>>num;
                   
                   if(num>0){

                        count++;
                   }
            }
            cout<<"positve:"<<count<<endl;
      }

      static void isprimeor(){

           bool isprime=true;
           int num;
           cin>>num;

     if(num<=1){
           isprime=false; 
     }else{
           for(int i=2;i*i<=num;i++){
               if(num%i==0){
                    isprime=false;
                    break;
               }
           }
        } 
           if(isprime){
                 cout<<"isprime"<<endl;
           }else{
                cout<<"is not prime"<<endl;
             }
      }

      static void printWordBywordp(){

            string s;

            getline(cin,s);

               stringstream ss(s);
               string word;

            while (ss >> word) {
                  cout << word << endl;
              }
      }

      static void reversDigit(){

           long num;

           cin>>num;

           string s="";
           while(num!=0){

                  int save=num%10;
                  s+=to_string(save);
                  num/=10;
           }
           cout<<"reverse digit:"<<s<<endl;
      }

      static void concats(){

           string str1;
           string str2;
           cin>>str1>>str2;
           string s=str1+str2;
           cout<<s<<endl;
      }

      static void VOWELS(){

           string s;

           getline(cin,s);

           set<char>chs;

           for(int i=0;i<s.length();i++){

                 if(s[i]=='a'||s[i]=='u' || s[i]=='e'|| s[i]=='i'||s[i]=='o' || s[i]=='A'||s[i]=='U' || s[i]=='E'|| s[i]=='I'||s[i]=='O'){

                       char v=s[i];
                       chs.insert(v);
                    }
               }
            cout<<"count of VOWELS:"<<chs.size()<<endl;

              for (int x : chs) {

                cout << char(x) << " ";

             }
          }

          static void WordPalindrom(){

               string word="";

               cin>>word;
               bool ispalid=true;
               int left=0;
               int right=word.length()-1;
               while(left<right){

                      if(word[left]!=word[right]){

                         ispalid=false;
                         break;
                      }
                         left++;
                         right--;
               }
               string s=(ispalid)?"ispalindrom!":"its not!";
               cout<<s<<endl;
          }

          static void MakeUpper(){

            string s="";

            string st="";
            cin>>s;

                for(int i=0;i<=s.length()-1;i++){

                     if(s[i]>='a' && s[i]<='z'){

                           s[i]-=32;
                     }
                }
                 cout<<s;
          }

        static void oddeven(){

           int num;
           cin>>num;
           if(num&1){
                  cout<<"odd";
           }else{
                 cout<<"even"<<endl;
           }
        }

     static void maxof2(){

          int num1;
          int num2;

          cin>>num1>>num2;

          if(num1>num2){

               cout<<num1<<endl;
          }else{

               cout<<num2<<endl;
          }
     }
     static void countDigits(int  num){

          int count=0;
          int sum=0;
           while(num!=0){
                int save=num%10;
                sum+=save;
                count++;
                num/=10;
           }

           cout<<"count:"<<count<<endl;
           cout<<"sum of digit:"<<sum;
     }

     static void sortthreedigit(){

             int num1;
             int num2;
             int num3;

             cin>>num1>>num2>>num3;

             
     }
     
     static void inputs(){

          sortthreedigit();
     }

};

class Maths{

   public:

       static void add(int num1,int num2){

           cout<<"sum:"<<num1+num2<<endl;
       }

       static void sub(int num1,int num2){

            cout<<"sub:"<<abs(num1-num2)<<endl;
       }

       static void mul(int num1,int num2){

             cout<<"mul:"<<num1*num2<<endl;
       }

       static void div(int num1,int num2){

            int quotient=num1/num2;
            int remainder=num1%num2;

            cout<<"quotient:"<<quotient<<endl;
            cout<<"remainder:"<<remainder<<endl;

       }
       static void calculateSquareof(int num1){

             int sq=num1*num1;

             cout<<"square of number:"<<sq<<endl;
       }
       static void cubes(int num1){

           int cubeof=num1*num1*num1;

           cout<<"cube:"<<cubeof<<endl;
       }

       static void calculateAvg(int num1,int num2,int num3){

            int sum=num1+num2+num3;

            int avg=sum/3;

            cout<<"average:"<<avg<<endl;
       }

       static void convertMin(int num){

             int hours=num/60;
             int min=num%60;
             
             cout<<"hours:"<<hours<<endl;
             cout<<"min:"<<min<<endl;
       }

       
        static void simpleInterst(int P,int R,int T){

           int simp=(P*R*T)/100;
           cout<<"simple rate:"<<simp<<endl;
     }

     static void compoundIntest(double principal, double rate, double time){

                   double amount = principal * pow(1 + rate / 100, time);
                   double compoundInterest = amount - principal;
                   cout<<"compound interst:"<<compoundInterest<<endl;
       }

       static void binartodecimal(){

              vector<int>vs;
               int num;

              cin>>num;

              while(num!=0){

                   int save=num%10;
                   vs.push_back(save);
                   num/=10;
              }

              int ans2=0;
              for(int i=0;i<vs.size();i++){

                ans2+=vs[i]*pow(2,i);

                }
              cout<<ans2<<endl;
       }

       static void  Collatzsequence(int n){

            int count=0;

             while(n!=1){

                   if(n%2==0){
                      n=n/2;
                      cout<<"->";
                      cout<<n<<" ";

                   }else if(n%2==1){

                       n=3*n+1;
                       cout<<"->";
                       cout<<n<<" ";
                   }

                   count++;
             }
             cout<<"ans:"<<count;
       }

        static void mathinput(){

          int n;
          cin>>n;

          Collatzsequence(n);

        }
};
class Arrayprob{

   public:
      static void printArr(){

            int n;
            cout<<"Enter the size:";
            cin>>n;

            int arr[n];

            cout<<"Enter  arr:";
            for(int i=0;i<n;i++){

                 cin>>arr[i];
            }
            cout<<"print arr:";
            for(int i=0;i<n;i++){

                 cout<<arr[i]<<" ";
            }
      }

      static void reverseArr(int arr[],int n){

           int start=0;
           int end=n-1;

           while(start<end){

                 int temp=arr[start];
                 arr[start]=arr[end];
                 arr[end]=temp;

                  start++;
                  end--;
           }

           cout<<"print arr:";
            for(int i=0;i<n;i++){

                 cout<<arr[i]<<" ";
            } 
      }

      static void maxarr(int arr[],int n){

            int maxi=arr[0];

            for(int i=0;i<n;i++){

                 if(arr[i]>maxi){

                      maxi=arr[i];
                 }
            }
            cout<<"max:"<<maxi<<endl;
      }

       static void minarr(int arr[],int n){

            int mini=arr[0];

            for(int i=0;i<n;i++){

                 if(arr[i]<mini){

                      mini=arr[i];
                 }
            }
            cout<<"min element:"<<mini<<endl;
      }

      static void sumarr(int arr[],int n){

          int sum=0;
          for(int i=0;i<n;i++){

                sum+=arr[i];
          }
          cout<<"sum:"<<sum<<endl;

      }

        static void avgarr(int arr[],int n){

          int sum=0;
          for(int i=0;i<n;i++){

                sum+=arr[i];
          }
          cout<<"sum:"<<sum/n<<endl;

      }
     
      static void countervendodd(int arr[],int n){

            int count=0;
            for(int i=0;i<n;i++){

                  if(arr[i]%2==0){

                       count++;
                  }
            }
            cout<<"count of even:"<<count<<endl;
      }
       static void serachof(int arr[],int n){

            int element;
            bool finds=false;
            int index=0;
            cout<<"Enter the element:";
            cin>>element;

            for(int i=0;i<n;i++){
                 if(arr[i]==element){
                     index=i;
                     finds=true;
                     break;
                 }
            }
            if(finds){
                cout<<index<<endl;
            }else{
                 cout<<"Not found!";
            }

       }

       static void rightShift(int arr[],int n){
               int last=arr[n-1];
               for(int i=n-1;i>0;i--){

                    arr[i]=arr[i-1];
               }

              arr[0]=last;
              for(int i=0;i<n;i++){
              
                  cout<<arr[i]<<" ";
              }
          }



       static void inputarr(){

           vector<string>vs;
           int n;
           cin>>n;
           for(int i=0;i<5;i++){

                 cin>>vs[i];
           }
     
      }

};
class String {

     public:
        static void prints(string s){

            cout<<"print:"<<s<<endl;

        }

        static void printlen(string s){

             cout<<s.length()<<endl;
        }

        static void concatstring(string s,string s2){

             string s3=s+s2;
             cout<<s3<<endl;
        }

        static void copys(string s1){

            string s=" ";
            s=s1;
            cout<<"copy string:"<<s<<endl;
        }

         static void Uppercases(string s){

              for(int i=0;i<s.length();i++){
                    if(s[i]>='a' && s[i]<='z'){
                           s[i]-=32;
                    }
              }
              cout<<"upper case:"<<s<<endl;
         }

      static void Lowercase(string s){

            for(int i=0;i<s.length();i++){

                 if(s[i]>='A' && s[i]<='Z'){
                       s[i]+=32;
                 }
            }
            cout<<"upper case:"<<s<<endl;
         }

         static void counttype(string s){

               int countVoe=0;
               int countCon=0;

               for(int i=0;i<s.length();i++){
                   if(s[i]=='a'||s[i]=='u' || s[i]=='e'|| s[i]=='i'||s[i]=='o' || s[i]=='A'||s[i]=='U' || s[i]=='E'|| s[i]=='I'||s[i]=='O'){

                        countVoe+=1;
                   }else{
                         countCon+=1;
                   }
               }
               cout<<"Count VOWELS:"<< countVoe<<endl;
               cout<<"count Conosont:"<<countCon<<endl;
         }

      static void palindrom(string s){

             bool ispali=true;
             int left=0;
             int right=s.length()-1;

             while(left<right){

                   if(s[left]!=s[right]){

                        ispali=false;
                        break;
                   }
                   left++;
                   right--;
               }
             string s2=(ispali)?"ispalindrom!":"is not palindrom!";
             cout<<s2<<endl;
          }

     static void findfreq(string s){

          map<char,int>freq;

          for(auto i:s){

              freq[i]++;
          }

          for(auto i:freq){

                cout<<i.first<<":"<<i.second<<endl;
          }
     }

     static void  reverseString(string s){

            int start=0;
            int end=s.length()-1;

            while(start<=end){

               char temp=s[start];
               s[start]=s[end];
               s[end]=temp;

               start++;
               end--;
            }
            cout<<"reverse string:"<<s<<endl;
     }

     static void substring(string s){

          
     }

     static void Hyfon(string s){

                 for(int i=0;i<s.length();i++){

                        if(s[i]>=' ' && s[i]<=' '){

                             s[i]='-';

                        }
                 }
               cout<<s<<endl;
          }

          static void BalancedParentheses(string s){

               stack<int>st;
               
               for(auto i:s){

                    if(i=='('){
                          st.push(i);
                    }else if(i==')'){

                          if(st.empty()){
                              cout << "Input: \"" << s << "\" -> false" << endl;
                               return;
                          }
                          st.pop();
                    }
               }
               if(st.empty()){
                    
                      cout << "Input: \"" << s << "\" -> true" << endl;
               }else{
                       cout << "Input: \"" << s << "\" -> false" << endl;
               }
        }

          static void toggalCase(string s){

                string result="";
                 for(auto i:s){

                     if(i>='a' && i<='z'){
                          result+=toupper(i);
                     }else{
                           result+=tolower(i);
                     }
              }      
              cout<<result<<endl;
          }

        static void extraction(string s){

             vector<char>v;

             for(auto i:s){

                 if(i>='0' && i<='9'){

                      v.push_back(i);
                 }
             }

             string ans(v.begin(),v.end());

             cout<<ans<<endl;

        }
        static void input(){
             string s1;
            getline(cin,s1);
            extraction(s1);
        }
};
class  RecursionBacktracking{
       public:
          static void  rec1Ton(int current, int n){

               if(current>n){
                    return;
               }    
               cout<<current<<" ";

               rec1Ton(current+1,n);
          }
};

int main(){

    //BasicIo::inputs();

    //String::input();

     //Arrayprob::inputarr();

     Maths::mathinput();

     //RecursionBacktracking::inputRecursion();
}