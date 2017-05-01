#include<iostream>
using namespace std;

int main()
{
    int n,h,max = 0,b=0;

    cin>>n;

    for(int i = 0 ; i < n ; ++i)
    {
        cin>>h;
        if(h > max)
          {
             max = h;
             b = 0;
          }
        if(h == max)
            b++;
    }
    cout<<b;
    return 0;
}
