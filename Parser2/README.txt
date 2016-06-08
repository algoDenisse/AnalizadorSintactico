README

Creado por: Dennisse Rojas Casanova  2013001522
		 	Treicy Sanchez Gutierrez 2013001517

La ejecucion del Parser para C se debe realizar por medio de la terminal, ejecutando el comando 'make' sin comillas.

El programa solicitara el nombre del archivo o bien elcomando '-B' (ambos sin comillas) codigo fuente que se desea parsear.
El mismo debe encontrarse en la carpeta del misma carpeta del proyecto.

Puede utilizarse cualquiera de los archivos de prueba incluidos en esta carpeta.

Si se indica unicamente el nombre del archivo, el programa parseara el Codigo y presentara los resultados en consola.

Si se indica el comando '-B' sin comillas, el programa generara un documento latex con el codigo fuente y el reporte de
sus errores de una manera llamativa. Para generar una presentacion beamer, el usuario debera ejecutar el siguiente comando:

pdflatex beamerFile.tex
evince --fullscreen beamerFile.pdf

Se desplegara automaticamente una presentacion beamer de gran calidad con el codigo fuente y sus errores.


Requerimientos NO implementados y fallos:

  1. La presentacion no se ejecuta automaticamente, por lo que es necesario que el usuario corra los comandos anteriormente
  mencionados si ejecuto el comando '-B'.

  2. Por reglas de la gramatica que no se lograron implementar, cualquier declaracion de variables fuera de una funcion, se
  considerara un error sintactico. Por la naturaleza de los compiladores, esto puede llegar a generar cascada de errores.

  3. En ocasiones se generan cascada de errores.
