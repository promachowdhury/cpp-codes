#include <iostream>

using namespace std;

int main()
{int year;
cout<<"Enter any year :";
cin>>year;
if(year%4==0&&year%100!=0)

    {
        cout<<"Leap year";
    }


   else if(year%400==0)

  {

    cout << "Hello world!" << endl;}

   else{
    cout<<"Not leap year";
   }


    return 0;
}
