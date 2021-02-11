// Autor: LozanoSoft

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  vector<string> listaPalabras {"Suscríbete", "Dale like", "Comenta", "LozanoSoft"};
  string palabraInicial = "La palabra es ";

  // Función lambda => función anónima

  // auto => El compilador infiere el tipo de dato

  auto suma = [](int num_1, int num_2){ // Puntero a función
    return num_1 + num_2;
  };

  cout << suma(4, 6) << endl;

  for_each(listaPalabras.begin(), listaPalabras.end(), [=](string palabra){
    cout << palabraInicial << palabra << endl;
  });

  return 0;

}
