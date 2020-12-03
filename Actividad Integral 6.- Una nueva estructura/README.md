# Actividad Integral 6.- Una nueva estructura


# Explicación

Para poder correrlo es necesario descargar los tres archivos el mainc.cpp, estructura.h y juegos.txt, al correr el programa nos muestra una interfaz donde el usuario le indicara 1 para revisar de forma ascendente los años en los que salieron los juegos de los personajes que se encuentran en Super Smash Bros y el 2 para revisar de forma ascendente la cantidad de años que llevan existiendo los juegos de los personajes que se encuentran en Super Smash Bros. El main.cpp le el archivo, lo ordena depende a como le indique el usuario y lo acomoda para poder imprimirlo. El estructura.h realiza la nueva estructura que para este caso seria shell sort. El juegos.txt muestra los 6 juegos que hay dentro de Super Smash Bros, siendo el primer número el año en el que salio y el segundo número el tiempo que lleva existiendo.


# Análisis de complejidad

Su complejidad es O(n(log(n))^2), ya que cuenta con ciclos for y se realizan saltos para asi poder ir intercambiando los elementos que se encuentran separados.


# Referencias

NA. (NA). Shell Sort Algorithm. 03/12/2020, de Programiz Sitio web: https://www.programiz.com/dsa/shell-sort#:~:text=According%20to%20Poonen%20Theorem%2C%20worst,2)%20or%20something%20in%20between.&text=When%20the%20array%20is%20already,the%20size%20of%20the%20array.&text=It%20is%20around%20O(n1.25)%20.



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
