def main():
        SIZE:int
        v1:list[int] = []; v2:list[int] = []

        SIZE = int(input("Ingrese el largo de los arreglos: \n> "))

        for i in range(SIZE):
                v1.append(int(input(f"Ingrese el valor {i+1} para el vector 1: ")))
        
        print()

        for i in range(SIZE):
                v2.append(int(input(f"Ingrese el valor {i+1} para el vector 2: ")))

        for i in [v1[j]+v2[j] for j in range(SIZE)]:
                print(f"[{i}]", end=" ")
        
        print()

if __name__ == '__main__':
        main()
