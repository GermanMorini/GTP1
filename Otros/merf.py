import random as r

PRECISION:int = 3

def p_matrix(matrix:list[list[float]]):
        for fila in matrix:
                print(fila)
        print()

"""
Multiplico una fila por un escalar
i: fila a modificar
K: escalar de la mult.
"""
def type_1_op(matrix:list[list[float]], i:int, K:float):
        for m in range(len(matrix[0])):
                matrix[i][m] = K*matrix[i][m]

"""
Multiplico una fila y la sumo a otra
i1: fila objetivo
i2: fila sumando
K: escalar de la mult.
"""
def type_2_op(matrix:list[list[float]], i1:int, i2:int, K:float):
        for m in range(len(matrix[0])):
                matrix[i1][m] += K*matrix[i2][m]
                matrix[i1][m] = round(matrix[i1][m], PRECISION)

"""
Cambio de filas
"""
def type_3_op(matrix:list[list[float]], i1:int, i2:int):
        aux = matrix[i1]
        matrix[i1] = matrix[i2]
        matrix[i2] = aux

def ponchar(matrix:list[list[float]], pivot_i:int, pivot_j:int):
        for m in range(len(matrix)):
                if m == pivot_i: continue
                type_2_op(matrix, m, pivot_i, -matrix[m][pivot_j])

def round_values(matrix:list[list[float]]):
        for i in range(len(matrix)):
                for j in range(len(matrix[0])):
                        matrix[i][j] = round(matrix[i][j], PRECISION)

def sort(matrix:list[list[float]]):
        index:int = 0

        for j in range(len(matrix[0])):
                for i in range(len(matrix)):
                        if(matrix[i][j] != 0 and index < len(matrix)):
                                type_3_op(matrix, index, i)
                                index += 1
                                break

def merf(matrix:list[list[float]]):
        has_pivot:bool

        for i in range(len(matrix)):
                has_pivot = False

                for j in range(len(matrix[0])):
                        if matrix[i][j] != 0 and not has_pivot:
                                type_1_op(matrix, i, 1/matrix[i][j])
                                has_pivot = True
                                ponchar(matrix, i, j)
        
        round_values(matrix)
        sort(matrix)

def main():
        m:int = r.randint(2, 5)
        n:int = r.randint(2, 5)

        print(f"Dimensiones: {m}×{n}\n")

        matrix:list[list[float]] = [[r.randint(-10, 10) for j in range(n)] for i in range(m)]
        
        p_matrix(matrix)
        merf(matrix)
        p_matrix(matrix)
        

if __name__ == '__main__':
        main()