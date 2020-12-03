# Actividad Integral 6.- Una nueva estructura


# Explicación

Para poder correrlo es necesario descargar los tres archivos el mainc.cpp, estructura.h y juegos.txt, al correr el programa nos muestra una interfaz donde el usuario le indicara 1 para revisar de forma ascendente los años en los que salieron los juegos de los personajes que se encuentran en Super Smash Bros y el 2 para revisar de forma ascendente la cantidad de años que llevan existiendo los juegos de los personajes que se encuentran en Super Smash Bros. El main.cpp le el archivo, lo ordena depende a como le indique el usuario y lo acomoda para poder imprimirlo. El estructura.h realiza la nueva estructura que para este caso seria shell sort. El juegos.txt muestra los 6 juegos que hay dentro de Super Smash Bros, siendo el primer número el año en el que salio y el segundo número el tiempo que lleva existiendo.


# Análisis de complejidad

Su complejidad es 

Es O(n(log(n))^2), gracias a los saltos que da para intercambiar los elementos separados y por los ciclos for que realiza.


# Casos de Pruebas

# Caso número 1

INPUT:

Selecciona: 1 

OUTPUT:

Donkey_Kong 1981 39

Super_Mario 1985 35

The_Legend_of_Zelda 1986 34

Kirby 1992 28

Fire_Emblem 1994 25

Pokemon 1996 24


# Caso número 2

INPUT:

Selecciona: 2

OUTPUT:

Pokemon 1996 24

Fire_Emblem 1994 25

Kirby 1992 28

The_Legend_of_Zelda 1986 34

Super_Mario 1985 35

Donkey_Kong 1981 39
