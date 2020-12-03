# Actividad Integral 1 .- Conceptos Básicos y Algoritmos Fundamentales


# Explicación

Para poder correrlo es necesario descargar los cuatro archivos el main.cpp, program.h, hash.h y personajes.txt, al correr el programa nos va mostrar una interfaz donde le iremos inidicando lo que queramos, como el orden en cuanto a victorias o de mejor a peor juego de los personajes y el acomodo de los arboles en heap de la franquicia de los juegos de los personajes de Super Smash Bros, y nos muestra los 5 juegos que cuenta con más personajes en Smash. El main.cpp le el archivo, lo ordena depende a lo que le indique el usuario y lo acomoda para poder imprimirlo en forma de árbol. El program.h cuenta con las funciones para poder realizar el acomodo del árbol, visto en clase, y el acomodo de los personajes para posteriormente imprimirlos. El personajes.txt muestra la lista de los personajes de Super Smash Bros, los primeros números son el numero de victorias con el que cuenta cada personaje, despues es la franquicia del juego del personaje, despues seria el número de mejor a peor siendo 1 el mejor y 6 el peor juego de cada persoanje, que es de ahí de donde estamos realizando el árbol, y por ultimo muestra el nombre del personaje. Por ultimo, el hash.h realiza la funcion hash para poder mostrar las victorias del juego que el usuario le indique.


# Análisis de complejidad

Cuando se carga el archivo personajes.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Para la impresion de las indicaciones y los datos que tiene que dar el usuario tiene una complejidad de O(1), ya que solo da una vuelta para realizarlo. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1). Para el árbol heap su complejidad es de O(log(n)), ya que el árbol se divide para así poder poner los datos y imprimirlos los datos obtenidos con una complejidad O(n). Por último, para la tabla hash su complejidad es O(1), ya que el hashing se realiza en un solo paso y buscar el número de victorias del juego tiene una complejidad O(1), ya que las busquedas se realizan en las tablas de hash.


# Casos de Pruebas

# Caso número 1

OUTPUT:

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario 

Super_Mario 1 Peach 

Super_Mario 1 Wario 

Super_Mario 1 Yoshi

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario  

Super_Mario 1 Peach 

Super_Mario 1 Wario 

Super_Mario 1 Yoshi

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario  

Super_Mario 1 Peach 

Super_Mario 1 Wario

Super_Mario 1 Yoshi

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario 

Super_Mario 1 Peach 

Super_Mario 1 Wario 

Super_Mario 1 Yoshi

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario  

Super_Mario 1 Peach 

Super_Mario 1 Wario 

Super_Mario 1 Yoshi

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario 

Super_Mario 1 Peach 

Super_Mario 1 Wario 

Super_Mario 1 Yoshi

Super_Mario 1 Daisy 

Super_Mario 1 Estela 

Super_Mario 1 Luigi 

Super_Mario 1 Mario 

Super_Mario 1 Peach 

Super_Mario 1 Wario 

Super_Mario 1 Yoshi

Pokémon 2 Greninja 

Pokémon 2 Jigglypuff 

Pokémon 2 Lucario 

Pokémon 2 Mewtwo 

Pokémon 2 Pichu 

Pokémon 2 Pikachu 

Pokémon 2 Greninja 

Pokémon 2 Jigglypuff 

Pokémon 2 Lucario 

Pokémon 2 Mewtwo 

Pokémon 2 Pichu 

Pokémon 2 Pikachu 

Pokémon 2 Greninja 

Pokémon 2 Jigglypuff 

Pokémon 2 Lucario 

Pokémon 2 Mewtwo 

Pokémon 2 Pichu 

Pokémon 2 Pikachu 

Pokémon 2 Greninja 

Pokémon 2 Jigglypuff 

Pokémon 2 Lucario 

Pokémon 2 Mewtwo 

Pokémon 2 Pichu 

Pokémon 2 Pikachu 

Pokémon 2 Greninja 

Pokémon 2 Jigglypuff 

Pokémon 2 Lucario 

Pokémon 2 Mewtwo 

Pokémon 2 Pichu 

Pokémon 2 Pikachu 

Pokémon 2 Greninja 

Pokémon 2 Jigglypuff 

