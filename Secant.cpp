#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
    return x*x-4*x-10;
}
int main(){
    double x0,x1,E;
    cout<<"Enter initial guess x0, x1 and error tolerance E: ";
    cin>>x0>>x1>>E;
   double x2;
   int iteration = 0;
    while(fabs(f(x1))>E){
        x2=x1-(f(x1)*(x1-x0))/(f(x1)-f(x0));
        x0=x1;
        x1=x2;
        iteration++;

    }
    cout<<"Root is: "<<x2<<" after iteration: "<<iteration<<endl;
    return 0;
}


