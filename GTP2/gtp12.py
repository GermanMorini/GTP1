def bbl_sort_1(v:list) -> list:
        for i in range(len(v)):
                for j in range(len(v)-1):
                        if v[j] < v[j+1]:
                                aux = v[j]
                                v[j] = v[j+1]
                                v[j+1] = aux

        return v

def bbl_sort_2(v:list) -> list:
        b:bool = 0

        while b == 0:
                b = 1

                for i in range(len(v)-1):
                        if v[i] < v[i+1]:
                                aux = v[i]
                                v[i] = v[i+1]
                                v[i+1] = aux
                                b = 0

        return v

def main():
        algos:dict = {
                "1": bbl_sort_1,
                "2": bbl_sort_2
        }

        N = int(input("Ingrese la cantidad de elementos: "))
        v = [int(n) for n in input("Ingrese los elem... ").split()[:N]]

        print(v)

        try:        
                print(algos[input("Elija el algoritmo: ")](v))
        except KeyError:
                print("No existe ese algo.")
                exit(1)


if __name__ == '__main__':
        main()
