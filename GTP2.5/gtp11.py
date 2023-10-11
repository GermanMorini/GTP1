def main():
        edificio1 = [
                [5,1,0,0,3,2],
                [3,0,1,6,1,9],
                [1,0,2,0,3,1],
                [1,2,5,9,2,1],
                [9,2,2,1,1,1],
                [5,0,3,8,2,3],
                [2,5,9,4,7,1],
                [4,1,3,4,4,0],
                [1,1,5,0,1,0],
                [2,5,9,4,0,2],
                [2,5,1,7,6,1],
                [0,3,8,9,7,1],
                [0,1,9,4,3,0],
                [1,1,5,7,1,0],
                [2,3,6,1,9,1],
                [7,1,4,0,9,2],
                [3,0,7,6,5,9],
                [3,0,2,0,3,1],
                [2,5,7,1,2,1],
                [2,1,4,6,5,4]
        ]

        edificio2 = [
                [6,3,0,5,4,2],
                [4,0,3,6,1,3],
                [2,1,4,0,5,3],
                [1,4,6,1,0,2],
                [6,3,5,2,1,4],
                [4,1,5,0,3,0],
                [1,6,0,3,6,4],
                [3,5,2,7,0,6],
                [6,0,4,5,2,4],
                [3,5,6,2,4,0],
                [4,6,6,1,0,5],
                [0,5,3,6,6,2],
                [3,0,6,4,1,0],
                [0,6,4,1,4,0],
                [4,6,0,2,3,1],
                [6,0,5,3,4,0],
                [4,1,6,0,5,3],
                [4,0,1,4,0,3],
                [5,2,6,1,0,3],
                [3,2,4,6,2,4]
        ]

        total:int = 0
        contador:int
        acum:int = 0
        prom_piso:float = 0
        prom_edificio:float = 0


        for i in range(20):
                contador = 0
                prom_piso = 0

                for j in range(6):
                        contador += edificio1[i][j]

                prom_piso += contador/6
                print(f"Promedio hab. del piso {i+1}: {prom_piso:.2f}")

                prom_edificio += prom_piso/20
                total += contador

        print(f"El total de habitantes es: {total}")
        print(f"Promedio de hab. por piso: {prom_edificio:.2f}")

if __name__ == '__main__':
        main()
