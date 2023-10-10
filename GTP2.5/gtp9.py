import random as r

def diff(mat:list[int]) -> int:
        res = 0

        for i in range(len(mat)):
                for j in range(i, len(mat)):
                        res += mat[i][j] - mat[len(mat)-1-i][len(mat)-1-j]

        return res

def main():
        N = int(input("Ingrese el orden de la matriz: "))
        mat = [[-10 + int(20*r.random()) for i in range(N)] for j in range(N)]

        print(mat)

        print(f"Resultado: {diff(mat)}")

if __name__ == '__main__':
        main()
