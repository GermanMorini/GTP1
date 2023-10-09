def main():
        # nombres = [0 for n in range(10)]
        # edades = [0 for n in range(10)]
        
        # Declaro el tamaño del arreglo
        nombres = [None] * 10
        edades = [None] * 10

        for i in range(10):
                nombres[i], edades[i] = tuple(input(f"Ingrese nombre y edad de la persona {i+1}: ").split()[:2])
        
        try:
                ed = edades[nombres.index("Maria")]
                print(f"\nMaría tiene {ed} años")
        except ValueError:
                print("\nNo existe María")

if __name__ == '__main__':
        main()
