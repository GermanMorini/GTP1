import random as r

def imprimir(mat:list[list[int]]):
        for i in range(len(mat)):
                for j in range(len(mat)):
                        print(f"{mat[i][j]}\t", end="")
                print("")

def sumar_adyacentes(mat, i, j) -> int:
        suma:int = 0

        for m in range(3):
                for n in range(3):
                        if m+i-1 >= 0 and m+i-1 < len(mat) and n+j-1 >= 0 and n+j-1 < len(mat[0]) and not (m == 1 and n == 1):
                                suma += mat[m+i-1][n+j-1]
        
        return suma

def main():
        mat1 = [
                [45, 12, 88, 34, 67, 9, 56, 23, 78, 41],
                [19, 63, 30, 75, 52, 7, 91, 28, 46, 84],
                [10, 68, 27, 51, 3, 80, 59, 94, 42, 76],
                [65, 22, 17, 37, 89, 2, 98, 54, 31, 70],
                [8, 47, 55, 14, 71, 26, 61, 95, 38, 83],
                [64, 29, 77, 15, 43, 60, 86, 5, 92, 20],
                [72, 33, 50, 4, 79, 18, 25, 69, 96, 11],
                [62, 85, 13, 58, 21, 87, 39, 6, 73, 32],
                [24, 66, 1, 44, 97, 35, 53, 81, 16, 74],
                [48, 36, 82, 57, 40, 90, 25, 12, 49, 68]
        ]
        ORDEN:int = 10

        mat2 = [[r.randint(0, 10) for i in range(ORDEN)] for j in range(ORDEN)]

        imprimir(mat1)

        i = int(input("Ingrese la posición i: "))
        j = int(input("Ingrese la posición j: "))

        print(f"La suma de los elem. adyacentes es: {sumar_adyacentes(mat1, i, j)}")

if __name__ == '__main__':
        main()
