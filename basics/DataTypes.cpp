#include<iostream>
#include <limits>
#include <iomanip>
using namespace std;
class Datatype{

	public:
	  static void displaydata(){

		   int num1=34;
		   float num2=3.6;
		   double num3=73.78;
		   string str="sahil bhosale";
		   char s='S';

		   cout<<"int:"<<num1<<endl;
		   cout<<"num2:"<<num2<<endl;
		   cout<<"num3:"<<num3<<endl;
		   cout<<"str:"<<str<<endl;
		   cout<<"s:"<<s<<endl;
	  }

	  static void datasize(){

		  cout<<"int:"<<sizeof(int)<<endl;
		  
		  cout<<"flaot:"<<sizeof(float)<<endl;

		  cout<<"double:"<<sizeof(double)<<endl;

		  cout<<"char:"<<sizeof(char)<<endl;

		  cout<<"long:"<<sizeof(long)<<endl;

		  cout<<"signed:"<<sizeof(signed)<<endl;

		  cout<<"unsigned:"<<sizeof(unsigned)<<endl;

		  cout<<"long long:"<<sizeof(long long)<<endl;

	  }

	  static void limitsof(){

    cout << "Range of int:" << endl;
    cout << "  Minimum: " << numeric_limits<int>::min() << endl;
    cout << "  Maximum: " << numeric_limits<int>::max() << endl;

    cout << "\nRange of float:" << endl;
    cout << "  Minimum: " << numeric_limits<float>::min() << endl;
    cout << "  Maximum: " << numeric_limits<float>::max() << endl;

	  cout << "Range of double:" << endl;
    cout << "  Minimum: " << numeric_limits<double>::min() << endl;
    cout << "  Maximum: " << numeric_limits<double>::max() << endl;

    cout << "\nRange of char:" << endl;
    cout << "  Minimum: " << numeric_limits<char>::min() << endl;
    cout << "  Maximum: " << numeric_limits<char>::max() << endl;

	  cout << "Range of unsigned int :" << endl;
    cout << "  Minimum: " << numeric_limits< unsigned int>::min() << endl;
    cout << "  Maximum: " << numeric_limits< unsigned int>::max() << endl;

    cout << "\nRange of long :" << endl;
    cout << "  Minimum: " << numeric_limits<long>::min() << endl;
    cout << "  Maximum: " << numeric_limits<long>::max() << endl;
 
    }

	static void demodata(){

		 signed int num1=-1;
		 unsigned int num2=1;

		 cout<<num1<<endl;
		 cout<<num2<<endl;
	}

	static void prints(){

		char s='s';

		cout<<s<<endl;
	}

	static void bools(){

	    bool isready=true;

		cout<<isready<<endl;

	}

	static void longnum(){

		 long num=3584896;
		 long long num2=48869406595969LL;

		 cout<<num<<endl;
		 cout<<num2<<endl;

	}

	static void doubls(){

		 cout<<fixed<<setprecision(15);
		 double pi=3.14159265358979323846;
		 cout<<pi<<endl;

	}

	static void shorts(){

		short num=3566;

		cout<<num<<endl;
	}

	static void swap(){

		 int num1;
		 int num2;

		 cin>>num1>>num2;

		 int temp=num1;
		 num1=num2;
		 num2=temp;

		 cout<<num1<<","<<num2<<endl;
	}

	static void overflow(){

    unsigned char value = numeric_limits<unsigned char>::max(); // 255
    cout << "Initial value (max): " << static_cast<int>(value) << endl;

    value += 1; // overflow happens here
    cout << "After adding 1: " << static_cast<int>(value) << endl;
		 
	}

	static void implicitconversion(){

    int intValue = 5;        // integer
    double doubleValue = 2.5; // double

    // int to double (implicit conversion)
    double result1 = intValue + doubleValue; 
    cout << "int + double (int converted to double): " << result1 << endl;

    // double to int (implicit conversion, fractional part lost)
    int result2 = intValue + doubleValue; 
    cout << "int + double assigned to int (double converted to int): " << result2 << endl;
		  
	}

	static void explicits(){

     double pi = 3.14159;

    // Explicit conversion to int using static_cast
    int intPi = static_cast<int>(pi); 
    cout << "Original double: " << pi << endl;
    cout << "After explicit conversion to int: " << intPi << endl;
		 
	}
};
int main(){

	    Datatype::overflow();

}
