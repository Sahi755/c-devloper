//g++ --std=c++14 code2.cpp -o code2 && code2:wd
//g++ --std=c++14 code3.cpp -o code3 && code3

#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <fstream>
#include<utility>

#define MOD1  1000000007
#define MOD2  1000000009 
#define Maxlenstr  10000000018
#define MODADD(a,b) a+b % MOD1
#define MODSUB(a,b,MOD1) a+b+MOD1 % MOD1  // Avoid negatives
#define MODMUL(l,a,b,MOD1) 1LL * a * b%MOD1  // Use 1LL to avoid overflow
#define  P  31             // Prime base	  
using namespace std;
class Comparators{

public:static  bool maxpair(pair<int,int>a,pair<int,int>b){

			   return a.second<b.second;
		  }

};
class Algorithms{

       
};

class NumberTeoryAl{
  

	public:
        static int gcd(int a, int b) {
       if (b == 0)
          return a;
         return gcd(b, a % b);
        }
         static int lcm(int a, int b) {
           return (a * b) / gcd(a, b);
          }
};
class Solution:public Comparators, Algorithms, NumberTeoryAlgo{

public:
  	 static  void solve(){
		   
    }
    
 };
int main(){

    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	 

}

