#include <iostream>
#include<cmath>
using namespace std;
void GaussCzebyszew(int wezly)
{
    cout << "GAUSS-CZEBYSZEW" << endl << endl;
    float h;
    int n = wezly-1;
float suma = 0;
    float x[4] = {0.9239, 0.3827,-0.3827,-0.9239};
    h = 0.785;
    cout << "H = " << h << endl;
   for(int i=0; i<wezly; i++)
   {
       cout << "x[" << i << "] = " << x[i] << endl;
   }
   for(int i=0; i<wezly; i++)
   {
      suma = suma + (h* x[i]*x[i]);
   }
   cout << "Suma wynosi: " << suma << endl << endl;
}
void GaussLegendre(int wezly)
{
    float suma=0;
    cout << "GAUSS-LEGENDRE" << endl << endl;
    float h[5] = {0.236927, 0.478629,0.568889,0.478629,0.236927};
    float x[5] = {-0.90618, -0.538469, 0, 0.538469, 0.90618};
     for(int i=0; i<wezly; i++)
   {
       cout << "H[" << i << "] = " << h[i] << endl;
   }
    for(int i=0; i<wezly; i++)
   {
       cout << "x[" << i << "] = " << x[i] << endl;
   }
    for(int i=0; i<wezly; i++)
   {
       suma = suma+(h[i]*(1/sqrt(1+pow(x[i],2))));
   }
   cout << "Suma wynosi: " << suma << endl << endl;
}

void GaussLaguerre(int wezly)
{
    cout << "GAUSS-LAGUERRE" << endl << endl;
    float suma = 0;
    float h[4] = {0.603154, 0.357419, 0.038888, 0.000539};
    float x[4] = {0.322548, 1.745761, 4.53662, 9.395071};
     for(int i=0; i<wezly; i++)
   {
       cout << "H[" << i << "] = " << h[i] << endl;
   }
    for(int i=0; i<wezly; i++)
   {
       cout << "x[" << i << "] = " << x[i] << endl;
   }
    for(int i=0; i<wezly; i++)
   {
       suma = suma+(h[i]*(exp(-1*(x[i]))*((sin(x[i]))/x[i])));
   }
   cout << "Suma wynosi: " << suma << endl << endl;
}
void GaussHermite(int wezly)
{
     cout << "GAUSS-HERMITE" << endl << endl;
    float suma = 0;
    float h[5] = {0.019953, 0.393619, 0.945309,  0.393619,0.019953};
    float x[5] = {-2.020183, -0.958572, 0,0.958572,2.020183 };
     for(int i=0; i<wezly; i++)
   {
       cout << "H[" << i << "] = " << h[i] << endl;
   }
    for(int i=0; i<wezly; i++)
   {
       cout << "x[" << i << "] = " << x[i] << endl;
   }
    for(int i=0; i<wezly; i++)
   {
       suma = suma+(h[i]*cos(x[i]));
   }
   cout << "Suma wynosi: " << suma << endl << endl;
}
int main(){

GaussCzebyszew(4);
GaussLegendre(5);
GaussLaguerre(4);
GaussHermite(5);
return 0;
}

