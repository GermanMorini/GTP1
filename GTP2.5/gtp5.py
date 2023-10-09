def organizar(nom, ed):
        b = 0

        while(b == 0):
                b = 1

                for i in range(len(ed) - 1):
                        if nom[i] > nom[i+1]:
                                aux = ed[i]
                                ed[i] = ed[i+1]
                                ed[i+1] = aux
                
                                aux = nom[i]
                                nom[i] = nom[i+1]
                                nom[i+1] = aux
                                
                                b = 0

def main():
        nom = ["Javier","Eulalia","Pancracio","Horacio","Susana"]
        ed = [5, 15, 9, 13, 8]
   
        for i in range(5):
                print(f"{nom[i]} de {ed[i]} años")

        organizar(nom, ed)
        print()

        for i in range(5):
                print(f"{nom[i]} de {ed[i]} años")

if __name__ == '__main__':
        main()
