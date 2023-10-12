import random as r

def bbl_sort(v:list, menor_a_mayor:bool):
        b = 0

        while b == 0:
                b = 1

                for i in range(len(v) - 1):
                        if (v[i] < v[i+1] and menor_a_mayor) or (v[i] > v[i+1] and not menor_a_mayor):
                                aux = v[i]
                                v[i] = v[i+1]
                                v[i+1] = aux
                                b = 0

def es_par(v:list):
        par = not sum(v)%2
        
        print(v)

        if par:
                print("Es par")
        else:
                print("Es impar")

        bbl_sort(v, par)

        print(v)

def main():
        mat1 = [
                [3,6,5],
                [5,9,4],
                [8,7,1]
        ]

        mat2 = [
                [30, 26, 51, 19],
                [57, 19, 4 ,10],
                [24, 73, 1 ,17],
                [15, 97, 31, 8],
        ]

        N:int = int(input("Ingrese el orden: "))

        mat3 = [[r.randint(-10, 10) for j in range(N)] for i in range(N)]

        vect1 = [sum(fila) for fila in mat1]
        vect2 = [sum(fila) for fila in mat2]
        vect3 = [sum(fila) for fila in mat3]

        # es_par(vect1)
        # es_par(vect2)

        for i in range(N):
                print(mat3[i])

        es_par(vect3)
        

if __name__ == '__main__':
        main()