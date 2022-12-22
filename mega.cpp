#include<iostream>
using namespace std;
main() 
{
float mb=1024;
float kb=1024;
float byte=8;
float bit;
float data;
cout<<"enter no of magabyte :";
cin>>data;
bit = data*mb*kb*byte;
cout<<"this is your required bit:"<<bit;

}