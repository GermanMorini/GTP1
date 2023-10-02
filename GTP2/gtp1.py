def ingresar(v:list[int]):
        for i in range(5):
                print(f"Ingrese el elemento {i+1}: ")
                v.append(input("> "))

def mostrar(v:list[int]):
        for elem in v: print(elem)

def main():
        v:list[int] = []
        
        ingresar(v)
        mostrar(v)

if __name__ == "__main__":
        main()
