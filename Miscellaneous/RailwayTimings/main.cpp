#include<iostream>
#include<iomanip>
#include<strings.h>
using namespace std;

int main() {
    int hh, mm, ss ;
    char m[3];
    char c;

    cin>>hh>>c>>mm>>c>>ss>>m;

    if(strcmp(m,"PM")==0 && hh!=12) hh+=12;
    if(strcmp(m,"AM")==0 && hh==12) hh=00;

    cout<<setw(2)<<setfill('0')<<hh<<c<<setw(2)<<setfill('0')<<mm<<c<<setw(2)<<setfill('0')<<ss<<endl;

    return 0;

}
