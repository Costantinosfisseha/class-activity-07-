#include <iostream>
using namespace std;

int main() {
   
   unsigned int year;
   cout<<"Enter your best year: "<<endl;
   cin>>year;
   if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
       cout<<"The Year "<<year<<" is a leap year"<<endl;
   }
   else{
       cout<<"The Year "<<year<<" is Not a leap Year"<<endl;
   }
    return 0;
}

