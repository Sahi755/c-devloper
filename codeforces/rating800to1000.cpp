//g++ --std=c++14 rating800to1000.cpp -o rating800to1000 && rating800to1000
#include<iostream>
#include<string>
#include<set>
#include<cmath>
#include <sstream>
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
};
class string {



};
int main(){


  //  BasicIo::sum(1,20000);
   // BasicIo::loopx1();

     Arrayprob::printArr();


}