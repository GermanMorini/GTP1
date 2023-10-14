# Comandos de git

Todos empiezan por `git`, se debe escribir `git <comando>`

`path` puede ser un directorio, un archivo o un glob (`*` selecciona todo lo de la carpeta actual, `.` se refiere al directorio actual, `..` el directorio anterior, ... )

Se puede combinar mas de una *flag*, ej: 
~~~bash
git commit --amend --no-edit                    # Sobreescribe el commit anterior y no cambia el mensaje

git commit -am "Hecho el ej. 12"                # Hace un commit, añadiendo todos los cambios
~~~

`remoto` es un repo. remoto enlazado a una rama local, se puede enlazar una rama a otra remota usando `git remote add <URL>`

## Comandos

~~~bash
clone <URL>                             # Clona un repo
~~~

___

~~~bash
add <path>                              # Añade un fichero particular

add -A                                  # Añade todo
~~~

___

~~~bash
status                                  # Estado actual del repo

status -s                               # Ídem, formato corto

status --show-stash                     # Info del stash
~~~

___

~~~bash
restore <path>                          # Restaura todos los cambios no confirmados de un fichero

restore --staged <path>                 # Saca del area "stage" un fichero
~~~

___

~~~bash
commit -m <mensaje>                     # Commit indicando mensaje

commit -a                               # Añade los cambios no confirmados (no incluye archivos/carpetas nuevas)

commit --amend                          # Añade los cambios actuales al commit anterior

commit --no-edit                        # No edita el mensaje del commit
~~~

___

~~~bash
push                                    # Sube los cambios al repo. remoto

push <remoto>                           # Ídem
~~~

___

~~~bash
fetch                                   # Se fija si hay cambios en el repo. remoto
~~~

___

~~~bash
pull                                    # Descarga los cambios en el repo. remoto

pull <remoto>                           # Ídem
~~~

___

~~~bash
checkout <rama/commit>                  # Cambia hacia un commit/rama particular

checkout -b <nombre_rama>               # Crea una nueva rama y cambia a ella
~~~

___

~~~bash
branch                                  # Muestra las ramas
~~~

___

~~~bash
log                                     # Registro de commits

log --abbrev-commit                     # Abrevia los hashes de los commits

log --graph                             # Pinta "ramas" de colores, uniendo los commits
~~~

___

~~~bash
show                                    # Mustra los cambios entre los últimos dos commits

show <commit/rama> <commit/rama>        # Comapra commits/ramas

show --oneline                          # Ídem, pero muestra menos información en el título
~~~

___

~~~bash
config                                  # Cambia la configuración a nivel local (el repo. actual)

config --global                         # La cambia para todos los repositorios

config <opción>                         # Muestra el valor de la opción, ej: 'git config user.name' solo va a mostrar el nombre, no lo cambia

config user.name <nombre>               # Indica tu nombre

config user.email <email>               # Indica tu email 

config alias.<nombre> "<alias>"         # Crea un alias para un comando
~~~

___

~~~bash
remote -v                               # Muestra los repos. enlazados al actual

remote add <nombre> <URL>               # Enlaza el repo a otro, poniéndole un nombre

remote rename <viejo> <nuevo>           # Cambia el nombre de un repo

remote remove <nombre>                  # Remueve el enlace a un repo

remote rm ...                           # Ídem
~~~

___

~~~bash
reset --soft <commit>                   # Borra todos los commits hasta el indicado, dejando todos los archivos comod confirmados en el area "stage"

reset --mixed <commit>                  # Ídem, pero no los confirma (opción por defecto)

reset --hard <commit>                   # Ídem, pero borra todos los archivos

reset HEAD~1                            # Indica que se reseteará el commit actual

reset HEAD~<n>                          # Resetea hasta n commits hacia atrás
~~~

___

~~~bash
stash                                   # Guarda el estado actual del repo (no realiza un commit, no es lo mismo), y revierte el estado, como si no se hubieran hecho cambios

stash push -m "<mensaje>"               # Ídem, indica un mensaje para mas detalle

stash list                              # Lista los stashes guardados (los indica con un índice y el mensaje que introduciste)

stash show <n>                          # Muestra los cambios realizados en un stash

stash apply <n>                         # Añade los cambios de un stash (se pueden añadir a otra rama)
~~~

___

~~~bash
cherry-pick                             # Añade los cambios de otro commit al actual
~~~
