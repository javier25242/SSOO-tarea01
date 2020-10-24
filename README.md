# SSOO-tarea01
tarea1 Sistemas Operativos

El metodo ignorarSenal se encarga de informarle al kernel que debe ignorar la primera señal que se le entregue, esto mediante la función SIG_DFL (función creada para que el proceso se cierre luego de apretar 2 veces ctrl c).

El metodo obtenerHora se hace la estructura de como se entregará la hora, es decir en que formato se presentará, esto con la biblioteca time.h. Despues tenemos un if que comprueba si la señal enviada es la correcta, si la señal es correcta el programa continua.
