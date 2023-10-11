def main():
        recaudacion = [
                [372, 610, 951, 207, 463, 815, 409, 751, 203, 114, 458, 672],
                [149, 230, 815, 208, 469, 673, 750, 204, 957, 304, 867, 591],
                [503, 146, 819, 672, 408, 512, 763, 609, 402, 159, 471, 305]
        ]

        total:int = 0
        total_linea:list[int] = [0] * 3
        total_coche:list[int] = [0] * 12

        for i in range(3):
                for j in range(12):
                        total += recaudacion[i][j]
                        total_linea[i] += recaudacion[i][j]
                        total_coche[j] += recaudacion[i][j]

        for i in range(3):
                print(f"Total por la línea {i+1}: {total_linea[i]}")

        for j in range(12):
                print(f"Total por el coche {i+1}: {total_coche[j]}")

        print(f"Total recaudado: {total}")

if __name__ == '__main__':
        main()
