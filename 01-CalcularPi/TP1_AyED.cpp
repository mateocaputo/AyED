//============================================================================
// Name        : TP1_AyED.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
//   float pi = 0, signo = 1;
//   int n = 250000;
//   for(int i = 0; i<n; i++){
//      float valor = (signo/((2*i)+1));
//      pi += valor;
//      signo *= -1;
//   }
//   pi *= 4;
//   cout << "El valor de pi es: " << fixed <<  setprecision(6) << pi;

   float pi = 0, pi2 = 3.141592, signo = 1;
   int i = 0;
   while((pi*4)!=pi2){
      float valor = (signo/((2*i)+1));
      pi += valor;
      signo *= -1;
      i++;
      // cout << "Valor relativo de pi: " << pi << endl;
   }
   pi *= 4;
   cout << "El valor de pi es: " << fixed <<  setprecision(6) << pi << endl;
   return 0;
}
