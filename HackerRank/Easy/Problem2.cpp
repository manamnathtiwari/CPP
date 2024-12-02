/* Hola Amigo , Lets start our journey with solving easy hackkerrank problems 
    Day 1 : 2nd December 2024

    Problem 2
*/

/*                          Theory 

Some C++ data types, their format specifiers, and their most common bit widths are as follows:

Int ("%d"): 32 Bit integer
Long ("%ld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
*/

/*
Input Format : Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format : Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

Sample Input : 3 12345678912345 a 334.23 14049.30493

Sample Output:
3
12345678912345
a
334.230
14049.304930000
*/
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){

    // int long char float and double 
    int a; long b; char c ; float d ; double e;
    // cin>>a>>b>>c>>d>>e;
    // cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
    scanf("%d%ld%c%f%lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%f\n%lf\n",a,b,c,d,e);
    return 0;
}