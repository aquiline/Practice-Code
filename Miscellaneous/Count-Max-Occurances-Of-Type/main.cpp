#include<iostream>
using namespace std;

int main()
{
    long int a[6]={0,0,0,0,0,0}; // Assuming for 5 different types ( 0,1,2,3,4,5) 
    long int i,j,mxt=0,mx=0;	// mxt is the type number and mx is the occurance of type mxt in the input
    long int n;			// Total no of input

    cin>>n;

    for( i = 0 ; i < n ; ++i )
    {
        cin>>j;  		
        a[j]++;
        if(a[j] > mx)
        {
            mx = a[j];
            mxt = j;
        }
        if(a[j] == mx && mxt!=j)	//If two types have same  no of occurances then lower type value is taken.
        {
            if(j < mxt)
            {
                mxt = j;
                mx = a[j];
            }
        }
    }
    cout<<mxt;
    return 0;
}

Sample input:

6
1 4 4 2 1 3

Output:

1

