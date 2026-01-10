#include "MathOps.h"
#include <vector>

// Helper function for recursive sum (internal use only)
long long sumaRecursivaHelper(int n, const std::vector<int> &numeros) {
  if (n <= 0)
    return 0;
  return numeros[n - 1] + sumaRecursivaHelper(n - 1, numeros);
}

// EJERCICIO 1
long long fibonacciIterativo(int n) {
  if (n <= 0)
    return 0;
  if (n == 1 || n == 2)
    return 1;

  long long a = 1;
  long long b = 1;
  long long c = 0;

  for (int i = 3; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }

  return b;
}

// EJERCICIO 2

long long fibonacciRecursivo(int n) {
  if (n <= 0)
    return 0;
  if (n == 1 || n == 2)
    return 1;

  return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}


// EJERCICIO 3

double promedioIterativo(int n, const std::vector<int> &numeros) {
  double suma = 0;

  for (int i = 0; i < n; i++) {
    suma += numeros[i];
  }

  return suma / n;

}

// EJERCICIO 4
double promedioRecursivo(int n, const std::vector<int> &numeros) {
  if (n <= 0 || numeros.empty())
    return 0.0;

  // Es un Safecase en caso que se pase un vector de menor tamaño que n.
  int effectiveN = (n > (int)numeros.size()) ? (int)numeros.size() : n;

  long long sum = sumaRecursivaHelper(effectiveN, numeros);
  return (double)sum / effectiveN;
}