Pokémon 2 Lucario 

Pokémon 2 Mewtwo 

Pokémon 2 Pichu 

Pokémon 2 Pikachu 

The_Legend_of_Zelda 3 Ganondorf 

The_Legend_of_Zelda 3 Link 

The_Legend_of_Zelda 3 Link Niño 

The_Legend_of_Zelda 3 Sheik 

The_Legend_of_Zelda 3 Toon Link

The_Legend_of_Zelda 3 Zelda 

The_Legend_of_Zelda 3 Ganondorf 

The_Legend_of_Zelda 3 Link 

The_Legend_of_Zelda 3 Link Niño 

The_Legend_of_Zelda 3 Sheik 

The_Legend_of_Zelda 3 Toon Link

The_Legend_of_Zelda 3 Zelda 

The_Legend_of_Zelda 3 Ganondorf 

The_Legend_of_Zelda 3 Link 

The_Legend_of_Zelda 3 Link Niño 

The_Legend_of_Zelda 3 Sheik 

The_Legend_of_Zelda 3 Toon Link

The_Legend_of_Zelda 3 Zelda 

The_Legend_of_Zelda 3 Ganondorf 

The_Legend_of_Zelda 3 Link 

The_Legend_of_Zelda 3 Link Niño 

The_Legend_of_Zelda 3 Sheik 

The_Legend_of_Zelda 3 Toon Link

The_Legend_of_Zelda 3 Zelda 

The_Legend_of_Zelda 3 Ganondorf 

The_Legend_of_Zelda 3 Link 

The_Legend_of_Zelda 3 Link Niño 

The_Legend_of_Zelda 3 Sheik 

The_Legend_of_Zelda 3 Toon Link

The_Legend_of_Zelda 3 Zelda 

The_Legend_of_Zelda 3 Ganondorf 

The_Legend_of_Zelda 3 Link 

The_Legend_of_Zelda 3 Link Niño 

The_Legend_of_Zelda 3 Sheik 

The_Legend_of_Zelda 3 Toon Link

The_Legend_of_Zelda 3 Zelda 

Kirby 4 Kirby 

Kirby 4 Meta Knight

Kirby 4 Rey Dedede

Kirby 4 Kirby 

Kirby 4 Meta Knight

Kirby 4 Rey Dedede

Kirby 4 Kirby 

Kirby 4 Meta Knight

Kirby 4 Rey Dedede

Donkey_Kong 5 Diddy Kong 

Donkey_Kong 5 Donkey Kong 

Donkey_Kong 5 Diddy Kong 

Donkey_Kong 5 Donkey Kong 

Fire_Emblem 6 Chrom  

Fire_Emblem 6 Ike 

Fire_Emblem 6 Lucina 

Fire_Emblem 6 Marth 

Fire_Emblem 6 Roy

Fire_Emblem 6 Chrom  

Fire_Emblem 6 Ike 

Fire_Emblem 6 Lucina 

Fire_Emblem 6 Marth 

Fire_Emblem 6 Roy

Fire_Emblem 6 Chrom  

Fire_Emblem 6 Ike 

Fire_Emblem 6 Lucina 

Fire_Emblem 6 Marth 

Fire_Emblem 6 Roy

Fire_Emblem 6 Chrom  

Fire_Emblem 6 Ike 

Fire_Emblem 6 Lucina 

Fire_Emblem 6 Marth 

Fire_Emblem 6 Roy

Fire_Emblem 6 Chrom  

Fire_Emblem 6 Ike 

Fire_Emblem 6 Lucina 

Fire_Emblem 6 Marth 

Fire_Emblem 6 Roy

Metroid 7 Samus 

Metroid 7 Samus Zero

Metroid 7 Samus 

Metroid 7 Samus Zero

Star_Fox 8 Fox 

Star_Fox 8 Falco  

Star_Fox 8 Wolf

Star_Fox 8 Fox 

Star_Fox 8 Falco  

Star_Fox 8 Wolf

Star_Fox 8 Fox 

Star_Fox 8 Falco  

Star_Fox 8 Wolf

Mother 9 Lucas 

Mother 9 Ness 

Mother 9 Lucas 

Mother 9 Ness
