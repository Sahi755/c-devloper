#include<iostream>
#include <stdio.h>
#include <string.h>
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

		static void Uppercaseof(string s){

			string result="";
			for(int i=0;i<s.length();i++){

				if(s[i]>='a' && 'z'>=s[i]){

					result+=s[i]-32;
				}
			}

			cout<<result<<endl;
		}

	static void Lowercaseof(string s){

			string result="";
			for(int i=0;i<s.length();i++){

				if(s[i]>='A' && 'Z'>=s[i]){

					result+=s[i]+32;
				}
			}

			cout<<result<<endl;
		}

	 static void countVowel(string s){

		  int count=0;

		  for(int i=0;i<s.length();i++){

			  if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='E'||s[i]=='U'){

				   count+=1;
			  }
		  }
		 cout<<"vowel:"<<count<<endl;
	 }


	 static void CountAll(string password){

		 
			   int CountDigit=0;
			   int CountAlpha=0;
			   int Countspcial=0;

          for(int i=0;i<password.length();i++){

			   char s=password[i];
			   if(isdigit(s)){
				   CountDigit+=1;
			   }else if(isalpha(s)){
				    CountAlpha+=1;
			   }else{
				    Countspcial+=1;
			   }
		  }
		 cout<<"count digit:"<<CountDigit<<endl;
		 cout<<"CountAlpha:"<<CountAlpha<<endl;
		 cout<<"Countspcial:"<<Countspcial<<endl;
	 }

	 static void countFrequnecy(string s){

          map<char,int>mp;

		  for(auto i:s){
			  mp[i]++;
		  }
		  for(auto i:mp){
			  cout<<i.first<<":"<<i.second<<endl;
		  }
	 }

	 static void removeVowel(string s){

		  string result=" ";
 
		  for(int i=0;i<s.length();i++){

			    if(s[i]!='a'||s[i]!='i'||s[i]!='o'||s[i]!='e'||s[i]!='u'||s[i]!='A'||s[i]!='I'||s[i]!='O'||s[i]!='E'||s[i]!='U'){

				      result+=s[i];
				 }
		  }

		 cout<<s<<endl;
	 }

	 static void firstOcurance(string str,string sub){
		  
		    size_t pos = str.find(sub);

                if (pos != string::npos) {
                    cout << "First occurrence at index: " << pos << endl;
               } else {
                      cout << "Substring not found." << endl;
                  } 

		       }
};
int main(){


	  string s1="";
	  string s2="";

	  getline(cin,s1);
	  cin>>s2;

	  String::firstOcurance(s1,s2);


}
