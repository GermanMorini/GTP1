def almacenar(nombres:list[str], edades, nom):
        for i in range(6):
                if edades[i] == 18 or edades[i] == 20 or edades[i] == 22:
                        nom.append(nombres[i])

def main():
        nombres:list[str] = []
        nom:list[str] = []
        edades:list[int] = []

        for i in range(6):
                nombres.append(input(f"Ingrese el nombre de la persona {i+1}: "))
                edades.append(int(input("Ingrese su edad: ")))
                print()              

        almacenar(nombres, edades, nom)

        print(f"\nLas personas que tienen 18, 20 o 22 años son: {nom}")

if __name__ == '__main__':
        main()
