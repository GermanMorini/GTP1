# Sockets en bash

Los sockets en linux se hallan en ´/dev´

Se referencian mediante un número (que se conoce como *file-descriptor*) y '<>'

El número debe ser >= 3 (0, 1 y 2 se usan como entrada/salida estándar)

- '<' indica que se será un socket de solo lectura
- '>' ... de solo escritura
- '<>' ... ambos

Para cerrar un socket se hace:

- ´exec {file-desc}<&-´ para un socket de lectura
- ´exec {file-desc}>&-´ ... de escritura
- ´exec {file-desc}<>&-´ ... ambos

## Ejemplos

### Creación de socket

~~~bash
exec 3<>/dev/"PROTOCOLO"/"HOST"/"PUERTO"                # Socket genérico

exec 9090<>/dev/tcp/192.168.1.24/9090                   # Socket con file-desc = 9090, host = 192.168.1.24 y puerto = 9090

exec 9090<>&-                                           # Cierra el anterior
~~~

### Usando los sockets

~~~bash
cat imagen.jpg >&3                                      # Envía una imagen al socket 3

read -run MENSAJE <&69                                  # Recibe datos por el socket 69 y los almacena en la variable 'MENSAJE'

dd if=/dev/sdc >&5 2>/dev/null                          # Envía una copia del dispositivo 'sdc', descartando los errores
~~~
