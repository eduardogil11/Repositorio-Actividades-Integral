# Actividad Integral 5.- El uso de códigos hash

# Explicación

Para poder correrlo es necesario descargar los tres archivos el main.cpp, hash.h y personajes.txt, al correr el programa nos muestra una interfaz donde el usuario le ira inidicando lo que quiera. El main.cpp le el archivo, lo ordena depende a lo que le indique el usuario y lo acomoda para poder imprimirlo. El hash.h realiza la funcion hash para poder mostrar la victoria cambiada del juego que el usuario le indique. El personajes.txt muestra la lista de los juegos de Super Smash Bros y las victorias con las que cuentan cada juego.

# Necesario

Es necesario cambiar primero una victoria del juego seleccionando: 1, para poder imprimir el archivo succes.txt con la victoria que cambio el usuario y después seleccionar: 2. 

De lo contrario si se selecciona: 2 primero sin haber cambiado una victoria antes manda "Error" para que lo realices de nuevo.

Si se selecciona: 3 abandonas la base de datos

# Análisis de complejidad

Cuando se carga el archivo personajes.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Para la impresion de las indicaciones y los datos que tiene que dar el usuario tiene una complejidad de O(1), ya que solo da una vuelta para realizarlo. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1). Para el árbol heap su complejidad es de O(log(n)), ya que el árbol se divide para así poder poner los datos y imprimirlos los datos obtenidos con una complejidad O(n). Por último, para la tabla hash su complejidad es O(1), ya que el hashing se realiza en un solo paso y buscar el número de victorias del juego tiene una complejidad O(1), ya que las busquedas se realizan en las tablas de hash.


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

1 = The_Legend_of_Zelda

2 = Fire_Emblem

3 = Super_Mario

4 = The_Legend_of_Zelda

5 = Kirby


# Caso número 4

INPUT:

Selecciona: 3

De que juego quieres saber sus victorias: Pokemon

OUTPUT:

Victorias: 60
