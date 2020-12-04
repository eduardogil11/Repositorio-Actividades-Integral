# Actividad Integral 1 .- Conceptos Básicos y Algoritmos Fundamentales


# Explicación

Para poder correrlo es necesario descargar los dos archivos el main.cpp y smash.txt, al correr el programa nos ordena y busca el smash.txt. El main.cpp le el archivo, lo ordena y lo acomoda para poder imprimirlo. El smash.txt muestra la lista de los personajes de Super Smash Bros, lo primero es la franquicia del juego del personaje, despues seria el número de mejor a peor siendo 1 el mejor y 9 el peor juego de cada persoanje, y por ultimo, muestra el nombre del personaje. 


# Análisis de complejidad

Cuando se carga el archivo smash.txt su complejidad es O(n), ya que es lineal al tomar un ciclo para poder leerlo, y posteriormente al guardar los datos en .txt sigue siendo su complejidad O(n), ya que es lineal y recorre los datos. Después buscar los datos tiene una complejidad O(n), ya que se realiza una busqueda secuencial y al momento de ordenar los datos cuenta con una complejidad O(n^2), ya que se llega a utilizar dos ciclos para poder realizar el ordenamiento, para posteriormente realizar la impresion de los datos ordenados y se guardan en un nuevo archivo llamado succes.txt que cuenta con una complejidad O(1).
