#include<iostream>
#include<algorithm>
#include<vector>
#include<vector>
#include<cmath>
#include<set>
#include<string>
using namespace std;
class Group1{

	  public:
		static void solve(string s){

			  int count=0;
               for(int i=0;i<s.length();i++){

				    if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='E'||s[i]=='U'){

						  count+=1;
					}
			   }
			  cout<<count<<endl; 
		  }

		  static void sumofDigit(int num){


			  int sum=0;

			   while(num!=0){
				   int save=num%10;
				   sum+=save;
				   num/=10;
			   }

			   cout<<sum;
		  }

		  static void palindroms(string s){

			  string ori=s;

			  reverse(s.begin(),s.end());

              if(ori==s){

				  cout<<"Yes";
			  }else{
				  cout<<"No";
			  }
		  }

		  static void max3(int num1,int num2,int num3){

			   if(num1>=num2 && num1>=num3){

				    cout<<num1;

			   }else if(num2>=num1 && num2>=num3){

				    cout<<num2;

			   }else if(num3>=num1 && num3>=num2){
				   
                   cout<<num3;
			   }
		  }


		  static long long fact(int num){
			   
			   if(num<=1){
				   return 1;
			   }
			   return num*fact(num-1);
		  }
};
class  Group2{

	  public:
		  static void Rotates(vector<int>&vs){

			    rotate(vs.begin(),vs.end()-1,vs.end());

				for(auto i:vs){

					cout<<i<<" ";
				}

		  }

		  static void max_elements(vector<int>& vs) {

			  int maxi = vs[0];

			  for (int i = 0; i < vs.size(); i++) {

				  if (vs[i] > maxi) {

					  maxi = vs[i];
				  }
			  }
			  cout << maxi << endl;
		}

		 static void secondLarge(vector<int>&vs){

			   
		 }

		 static void reverseArr(vector<int>&vs){
 
			     int right=vs.size()-1;
				 int left=0;

				 int temp;
				 while(left<right){

					 temp=vs[left];
					 vs[left]=vs[right];
					 vs[right]=temp;

					 right--;
					 left++;
				 }

	   for(auto i:vs){

		   cout<<i<<" ";
	    }
   }

	static void duplicateCount(vector<int>&vs,int num){

		   int count=0;

		   for(int i=0;i<vs.size();i++){

			    if(num==vs[i]){

					 count++;
				}
		   }
		 cout<<count<<endl;
	}

	static void AllUniq(vector<int>&vs){

           set<int>uniq;

           for(auto i:vs){

			    uniq.insert(i);
		   }		 
		  vs.clear();
		  for(auto i:uniq){

			   cout<<i<<" ";
		  } 
	}

	static void ArraySorted(vector<int>&vs){

		  bool isSorted=true;
          
		 int left=0;
		 int  right=vs.size()-1;

		  while(left<right){
			   if(vs[left]>vs[left+1]){
				      isSorted=false;
					  break;
			   }

			   left++;
		  }

		 if(isSorted){
			 cout<<"its sorted!";
		 }else{
			 cout<<" its not sorted!";
		 }
	}

	static void merage(vector<int>&vs,vector<int>&vs2){

		int count=vs2.size();

		int i=0;

		while(i<count){
		
			  int num=vs2[i];
			  vs.push_back(num);
			  i+=1;
		}

		for(auto i:vs){
			 cout<<i<<" ";
		}
	 }
};
class Group3{

	 public:
		  static void prob1(int n){
			   for(int i=1;i<=n;i++){
				   cout<<i<<" ";
			   }
		  }

		  static void prob2(int n){

			   cout<<"Even numbers:";
			   for(int i=0;i<=n;i++){
				   if(i%2==0){
					   cout<<i<<" ";
				   }
			   }
		  }

		  static void prob3(int n){
			   cout<<"odd numbers:";
			   for(int i=0;i<=n;i++){
				    if(i%2==1){
						cout<<i<<" ";
					}
			   }
		  }

		  static void prob4(long n){

			   int sum=0;
			   for(int i=0;i<=n;i++){ 
				    sum+=i;
			   }
			   cout<<"sum:"<<sum<<endl;
		  }
		  static void prob5(long  n){

			   int product=1;


			   for(int i=1;i<=n;i++){
                    product*=i;
			   }
			  cout<<"product and factorial also:"<<product<<endl;
		  }

		  static void prob6(long n){

			    string s=" ";
				long save;

				while(n!=0){

					  save=n%10;
					  s+=to_string(save);
					  n/=10;
				}
			    cout<<"reverse:"<<s<<endl;
		  }

		  static void prob7(int n){

			bool isprime=true;

			if(n<=1){
				  isprime=false;
			}else{
			   for(int i=2;i*i<=n;i++){
                      if(n%i==0){
						  isprime=false;
						  break;
					  }
			   }
	  	  }
			  if(isprime){
				  cout<<"is prime!"<<endl;
			  }else{
				  cout<<"is not prime"<<endl;
			  }
		  }

	static bool prob8(int n){

		  if(n<=1) return false;
			   for(int i=2;i*i<=n;i++){
				    if(n%i==0){
					  return false;
					}
			   }
			  return true;
      	}

	 static void prob9(int n){

		   cout<<sizeof(long long );

		   unsigned long long fact=1;
		    for(int i=1;i<=n;i++){
				  fact*=i;
			}
		   cout<<"factorial of "<<n<<"is:"<<fact<<endl;
	 }

