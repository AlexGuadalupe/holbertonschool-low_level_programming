03-05-2024
C - argc, argv
En el lenguaje de programación C, los argumentos de la línea de comandos se manejan mediante los parámetros argc y argv en la función main(). Estos permiten que un programa C reciba información desde la línea de comandos al ser ejecutado. Aquí tienes una explicación básica:

    argc (argument count):
        Es un entero que representa el número de argumentos pasados al programa desde la línea de comandos.
        Siempre es al menos 1, ya que el primer argumento es el nombre del programa en sí (por ejemplo, ./mi_programa).

    argv (argument vector):
        Es un array de cadenas de caracteres (strings) que contienen los argumentos pasados al programa.
        El primer elemento (argv[0]) es el nombre del programa.
        Los siguientes elementos (argv[1], argv[2], ...) son los argumentos adicionales proporcionados desde la línea de comandos.