# Actividad Integral 3.- Ábroles

# Explicación 

Para poder correrlo es necesario descargar los tres archivos el main.cpp, bst.h y personajes.txt, al correr el programa nos va mostrar el acomodo de los arboles en  bst de la franquicia de los juegos de los personajes de Super Smash Bros. El main.cpp le el archivo y lo acomoda para poder imprimirlo en forma de árbol. El bst.h cuenta con las funciones para poder realizar el acomodo del árbol, visto en clase. El personajes.txt muestra la lista de los personajes de Super Smash Bros, los primeros números son el número de victorias con el que cuenta cada personaje, después es la franquicia del juego del personaje, después seria el número de mejor a peor siendo 1 el mejor y 9 el peor del juego de cada persoanje, que es de ahí donde se realiza el árbol, y por ultimo, muestra el nombre del personaje.

# Análisis de complejidad

Cuando se carga el archivo personajes.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial. Para el árbol bst su complejidad es de O(n), ya que el árbol se recorre de manera lineal para así poder poner el dato.