	 static void prob10(int n){

	   vector<int>fab(n+1);

		    fab[1]=1;
			fab[0]=0;

		    for(int i=2;i<=n;i++){

				 fab[i]=fab[i-1]+fab[i-2];
			}
		  for(auto i:fab){
			   cout<<i<<" ";
		  }
	 }

	 static void prob11(int n){

		   int sumEven=0;
		   for(int i=0;i<=n;i++){
			     if(i%2==0){
					 sumEven+=i;
				 }
		   }
		   cout<<sumEven<<endl;
	 }

	 static void prob12(int n){

		   int num=n;
		   long save;
		   string rever="";

		   while(num!=0){
			    save=num%10;
				rever+=to_string(save);
				num/=10;
		   }
		   string ori=to_string(n);
		   if(ori==rever){
			   cout<<"is palindrom";
		   }else{
			   cout<<"is not palindrom!";
		   }

		 }

	   static void prob13(int n){

		    for(int i=0;i<=n;i++){
				 if(i%2==0){
					  continue;
				 }else{
					  cout<<i<<endl;
				 }
			}
	   }
	   static void prob14(int n){

		    vector<int>digi;
			 int numsave;
			 while(n!=0){
				   numsave=n%10;
				   digi.push_back(numsave);
				   n/=10;
			 }
            auto maxi=max_element(digi.begin(),digi.end());
			cout<<"max:"<<*maxi<<endl;
	   }

	   static void prob15(int n){

		     vector<int>digi;
			 int numsave;
			 while(n!=0){
				   numsave=n%10;
				   digi.push_back(numsave);
				   n/=10;
			 }
            auto maxi=min_element(digi.begin(),digi.end());
			cout<<"min:"<<*maxi<<endl;
	   }

	   static void prob16(int num){

		     for(int i=0;i<=num;i++){

				   for(int j=0;j<=i;j++){

					    cout<<"j";
				   }

				  cout<<endl;
			 }

	   }

	    static void prob17(int num){

		     for(int i=0;i<=num;i++){

				   for(int j=i;j<=num;j++){
					    cout<<"j";
				   }
				  cout<<endl;
			 }
	   }
	
	   static void prob18(int n){

		     int num=0;
		     for(int i=1;i<=n;i++){
				   num+=pow(i,2);
			 }
			cout<<num<<endl;
	   }

	    static void inputloop(){
			  int n;
			  cin>>n;
			  prob18(n);
		  }

};
class Group4{

	  public:
		 static signed int BinarySearch(int arr[],int size,int target){

			     int low=0;
				 int high=size-1;

				 while(low<=high){
					  int mid=low+(high-low)/2;
					  if(arr[mid]==target){
						   return mid;
					  }else if(arr[mid]>target){
						      high=mid-1;
					  }else{
						      low=mid+1;
					  }
				 }
			  return -1;
		 }

		 static int  firstAcuurance(int arr[],int size,int target){


			     int low=0;
				 int high=size-1;
				 int result=-1;

				 while(low<=high){
					  int mid=low+(high-low)/2;
					  if(arr[mid]==target){
						  result=mid;
						  high=mid-1;
					  }else if(arr[mid]<target){
						     low=mid+1;
					  }else{
						     high=mid-1;
					  }
				 } 
			  return result;
		 }

		static int lastAcuurance(int arr[],int size,int target){

			  int low=0;
			  int high=size-1;
			  int result=-1;

			  while(low<=high){
				    int mid=low+(high-low)/2;
					if(arr[mid]==target){
						  result=mid;
						  low=mid+1;
					}else if(arr[mid]<target){
                          low=mid+1;
					}else{
						  high=mid-1;
					}
			  }
			 return result;
		}

		static int countAccurance(int arr[],int size,int target){

			 
			    int first=firstAcuurance(arr,size,target);
				if(first==-1) return 0;
				int last=lastAcuurance(arr,size,target);

				return last-first+1;
		}

		static int lowerBound(int arr[],int size,int target){

		       int low=0;
			   int high=size-1;
			   int smallest=-1;

			   while(low<=high){
				     int mid=low+(high-low)/2;

					if(arr[mid]>=target){
						  smallest=mid;
						  high=mid-1;
					}else{
						  low=mid+1;
					}	
			   }
			 return smallest;
		}

	static int upperBound(int arr[],int size,int target){

			  int low=0;
			  int high=size-1;
			  int largest=-1;

			 while(low<=high){
				    int mid=low+(high-low)/2;

					if(arr[mid]<=target){
						  largest=mid;
						  low=mid+1;
					}else{
						 high=mid-1;
					}
			   }
			  return  largest;
		}

	  public:
		 static void inputArr(){

			   int arr[10];
			   int size;
			   int target;
			   

			   cout<<"size:";
			   cin>>size;

			   cout<<"Enter the element:";
			   for(int i=0;i<size;i++){
				    cin>>arr[i];
			   }

			   cout<<"Enter the target:";
			   cin>>target;

                int upperbound=upperBound(arr,size,target);

			   if(upperbound!=-1){
				   cout<<"found:"<<upperbound<<endl;
			   }else{
				   cout<<"not found:"<<upperbound<<endl;
			   }
		 }
};
class Group5{

	  
};
int main(){

	Group4::inputArr();

}
