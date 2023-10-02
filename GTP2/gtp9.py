def main():
        avg:float = 0
        mayores:int = 0
        menores:int = 0

        for i in range(14):
                edad:int = int(input(f"Ingrese la edad de la persona {i+1}: "))

                mayores += edad >= 18
                menores += edad < 18
                avg += edad/14

        print(f"{mayores} mayores de edad" )
        print(f"{menores} menores de edad")
        print(f"promedio de edad: {round(avg,2)}")

if __name__ == '__main__':
        main()
