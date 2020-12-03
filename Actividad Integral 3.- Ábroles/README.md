# Actividad Integral 3.- Ábroles

# Explicación 

Para poder correrlo es necesario descargar los tres archivos el main.cpp, bst.h y personajes.txt, al correr el programa nos va mostrar el acomodo de los arboles en BST de los franquicia de los juegos de los personajes de Super Smash Bros.
El main.cpp le el archivo y lo acomoda para poder imprimirlo en forma de árbol.
El bst.h cuenta con las funciones para poder realizar el acomodo del árbol, visto en clase.
El personajes.txt muestra la lista de los Personajes de Super Smash Bros, los primeros números son el numero de victorias con el que cuenta cada personaje, despues es la franquicia dek videojuego del personaje, despues seria el número de mejor a peor siendo 1 el mejor y 9 el peor de la franquicia de cada persoanje, que es de ahí de donde estamos realizando el árbol, y por ultimo muestra el nombre del personaje.

# Análisis de complejidad

Cuando se carga el archivo personajes.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Para la impresion de las indicaciones y los datos que tiene que dar el usuario tiene una complejidad de O(1), ya que solo da una vuelta para realizarlo. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1). Para el árbol heap su complejidad es de O(log(n)), ya que el árbol se divide para así poder poner los datos y imprimirlos los datos obtenidos con una complejidad O(n). Por último, para la tabla hash su complejidad es O(1), ya que el hashing se realiza en un solo paso y buscar el número de victorias del juego tiene una complejidad O(1), ya que las busquedas se realizan en las tablas de hash.


# Casos de Pruebas

# Caso número 1

OUTPUT:

(6 1 0 5 3 2 4 8 7 9)

(0 1 2 3 4 5 6 7 8 9)

(0 2 4 3 5 1 7 9 8 6)

(6 1 8 0 5 7 9 3 2 4)
