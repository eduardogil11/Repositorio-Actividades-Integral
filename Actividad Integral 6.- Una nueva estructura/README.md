# Actividad Integral 6.- Una nueva estructura


# Explicación

Para poder correrlo es necesario descargar los tres archivos el mainc.cpp, estructura.h y juegos.txt, al correr el programa nos muestra una interfaz donde el usuario le indicara 1 para revisar de forma ascendente los años en los que salieron los juegos de los personajes que se encuentran en Super Smash Bros y el 2 para revisar de forma ascendente la cantidad de años que llevan existiendo los juegos de los personajes que se encuentran en Super Smash Bros. El main.cpp le el archivo, lo ordena depende a como le indique el usuario y lo acomoda para poder imprimirlo. El estructura.h cuenta con la nueva estructura shell sort 
El main.cpp le el archivo, lo ordena depende a lo que le indique el usuario y lo acomoda para poder imprimirlo en forma de árbol. El program.h cuenta con las funciones para poder realizar el acomodo del árbol, visto en clase, y el acomodo de los personajes para posteriormente imprimirlos. El personajes.txt muestra la lista de los personajes de Super Smash Bros, los primeros números son el numero de victorias con el que cuenta cada personaje, despues es la franquicia del juego del personaje, despues seria el número de mejor a peor siendo 1 el mejor y 6 el peor juego de cada persoanje, que es de ahí de donde estamos realizando el árbol, y por ultimo muestra el nombre del personaje. Por ultimo, el hash.h realiza la funcion hash para poder mostrar las victorias del juego que el usuario le indique.


# Análisis de complejidad

Cuando se carga el archivo personajes.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Para la impresion de las indicaciones y los datos que tiene que dar el usuario tiene una complejidad de O(1), ya que solo da una vuelta para realizarlo. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1). Para el árbol heap su complejidad es de O(log(n)), ya que el árbol se divide para así poder poner los datos y imprimirlos los datos obtenidos con una complejidad O(n). Por último, para la tabla hash su complejidad es O(1), ya que el hashing se realiza en un solo paso y buscar el número de victorias del juego tiene una complejidad O(1), ya que las busquedas se realizan en las tablas de hash.


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
