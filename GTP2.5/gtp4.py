def ordenar(ed:list[int], nom:list[str]):
        b = 0

        while(b == 0):
                b = 1

                for i in range(len(ed) - 1):
                        if ed[i] < ed[i+1]:
                                aux = ed[i]
                                ed[i] = ed[i+1]
                                ed[i+1] = aux
                
                                aux = nom[i]
                                nom[i] = nom[i+1]
                                nom[i+1] = aux

                                b = 0

def main():
        S = 3

        nombre = []
        edad = []
        vist = []
        contador = 0

        for i in range(S):
                nombre.append(input(f"Ingrese el nombre del paciente {i+1}: "))
                edad.append(int(input("Ingrese su edad: ")))
                vist.append(int(input("Visitas previas: ")))
                contador += vist[i] > 4
                print()

        ordenar(edad, nombre)
        
        print(f"La cantidad de pacientes con más de 4 visitas previas es: {contador}")
        print(f"Los pacientes más longevos son: {nombre[0]}, {nombre[1]}, {nombre[2]}")
        print(f"El paciente más jóven atendido en el día es: {nombre[S-1]}")

if __name__ == '__main__':
        main()
