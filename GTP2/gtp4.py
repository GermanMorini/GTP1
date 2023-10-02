import random as r

def main():
        a:int = int(input("Ingrese la cantidad de alumnos: \n> "))
        v:list[int] = [r.randint(1, 10) for i in range(a)]

        print(v)

        deficientes = len([x for x in v if x > 0 and x <= 3])
        regulares = len([x for x in v if x == 4 or x == 5])
        buenos = len([x for x in v if x >= 6 and x <= 8])
        excelentes = len([x for x in v if x == 9 or x == 10])

        print(f"Deficientes: {deficientes}\nRegulares: {regulares}\nBuenos: {buenos}\nExcelentes: {excelentes}")


if __name__ == "__main__":
        main()
