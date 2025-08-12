#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Control{

	public:
		static void pos(int num){

	         if(num==0){
                 cout<<"zeros";
			 }else if(pos>0){
				  cout<<"positive";
			 }else{
				  cout<<"negative";
			 }

		}

		static void evenodd(int num){

			 if(num%2==0){
				 cout<<"even\n";
			 }else{
				 cout<<"odd\n";
			 }
		}

		static void maxi(int num1,int num2){

			 if(num1>num2){
				 cout<<"max:"<<num1<<endl;
			 }else{
				 cout<<"max:"<<num2<<endl;
			 }
		}

		static void max3(int num1,int num2,int num3){

			  if(num1>=num2 && num1>=num2){
				  cout<<num1<<endl;
			  }else if(num2>=num1 && num2>=num3){
				  cout<<num2<<endl;
			  }else if(num3>num1 && num3>num2){
				  cout<<num3<<endl;
			  }
		}

		static void leapyear(short year){

			 if((year%4==0) && (year%100!=0)||(year%400==0)){
				 cout<<"leap year!";
			 }else{
				 cout<<"its not leap year!";
			 }
		}

		static void classify(char ch){

			  if(ch=='a' || ch=='A'){
				  cout<<"VOWEL\n";
			  }else if(ch=='i' || ch=='I'){
				  cout<<"VOWEL\n";
			  }else if(ch=='o' || ch=='O'){
				  cout<<"VOWEL\n";
			  }else if(ch=='u' || ch=='U'){
				  cout<<"VOWEL\n";
			  }else if(ch=='e' || ch=='E'){
			      cout<<"VOWEL\n";
			  }else{
				  cout<<"CONSONANT\n";
			  }
		}

		static void stateofchar(char ch){

			 if(ch>='A' && ch<='Z'){
				 cout<<"UPPER CASE\n";
			 }else if(ch>='a' && ch<='z'){
				cout<<"LOWER CASE\n";
	       	 }else if(isdigit(ch)){
				  cout<<"DIGIT\n";
			}
	 }

	  static void voting(int age){

		     if(age>=18){
				 cout<<"eligible for voting!";
			 }else{
				 cout<<"sory try next time!";
			 }
	  }

	   static void gradeMark(int marks){

		    if(marks>=91 && marks<=100){
				 cout<<"A+\n";
			}else if(marks>=81 && marks<=90){
				cout<<"A\n";
			}else if(marks>=71 && marks<=80){
				cout<<"B+\n";
			}else if(marks>=60 && marks<=70){
				cout<<"B-\n";
		    }else{
				cout<<"C\n";
			}
	   }

	   static int isprime(int num){

		    bool isprime=true;

           if (num <=1) {
             cout << "Not prime";
             return 0;
         }

		    for(int i=2;i*i<=num;i++){
				 if(num%i==0){
                       isprime=false;
					   break;
				 }
			}

		  if(isprime){
			  cout<<"yes its primes!";
		  }else{
			  cout<<"its not primes!";
		  }
	   }


	   static void forloop(){

		    for(int i=1;i<=10;i++){
				cout<<i<<endl;
			}
	   } 

	   static void factorial(int num){

		     int fact=1;
			 for(int i=num;i>=1;i--){
				 fact=fact*i;
		  }
			cout<<fact<<endl;
	   }

	   static void reverseNumber(unsigned int num){

		    unsigned int save;
             string ans="";
			 while(num!=0){

				  save=num%10;
				  ans+=to_string(save);
				  num/=10;
			 }

			cout<<"reverse Number:"<<ans<<endl;
	      }

	   
	   static void count(int num){

		     int save;
			 int count=0;
			 while(num!=0){

				  save=num%10;
				  count++;
				  int byn=save;
				  num/=10;
			 }

			cout<<"count Number:"<<count<<endl;
	      }

	    static void sumDigit(int num){
		     int save;
			 int sum=0;
			 while(num!=0){
				  save=num%10;
				  sum+=save;
				  num/=10;
			 }
			cout<<"sum:"<<sum<<endl;
	      }

    static int fabo(int n){
    if (n <= 0) {
        cout << "Invalid input. Number of terms must be positive.";
        return 0;
    }

    long long first = 0, second = 1;

    if (n == 1) {
        cout << first;
        return 0;
    }

    cout << first << " " << second; // print first two terms

    for (int i = 3; i <= n; i++) {
        long long next = first + second;
        cout << " " << next;
        first = second;
        second = next;
    }
                
}
   static void whiles(unsigned int num){

	    while(num>=1){

			  cout<<num<<endl;
			  num--;
	    	}
   }

   static void square(int num1,int num2){


	     for(int i=0;i<num1;i++){  // loop for rows
			 for(int j=0;j<num2;j++){ // loop for columns
				 cout<<"*";
			 }
			cout<<endl;
		  }

      }

    static void skip( unsigned int num){

		  for(int i=1;i<=num;i++){

			   if(i==5){

				   continue;
			   }
			  cout<<i<<" ";
		  }
	}

    static void breaks(int num1){

		  for(int i=0;i<num1;i++){

			    if(i==5){
					break;
				}
			  cout<<i<<" ";
		  }
	}
		static void input(){ 

			  unsigned int num1;
			  cin>>num1;
              breaks(num1);
		}
};
int main(){

	Control::input();

}
