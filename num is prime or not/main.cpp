#include <iostream>

using namespace std;

int main()
{
    int n=1;
    bool prime = true;//num ta prime num dhore nibo
    for(int i=2;i<=n-1;i++){

        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(prime == true){
        cout<<"prime num\n";
    }
    else {
        cout<<"non prime num\n";
    }
    return 0;
}
