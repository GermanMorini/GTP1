def main():
        numeros = []
        avg:float = 0
        i = 5

        while i > 0:
                numeros.append(int(input(f"Ingrese un valor ({i} restantes): ")))
                i = i-1

        for n in numeros: avg += n/5

        print(avg)

if __name__ == '__main__':
        main()
