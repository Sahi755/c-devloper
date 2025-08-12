#include<iostream>
using namespace std;
unsigned int add(unsigned int num1,unsigned int num2){

	 return num1+num2;
}
signed int sub(signed int num1,signed int num2){

	 return num1-num2;
}
unsigned int mul(unsigned int num1,unsigned int num2){

	 return num1*num2;
}
int divi(int num1,int num2){

	 return num1/num2;
}

int squre(int value){

	return value*value;
}

unsigned long cube(unsigned long value){

	return value*value*value;
}

bool iseven(int num){

	  if(num%2==0){
		  return true;
	  }else{

		  return false;
	  }
}

bool odds(int num){

	if(num%2==1){
		return true;
	}else{
		return false;
	}
}

int maxi(int num1,int num2){

	  if(num1>num2){
		  return num1;
	  }else{
		  return num2;
	  }
}

int mini(int num1,int num2){

	if(num1<num2){
		return num1;
	}else{
		return num2;
	}
}

long long fact(int num){

	  if(num<1) return 1;

	  return num*fact(num-1);

}

int  fabonachi(int num){

	   if(num<=0){

            cout << "Invalid input. Number of terms must be positive.";
            return 0;
	   }

	   long long first=0,second=1;

    if (num == 1) {
        cout << first;
        return 0;
    }


       cout<<first << " " <<second; 
	   cout<<endl; // print first two terms

	   for(int i=3;i<=num;i++){

		     long long temp=first+second;
			 cout<<"  "<<temp;
			 first=second;
			 second=temp;
	   }
}
int main(){

	cout<<add(1,2)<<endl;
	
	cout<<"addtion:"<<add(1000,20000)<<endl;

	cout<<"addtion:"<<add(100,20000)<<endl;

	cout<<"addition:"<<add(1000,20000)<<endl;

	cout<<"addtion:"<<add(1,200000000)<<endl;


	cout<<"substraction:"<<sub(1000,20000)<<endl;

	cout<<"substraction:"<<sub(100,20000)<<endl;

	cout<<"substraction:"<<sub(1000,20000)<<endl;

	cout<<"substraction:"<<sub(1,200000000)<<endl;

	
	cout<<"multiplication:"<<mul(1000,20000)<<endl;

	cout<<"multiplication::"<<mul(100,20000)<<endl;

	cout<<"multiplication:"<<mul(1000,20000)<<endl;

	cout<<"multiplication:"<<mul(1,200000000)<<endl;

    int n=divi(4,2);
	cout<<n<<endl;
    n=divi(8,2);
	cout<<n<<endl;
	n=divi(12,2);
	cout<<n<<endl;

    cout<<squre(5)<<endl;
	
    cout<<squre(10)<<endl;

    cout<<squre(15)<<endl;

    cout<<squre(20)<<endl;

    cout<<squre(25)<<endl;

    cout<<squre(100)<<endl;

    cout<<squre(1000)<<endl;

    cout<<squre(12)<<endl;

    cout<<squre(9)<<endl;

    cout<<squre(10)<<endl;

	cout<<cube(10)<<endl;
    cout<<cube(100)<<endl;
	cout<<cube(1000)<<endl;
	cout<<cube(10000)<<endl;
	cout<<cube(100000)<<endl;
	cout<<cube(1000000)<<endl;
	cout<<cube(1000000)<<endl;
	cout<<cube(1000000)<<endl;

	cout<<iseven(2)<<endl;
	cout<<iseven(4)<<endl;
	cout<<iseven(8)<<endl;
	cout<<iseven(12)<<endl;
	cout<<iseven(1)<<endl;
	cout<<iseven(9)<<endl;

	cout<<endl;

    cout<<odds(2)<<endl;
	cout<<odds(4)<<endl;
	cout<<odds(8)<<endl;
	cout<<odds(12)<<endl;
	cout<<odds(1)<<endl;
	cout<<odds(9)<<endl;

	cout<<endl;

	cout<<maxi(2,3)<<endl;
	cout<<maxi(3,4)<<endl;
	cout<<maxi(8,5)<<endl;
	cout<<maxi(12,8)<<endl;
	cout<<maxi(1,99)<<endl;
	cout<<maxi(9,1)<<endl;

	
	cout<<endl;
	cout<<mini(2,3)<<endl;
	cout<<mini(3,4)<<endl;
	cout<<mini(8,5)<<endl;
	cout<<mini(12,8)<<endl;
	cout<<mini(1,99)<<endl;
	cout<<mini(9,1)<<endl;

    cout<<endl; 
    cout<<fact(2)<<endl;
	cout<<fact(4)<<endl;
	cout<<fact(8)<<endl;
	cout<<fact(12)<<endl;
	cout<<fact(5)<<endl;
	cout<<fact(9)<<endl;

	int k;
	cin>>k;
	fabonachi(k);
	
}
