#include<iostream>
using namespace std;

#define min(x,y) (x<y?x:y)
#define debug 0
#define deg 10

int main()
{
    int x,y;
    cout<<"Enter X: ";
    cin>>x;
    cout<<"Enter Y: ";
    cin>>y;

    #if deg == 10
     cout<<"Debug Mode: ON\n";
     cout<<"x="<<x<<"\ny="<<y<<endl;
    #endif

    int minimum=min(x,y);

    #if debug
     cout<< "Smaller of " << x << " and " << y << " is: " << minimum<< "\n";
    #else
     cout << "Smaller of two numbers is: " << minimum << "\n";
    #endif

    return 0;
}