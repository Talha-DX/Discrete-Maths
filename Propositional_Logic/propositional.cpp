#include<iostream>

using namespace std;

int main()
{
   int p=true,q=false;

   cout<<"...And Truth Table..."<<endl;
   
   cout<<"| p | q | A |"<<endl;
   cout<<"-------------"<<endl;
   cout<<"| T | T |"<<(p && q ? "T" : "F")<<endl;
   cout<<"| T | F |"<<(p && q ? "T" : "F")<<endl;
   cout<<"| F | T |"<<(p && q ? "T" : "F")<<endl;
   cout<<"| F | F |"<<(p && q ? "T" : "F")<<endl;
   

    
    return 0;
}