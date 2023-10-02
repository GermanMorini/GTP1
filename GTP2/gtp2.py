def get_multiplos(SIZE:int, base:int) -> list[int]:
        return [base*i for i in range(1, SIZE+1)]

def print_vect(v:list[int]):
        for i in v: print(f"{i}", end=" ")
        print()

def main():
        SIZE:int; base:int
        v:list[int] = []

        print("Ingrese la dimensión del arreglo: ")
        SIZE = int(input("> "))

        print("Ingrese la base: ")
        base = int(input("> "))

        v = get_multiplos(SIZE, base)

        print_vect(v)     

if __name__ == "__main__":
        main()
