#include<iostream>
#include<bits\stdc++.h>
#include<string.h>
using namespace std;
class String{

	 private:
	    static string caseof(string s){
        
			string clean="";
			for(auto i:s){
				 if(i!=' '){
					 clean+=tolower(i);
				 }
			}
			return clean;
		}

	public:

static bool Anagrams(string s1, string s2) {
         if (s1.length() != s2.length()) return false;

          vector<int> count(256, 0); // Assuming ASCII
         for (int i = 0; i < s1.length(); i++) {
             count[tolower(s1[i])]++;
             count[tolower(s2[i])]--;
            }

             for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return false;
         }
           return true;

         }

		static void Anagram(string s1,string s2){
			  
			  string str1=caseof(s1);
			  string str2=caseof(s2);

              sort(str1.begin(),str1.end());
			  sort(str2.begin(),str2.end());

			  bool Anagram=true;
			  int left=0;
			  int right=s1.length();
			  while(left<right){
				   if(s1[left]!=s2[left] && s1.length()!=s2.length()){
                           Anagram=false;
				   }
				   left++;
			  }
			 if(Anagram){
				 cout<<"its Anagram!\n";
			 }else{
				 cout<<"its not anagram!\n";
			 }

		}

	static void commonprefix(vector<string>&vs){

		//  string str(vs.begin(),vs.end());

		  map<char,int>mp;

	      string longstring="";
		  string result=" ";

		  for(int i=0;i<vs.size();i++){
			  longstring+=vs[i];
		  }
		  cout<<longstring<<endl; 
     }


      static string  reversestring(const string s){
    
		    string result;

			result.reserve(s.size());

			for(int i=s.length()-1;i>=0;i--){

				result+=s[i];
			}
	   
	      return result;
       }

     static void ispalndrom(string s){

		  string originalString=s;
		  if( reversestring(s)==originalString){
			   cout<<"its palindrom";
		  }else{
			   cout<<"its not palindrom:";
		  }
	 }

    static void stios(string s){

		  int k=stoi(s);

		  cout<<"string into int:"<<k<<endl;

	}

static void adjacentDuplicates(string s){
        
  }

static void KMP(string n1,string n2){



 }

static void  Wildcard(string s1,string s2){


}

static void isomorphic(string s1,string s2){


}

static void allanagrams(vector<string>input){


}

static void numberofsubstrings(string s){


}

static void spaceswith(string s){


}

static void  minimumparentheses(string s){


}

static void  compression(string s){


}
static void inputString(){

			int T;
			cin>>T;
			while(T--){

			  string s1,s2;
			  cin>>s1>>s2;
			  comp(s1,s2);
			}
		}
};
int main(){

	String::inputString();

}
