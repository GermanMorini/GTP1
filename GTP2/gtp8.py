def main():
        mayores:list[str] = []
        nombre:str
        edad:int

        for i in range(10):
                edad = int(input(f"Ingrese la edad del alumno {i+1}: "))
                nombre = input("Ingrese su nombre: ")

                if edad >= 18: mayores.append(nombre)

        print(mayores)

if __name__ == '__main__':
        main()
