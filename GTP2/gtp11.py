def main():
        grado = int(input("Ingrese el grado del polinomio: "))
        coef = [int(n) for n in input("Ingrese los coeficientes: ").split()[:grado+1]]
        X = int(input("Ingrese el valor X: "))

        print( sum([a*(X**n) for n, a in enumerate(coef)]) )
        # print( sum([a*(X**n) for n, a in enumerate(reversed(coef))]) )

if __name__ == '__main__':
        main()
