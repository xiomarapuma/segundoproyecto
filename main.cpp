#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    //cout <<n*(n+1)/2 << endl;
    /*
    int total=0;
    while(n>0){
        total=total+n;
        n=n+2;
        cout << total<< n << endl;
    }
    */

    int a=0;
    int suma =0;
    while ( a <n ){
        if(a%3==0)
            suma=suma+a;
        if(a%5==0)
            suma=suma+a;
    a=a+1;
    }
    cout <<suma << endl ;
    return 0;
}
