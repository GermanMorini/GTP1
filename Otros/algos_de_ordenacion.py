import random as r
from timeit import timeit

# Fuentes:
# https://www.youtube.com/watch?v=RfXt_qHDEPw&t=348s
# https://www.youtube.com/watch?v=l7-f9gS8VOs

LARGO:int = 10000

arr = [n for n in range(LARGO)]
r.shuffle(arr)

# Timepo cuadrático
def bubble_sort(arr:list):
        b = 0

        while b == 0:
                b = 1

                for i in range(len(arr)-1):
                        if arr[i] > arr[i+1]:
                                tmp = arr[i]
                                arr[i] = arr[i+1]
                                arr[i+1] = tmp
                                b = 0

# Tiempo cuadrático
# Funciona mejor si los datos ya están "un poco ordenados"
def insertion_sort(arr:list):
        for i in range(1,len(arr)):
                actual = arr[i]

                j = i-1

                while(j > -1 and actual < arr[j]):
                        arr[j+1] = arr[j]
                        j -= 1
                
                arr[j+1] = actual

# Busca el menor elemento del arreglo y lo coloca al comienzo
# Tiempo cuadrático
def selection_sort(arr:list):
        for i in range(len(arr)):
                minimo = i

                for j in range(i+1, len(arr)):
                        if arr[j] < arr[minimo]:
                                minimo = j
                
                if minimo != i:
                        aux = arr[i]
                        arr[i] = arr[minimo]
                        arr[minimo] = aux

# "Divide y vencerás"
# Consiste en dividir el arreglo en partes mas pequeñas y ordenarlas, luego ordenar las partes mas grandes y así...
# Versión recursiva
# Tiempo cuasilinear
def merge_sort_recurs(arr:list) -> list:
        mitad = len(arr)//2

        if len(arr) < 2:
                return arr

        # mitad izquierda del arreglo
        izq = [arr[i] for i in range(mitad)]

        return merge(merge_sort_recurs(izq), merge_sort_recurs(arr))

def merge(izq:list, der:list) -> list:
        arr:list = []

        while len(izq) and len(der):
                if izq[0] < der[0]:
                        # Se remueve el primer elemento
                        arr.append(izq.pop(0))
                else:
                        arr.append(der.pop(0))
        
        return arr.extend(izq.extend(der))

def quick_sort(arr:list, izq=0, der = len(arr)-1):
        if izq >= der: return

        pivot = particion(arr, izq, der)
        quick_sort(arr, izq, pivot-1)
        quick_sort(arr, pivot+1, der)

def particion(arr:list, izq:int, der:int):
        pivot = arr[der]
        indice = izq

        for i in range(izq, der):
                if arr[i] < pivot:
                        cambiar(arr, i, indice)
                        indice += 1

def cambiar(arr:list, primer_indice:int, segundo_indice:int):
        tmp = arr[primer_indice]
        arr[primer_indice] = arr[segundo_indice]
        arr[segundo_indice] = tmp

def main():
        # print(arr)

        # bubble_sort(arr)
        # insertion_sort(arr)        
        # selection_sort(arr)
        # merge_sort_recurs(arr)
        
        # print(f"Tiempo para bubble_sort: {timeit('bubble_sort(arr)', setup='from __main__ import bubble_sort, arr', number=1)}s ({LARGO} elementos)")
        print(f"Tiempo para insertion_sort: {timeit('insertion_sort(arr)' , setup='from __main__ import insertion_sort, arr', number=1)}s ({LARGO} elementos)")
        # print(f"Tiempo para selection_sort: {timeit('selection_sort(arr)', setup='from __main__ import selection_sort, arr', number=1)}s ({LARGO} elementos)")
        # print(f"Tiempo para merge_sort: {timeit('merge_sort(arr)' , setup='from __main__ import merge_sort, arr', number=1)}s ({LARGO} elementos)")
        # print(f"Tiempo para insertion_sort: {timeit('quick_sort(arr)' , setup='from __main__ import quick_sort, arr', number=1)}s ({LARGO} elementos)")

        # print(arr)

if __name__ == '__main__':
        main()
