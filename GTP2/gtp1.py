def ingresar(v:list[int]):
        for i in range(5):
                print(f"Ingrese el elemento {i+1}: ")
                v.append(input("> "))

def main():
        # v:list[int]
        v:list[int] = [int(n) for n in input("Ingrese 5 números separados por espacios: ").split()[:5]]

        # ingresar(v)
        print(v)
        
if __name__ == "__main__":
        main()
