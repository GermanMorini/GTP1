def main():
        V = [int(n) for n in input("Ingrese cada elemento: ").split()[:5]]
        A = [V[-i] for i in range(1,len(V)+1)]

        print(V)
        print(A)


if __name__ == '__main__':
        main()
