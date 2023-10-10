import random as r

def generar_n_vuelo(n_vuelo:list[str]):
        for i in range(len(n_vuelo)):
                for j in range(5):
                        n_vuelo[i] += f"{int(10 * r.random())}"

def estan_retrasados(horarios:list[bool]) -> int:
        contador = 0

        for i in range(len(horarios)):
                contador += not horarios[i]

        return contador        

def contar_pasajeros(pasajeros:list[int]) -> int:
        contador = 0

        for i in range(len(pasajeros)):
                contador += pasajeros[i]

        return contador

def main():
        cant_vuelos = int(input("Ingrese la cantidad de vuelos: "))
        
        # n_vuelo = [""] * cant_vuelos
        # generar_n_vuelo(n_vuelo)
        
        # n_vuelo = [f"{10000 + int(89999 * r.random())}" for n in range(cant_vuelos)]
        n_vuelo = [f"{(int(99999 * r.random())):05d}" for n in range(cant_vuelos)]
        pasajeros = [int(300* r.random()) for n in range(cant_vuelos)]
        en_horario = [r.choice((True, False)) for n in range(cant_vuelos)]

        print(n_vuelo)
        print(pasajeros)
        print(en_horario)

        cant_retrasados = estan_retrasados(en_horario)

        print(f"La cantidad de vuelos retrasados es: {cant_retrasados}")
        print(f"El porcentaje de vuelos atrasados con respecto al total es de: {(cant_retrasados * 100/cant_vuelos):.2f}%")
        print(f"La cantidad de pasajeros totales es: {contar_pasajeros(pasajeros)}")

if __name__ == '__main__':
        main()
