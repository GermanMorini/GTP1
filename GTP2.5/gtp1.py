def get_name(ID:int, ids:list[int], nombres:list[str]):
        for i in range(len(ids)):
                if ID == ids[i]:
                        return nombres[i]

        # if ID in ids:
        #         return nombres[ids.index(ID)]
        # else:
        #         print("No hay un empleado con ese ID")

def main():
        nombres:list[str] = []
        ids:list[int] = []

        for i in range(5):
                nombres.append(input(f"Ingrese el nombre del empleado {i}: "))
                ids.append(int(input("Ingrese el ID de este empleado: ")))
                print()
        
        name:str = get_name(input("Ingrese ID del empleado a consultar: "))

        if name:
                print(f"El nombre solicitado es {name}")



if __name__ == '__main__':
        main()
