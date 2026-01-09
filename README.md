# Proyecto de Operaciones Matemáticas

Este proyecto implementa varias operaciones matemáticas utilizando métodos iterativos y recursivos en C++.

## Descripción de los Métodos

### 1. Fibonacci (`fibonacciIterativo` y `fibonacciRecursivo`)
Calcule el n-ésimo número de la serie de Fibonacci.
- **F(1) = 1**
- **F(2) = 1**
- **F(n) = F(n-1) + F(n-2)** para n > 2.

**Complejidad:**
- **Iterativo:** O(n) temporal, O(1) espacial.
- **Recursivo:** O(2^n) temporal, O(n) espacial.

### 2. Promedio (`promedioIterativo` y `promedioRecursivo`)
Calcule el promedio de un conjunto de números enteros.

**Complejidad:**
- **Iterativo:** O(n) temporal, O(1) espacial.
- **Recursivo:** O(n) temporal, O(n) espacial.

## Instrucciones de Compilación y Ejecución

### Requisitos
- Compilador C++ (g++, clang++, MSVC) con soporte para C++17.

### Compilación
```bash
g++ main.cpp MathOps.cpp -o math_app.exe 
```


En Linux/Mac:
```bash
./math_app
```
