# Actividad Integral 2.- estructura de datos lineales


# Explicación

Para poder correrlo es necesario descargar los tres archivos el main.cpp, smash.h y smash.txt, al correr el programa nos va mostrar una interfaz donde le iremos inidicando lo que queramos, como el orden en cuanto a victorias o de mejor a peor juego de los personajes. El main.cpp le el archivo, lo ordena depende a lo que le indique el usuario y lo acomoda para poder imprimirlo. El smash.h cuenta con las funciones para poder ordenar y buscar los datos, para poder imprimirlos. El personajes.txt muestra la lista de los personajes de Super Smash Bros, los primeros números son el numero de victorias con el que cuenta cada personaje, despues es la franquicia del juego del personaje, despues seria el número de mejor a peor siendo 1 el mejor y 9 el peor juego de cada persoanje, y por ultimo, muestra el nombre del personaje. 

# Análisis de complejidad

Cuando se carga el archivo smash.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Para la impresion de las indicaciones y los datos que tiene que dar el usuario tiene una complejidad de O(1), ya que solo da una vuelta para realizarlo. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1).

# Casos de Pruebas

# Caso número 1

INPUT:

Selecciona: 1 

Ingresa del 10 al 90: 10

Ingresa del 10 al 90: 30

OUTPUT:

10 Fire_Emblem 6 Chrom  

10 Fire_Emblem 6 Ike 

10 Fire_Emblem 6 Lucina 

10 Fire_Emblem 6 Marth 

10 Fire_Emblem 6 Roy

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

Selecciona: 2

Ingresa del 1 al 9: 1

Ingresa del 1 al 9: 3

OUTPUT:

20 Super_Mario 1 Daisy 

20 Super_Mario 1 Estela 

20 Super_Mario 1 Luigi 

20 Super_Mario 1 Mario 

20 Super_Mario 1 Peach 

20 Super_Mario 1 Wario 

20 Super_Mario 1 Yoshi

60 Pokémon 2 Greninja 

60 Pokémon 2 Jigglypuff 

60 Pokémon 2 Lucario 

60 Pokémon 2 Mewtwo 

60 Pokémon 2 Pichu 

60 Pokémon 2 Pikachu 

50 The_Legend_of_Zelda 3 Link_Niño

50 The_Legend_of_Zelda 3 Ganondorf 

50 The_Legend_of_Zelda 3 Link 

50 The_Legend_of_Zelda 3 Sheik

50 The_Legend_of_Zelda 3 Toon_Link

50 The_Legend_of_Zelda 3 Zelda 
