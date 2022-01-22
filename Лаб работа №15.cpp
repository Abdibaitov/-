#include <iostream>
#include <cmath>
using namespace std;


// 1
void PowerA3(double a, double &b)
{
 b = a * a * a;
}

// 2
int sign(float x){
   if (x<0){ return -1;}    
   if (x==0){ return 0;}    
   if (x>0){ return 1;}
}

// 3
float rings(float r1, float r2){
   return 3.14*(r1*r1-r2*r2);
}

// 4
int quarter(float x1, float y1){
    if ((x1>0)&&(y1>0)){return 1;}
    if ((x1<0)&&(y1>0)){return 2;}
    if ((x1<0)&&(y1<0)){return 3;}     
    if ((x1>0)&&(y1<0)){return 4;}
}

// 5 
float fact2(int n){
    int temp=1;
    for (;n>0;n-=2) temp*=n;
    return temp;
}


int main(void)
{   
    setlocale(LC_ALL, "Rus");
    cout << "Лаборторная работа #15.1" << endl;
    
    double x[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        PowerA3(x[i], x[i]);
        cout << x[i] << ' ';
    }
    
    cout << endl;
    cout << "Лаборторная работа #15.2" << endl;
    
    float a,b;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
 
    cout <<sign(a)+sign(b)<<endl;
    
    cout << "Лаборторная работа #15.3" << endl;
    
    int i;
    for(i=1; i<=3; ++i){
        float r1,r2;
        cout<<"R1: ";
        cin>>r1;
        cout<<"R2: ";
        cin>>r2;
        cout<< rings(r1,r2) << endl;
    }
    
    cout << "Лаборторная работа #15.4" << endl;
    
    int z;
    for (z=1; z<=3; ++z){
        float x1,y1;
        cout<<"X: ";
        cin>>x1;
        cout<<"Y: ";
        cin>>y1;
        cout<<quarter(x1,y1)<<endl;
     }
    
    cout << "Лаборторная работа #15.5" << endl;
    
    int n;
    for (i=1; i<=5; ++i){
        cout<<"N: ";
        cin>>n;
        cout<<fact2(n)<<endl;
    }
    

    return 0;
    
}