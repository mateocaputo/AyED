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
   float pi = 0, signo = 1;
   int n = 250000;
   for(int i = 0; i<n; i++){
      float valor = (signo/((2*i)+1));
      pi += valor;
      signo *= -1;
   }
   pi *= 4;
   cout << "El valor de pi es: " << fixed <<  setprecision(6) << pi;
	return 0;
}
