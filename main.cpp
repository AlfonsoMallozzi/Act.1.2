/**
 * Compilar:
 *   g++ -std=c++17 -Wall -o math_app *.cpp
 *
 * Ejecutar:
 *   ./math_app
 **/
#include "MathOps.h"
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
  std::cout << "- Implementacion -" << std::endl;

  // Pruebas Fibonacci
  std::cout << "\n- Pruebas Fibonacci -" << std::endl;
  std::vector<int> fibPruebas = {5, 10, 15, 30};
  for (int n : fibPruebas) {
    std::cout << "n=" << n << " | Iterativo: " << fibonacciIterativo(n)
              << " | Recursivo: " << fibonacciRecursivo(n) << std::endl;
  }

  // Pruebas Promedio
  std::cout << "\n- Pruebas Promedio -" << std::endl;
  std::vector<int> vec = {1, 5, 10, 23, 56, 100};
  int n = vec.size();

  // Iterativo 
  std::cout << "Promedio Iterativo: " << promedioIterativo(n, vec) << std::endl;

  // Recursivo (Debe funcionar)
  std::cout << "Promedio Recursivo: " << promedioRecursivo(n, vec) << std::endl;
  std::vector<int> vec2 = {51, 35, 140, 323, 566, 1600, 231, 99, 1662};
  int n2 = vec2.size();

  std::cout << "Promedio Iterativo vec2: " << promedioIterativo(n2, vec2) << std::endl;
  std::cout << "Promedio Recursivo vec2: " << promedioRecursivo(n2, vec2) << std::endl;


  return 0;
}



