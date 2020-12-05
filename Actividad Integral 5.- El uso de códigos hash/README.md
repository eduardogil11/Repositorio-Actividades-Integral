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

De que juego quieres modificar sus victorias: Fire_Emblem

Elige un numero entre 10 y 60: 10

Selecciona: 2

OUTPUT:

14. Fire_Emblem: 10


# Caso número 2

INPUT:

Selecciona: 1 

De que juego quieres modificar sus victorias: Fire_Emblem

Elige un numero entre 10 y 60: 10

Selecciona: 1 

De que juego quieres modificar sus victorias: Super_Mario

Elige un numero entre 10 y 60: 30

Selecciona: 2

OUTPUT:

1. Super_Mario: 30, 14. Fire_Emblem: 10, 

# Caso número 3

INPUT:

Selecciona: 1 

De que juego quieres modificar sus victorias: Fire_Emblem

Elige un numero entre 10 y 60: 10

Selecciona: 1 

De que juego quieres modificar sus victorias: Super_Mario

Elige un numero entre 10 y 60: 30

Selecciona: 1 

De que juego quieres modificar sus victorias: Pokemon

Elige un numero entre 10 y 60: 60

Selecciona: 2

OUTPUT:

1. Super_Mario: 30, 9. Pokemon: 60, 14. Fire_Emblem: 10, 

# Caso número 4

INPUT:

Selecciona: 1 

De que juego quieres modificar sus victorias: Fire_Emblem

Elige un numero entre 10 y 60: 10

Selecciona: 1 

De que juego quieres modificar sus victorias: Super_Mario

Elige un numero entre 10 y 60: 30

Selecciona: 1 

De que juego quieres modificar sus victorias: Pokemon

Elige un numero entre 10 y 60: 60

Selecciona: 1 

De que juego quieres modificar sus victorias: Kirby

Elige un numero entre 10 y 60: 50

Selecciona: 2

OUTPUT:

1. Super_Mario: 30, 3. Kirby: 50, 9. Pokemon: 60, 14. Fire_Emblem: 10,
