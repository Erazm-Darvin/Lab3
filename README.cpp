#include<iostream>
#include<math.h>
using namespace std;
int main () {
    
    double  pr, vr, vel, doh, sum;
    cout<<"Vvedite summu vklada:"<<endl;
    cin>>vel;
    cout<<"Vvedite srok vklada(dnei):"<<endl;
    cin>>vr;
    cout<<"Vvedite procentnuyu stavku(godovih):"<<endl;
    cin>>pr;
    doh=((pr/100*vel)/365)*vr;
    sum=doh + vel;
    cout<<"Dohod:"<<doh<<endl;
    cout<<"Summa:"<<sum<<endl;
    
 
 
 return 0;   
}
