#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=(n+1-i); j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

// OUTPUT IS

Enter the number :- 4
1234
123
12
1