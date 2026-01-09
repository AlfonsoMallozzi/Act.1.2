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

  // Iterativo (Pendiente)
  std::cout << "Promedio Iterativo: " << promedioIterativo(n, vec) << std::endl;

  // Recursivo (Debe funcionar)
  std::cout << "Promedio Recursivo: " << promedioRecursivo(n, vec) << std::endl;

  return 0;
}

