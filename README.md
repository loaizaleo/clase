# clase

Programa en **C++** que lee una colección de datos desde un archivo y calcula su **promedio** y su **desviación estándar** usando una **clase**.

## Objetivo

Practicar la programación orientada a objetos en C++: definir una clase en un archivo de encabezado (`.h`) con métodos para leer datos, calcular el promedio y calcular la desviación estándar.

## Lenguaje

- **C++** (compilador `g++`)

## Archivos

| Archivo | Descripción |
|---|---|
| `lectura.h` | Clase `leer_archivo` con los métodos `leer_datos()`, `promedio()` y `desviacion()`. |
| `lectura.cpp` | Programa principal que usa la clase y muestra el resultado. |
| `pulso.dat` | 80 mediciones de pulso cardíaco (datos de ejemplo). |

## Uso

```bash
g++ lectura.cpp -o lectura
./lectura
```

Resultado con `pulso.dat`:

```
42.425	+-8.93971
```

Es decir, promedio ≈ 42,4 y desviación estándar ≈ 8,9.

## Fórmulas

- Promedio: x̄ = Σxᵢ / N
- Desviación estándar muestral: σ = √( Σ(xᵢ − x̄)² / (N − 1) )

## Notas

- El programa siempre lee exactamente **80 datos** del archivo `pulso.dat`, que debe estar en la misma carpeta desde donde se ejecuta.
- Para usar otra cantidad de datos, cambie `N` en `lectura.h` y el tamaño del arreglo `x[80]` en `lectura.cpp`.

## Repositorios relacionados

- [desviacion-estandard](https://github.com/loaizaleo/desviacion-estandard): el mismo cálculo con funciones en un solo archivo.
- [funciones](https://github.com/loaizaleo/funciones): el mismo cálculo con funciones en un `.h`.
