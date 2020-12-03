# Actividad Integral 4.- Grafos

# Explicación

Para poder correrlo es necesario descargar los tres archivos el main.cpp, program.h y personajes.txt, al correr el programa nos va mostrar una interfaz donde le iremos inidicando lo que queramos, como el orden en cuanto a victorias o de mejor a peor saga de los personajes y el acomodo de los arboles en heap de los franquicia de los juegos de los personajes de Super Smash Bros, y nos muestra los 5 sagas de videojuegos que cuenta con más personajes en Smash. El main.cpp le el archivo, lo ordena depende a lo que le indique el usuario y lo acomoda para poder imprimirlo en forma de árbol. El program.h cuenta con las funciones para poder realizar el acomodo del árbol, visto en clase, y el acomodo de los personajes para posteriormente imprimirlos. El personajes.txt muestra la lista de los Personajes de Super Smash Bros, los primeros números son el numero de victorias con el que cuenta cada personaje, despues es la franquicia del videojuego del personaje, despues seria el número de mejor a peor siendo 1 el mejor y 6 el peor de la franquicia de cada persoanje, que es de ahí de donde estamos realizando el árbol, y por ultimo muestra el nombre del personaje.

# Análisis de complejidad

Cuando se carga el archivo personajes.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Para la impresion de las indicaciones y los datos que tiene que dar el usuario tiene una complejidad de O(1), ya que solo da una vuelta para realizarlo. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1). Para el árbol heap su complejidad es de O(log(n)), ya que el árbol se divide para así poder poner los datos y imprimirlos los datos obtenidos con una complejidad O(n). 


# Casos de Pruebas

# Caso número 1

INPUT:

Selecciona: 1 

Selecciona: 1

Elige un numero entre 10 y 60: 10

Elige un numero entre 10 y 60: 30

OUTPUT:

10 Fire_Emblem 2 Chrom  

10 Fire_Emblem 2 Ike 

10 Fire_Emblem 2 Lucina 

10 Fire_Emblem 2 Marth 

10 Fire_Emblem 2 Roy

20 Super_Mario 1 Daisy 

20 Super_Mario 1 Luigi 

20 Super_Mario 1 Mario  

20 Super_Mario 1 Peach 

20 Super_Mario 1 Estela 

20 Super_Mario 1 Wario 

20 Super_Mario 1 Yoshi

30 Donkey_Kong 5 Diddy_Kong 

30 Donkey_Kong 5 Donkey_Kong 


# Caso número 2

INPUT:

Selecciona: 1

Selecciona: 2

Elige un numero entre 1 y 6: 1

Elige un numero entre 1 y 6: 3

OUTPUT:

20 Super_Mario 1 Daisy 

20 Super_Mario 1 Estela 

20 Super_Mario 1 Luigi 

20 Super_Mario 1 Mario  

20 Super_Mario 1 Peach 

20 Super_Mario 1 Wario 

20 Super_Mario 1 Yoshi

10 Fire_Emblem 2 Ike 

10 Fire_Emblem 2 Lucina 

10 Fire_Emblem 2 Marth 

10 Fire_Emblem 2 Chrom  

10 Fire_Emblem 2 Roy

50 The_Legend_of_Zelda 3 Link 

50 The_Legend_of_Zelda 3 Link_Niño 

50 The_Legend_of_Zelda 3 Sheik 

50 The_Legend_of_Zelda 3 Toon_Link

50 The_Legend_of_Zelda 3 Ganondorf 

50 The_Legend_of_Zelda 3 Zelda


# Caso número 3

INPUT:

Selecciona: 2

OUTPUT:

Los 5 juegos que cuenta con mas personajes en Super Smash Bros:

1 = Pokemon

2 = Pokemon

3 = Super Mario

4 = Fire Emblem

5 = Kirby
