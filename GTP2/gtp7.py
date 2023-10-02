def dot(v1:list[int], v2:list[int]) -> int:
        rtn = 0
        
        for i in range(len(v1)):
                rtn += v1[i]*v2[i]

        return rtn

def main():
        v1 = []; v2 = []
        LENGTH:int = int(input("Ingrese el largo de los vectores: "))

        for i in range(LENGTH): v1.append(int(input(f"Ingrese el elemento {i+1} (arreglo 1): ")))
        for i in range(LENGTH): v2.append(int(input(f"Ingrese el elemento {i+1} (arreglo 2): ")))

        print(dot(v1, v2))

if __name__ == '__main__':
        main()
