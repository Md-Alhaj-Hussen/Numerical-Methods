#include<iostream>
#include<cmath>
using namespace std;
double f(double x){
    return x*x-x-2;
}
int main(){
    double x1,x2,E;
    cout<<"Enter x1, x2 and error tolerance E: ";
    cin>>x1>>x2>>E;
    if(f(x1)*f(x2)>0){
        cout<<"Initial values do not bracket a root. Please try again"<<endl;
        return -1;
    }
    double x0;
    while(true){
        x0=x1-(f(x1)*(x2-x1))/(f(x2)-f(x1));
        if(f(x1)*f(x0)) x2=x0;
        else x1=x0;
         if(fabs(f(x0))<E) break;
    }
    cout<<"Root is: "<<x0<<endl;
    return 0;
}

