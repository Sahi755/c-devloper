#include<iostream>
#include<bits\stdc++.h>
#include<string.h>
using namespace std;
class String{

	 public:
	    static void FindLen(string s){

			 int count=0;

			 vector<char>str;
			 for(auto i:s){

				 str.push_back(i);
				 count+=1;
			 }
			 cout<<count<<endl;
		 }

		static void reverseString(string s){

			int left=0;
			int right=s.length()-1;

			 while(left<right){

				 char temp=s[left];
			     s[left]=s[right];
			     s[right]=temp;

			     left++;
			     right--;	 
			 }

			cout<<"reverse string :"<<s<<endl;
		}

		static void palindrom(string s){

			string oristr=s;

			reverse(s.begin(),s.end());

			if(oristr==s){
				cout<<"its palindrom";
			}else{
				cout<<"its not palindrom";
			}

		}
};
int main(){


	  string s1="";
	  cin>>s1;
	  String::palindrom(s1);

}
