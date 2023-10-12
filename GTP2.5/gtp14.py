def calcular_ganancias(rec:list) -> (int, list, list):
        total:int = 0
        mes:list[int] = [0] * 12
        sucu:list[int] = [0] * 5

        for i in range(5):
                for j in range(12):
                        total += rec[j][i]
                        sucu[i] += rec[j][i]
                        mes[j] += rec[j][i]

        return (total, mes, sucu)

def main():
        recaudacion = [
                [589, 234, 743, 126, 395],
                [812, 497, 635, 241, 367],
                [458, 719, 152, 648, 321],
                [123, 976, 583, 314, 429],
                [786, 245, 931, 682, 147],
                [562, 398, 214, 739, 876],
                [259, 683, 417, 835, 126],
                [943, 276, 518, 364, 792],
                [645, 189, 527, 374, 812],
                [376, 981, 264, 437, 592],
                [158, 729, 846, 365, 491],
                [723, 618, 459, 871, 235]
        ]

        total, mes, sucu = calcular_ganancias(recaudacion)

        print(f"El total recaudado es: {total}")

        for i in range(len(mes)):
                print(f"Total del mes {i+1}: {mes[i]}")
        
        for i in range(len(sucu)):
                print(f"Total de la sucu {i+1}: {sucu[i]}")

if __name__ == '__main__':
        main()
