
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    
    for(int i=1; i<=n ; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        // cout<<endl;

        for(int k = 1; k<=n ; k++)
        {
            cout<<"*";
        }
        cout<<endl;


    }

    


}


// OUTPUT IS 

Enter the number of rows 4
   ****
  ****
 ****
****





















