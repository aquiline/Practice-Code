#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int notboundary(int n,int row,int col);
int localmax(int a[][100],int i,int j);
int main()
{
    int a[100][100];
    char c[100][100];
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; ++i)
    {
        cin>>c[i];
    }

    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
            {
                a[i][j] = c[i][j] - '0';
            }

    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < n ; ++j)
        {
            if(notboundary(n,i,j))
                if(localmax(a,i,j))
                    c[i][j] = 'X';
        }
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j)
            cout<<c[i][j];
        cout<<endl;
    }
}

int notboundary(int n,int row,int col)
{
    if(row != 0 && row != n-1 && col != 0 && col != n-1 )
        return 1;
    return 0;
}
int localmax(int a[][100],int i,int j)
{
    if((a[i][j] > a[i][j-1]) && (a[i][j] > a[i-1][j]) && (a[i][j] > a[i][j+1]) && (a[i][j] > a[i+1][j]))
        return 1;
    return 0;
}
