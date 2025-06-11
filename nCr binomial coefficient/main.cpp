#include <iostream>
using namespace std;
int factorial(int x)
{
    int ans=1;
    for(int i=1;i<=x;i++)//fact er jonno loop
    {
        ans*=i;
    }
    return ans;//n er fact er man int fact n e store hoi thakbe
}
int ncr(int a,int b,int c)
{
    int result=(a)/(b*c);//FORMULA
    return result;
}
int main()
{
    int n,r;
    cout<< "enter value of n: ";
    cin>>n;
    cout<< "enter value of r: ";
    cin>>r;
    int fac_n=factorial(n);//n er factorial pass by value
    int fac_r=factorial(r);// r er fact o n er moto
    int fac_nr=factorial(n-r);//prblm er jonno n-r dorkar tai etau pass by vaLUE
    int answer=ncr(fac_n,fac_r,fac_nr);//NCR E FUNCTION E 3 TA FACT PATHABE
    cout<< "the binomial coefficient value is "<< answer;
}





