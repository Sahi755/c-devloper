//g++ --std=c++14 rating800to1000.cpp -o rating800to1000 && rating800to1000
#include<iostream>
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

};
int main(){

    BasicIo::sum(1,20000);
    BasicIo::maxof();


   
}