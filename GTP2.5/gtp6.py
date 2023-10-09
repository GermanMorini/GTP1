import random as r

def corregir(preg, resp) -> tuple:
        puntaje = 0
        correctas = 0
        incorrectas = 0

        for i in range(10):
                puntaje += 5 * (preg[i] == resp[i])
                correctas += preg[i] == resp[i]
                incorrectas += preg[i] != resp[i]

        return (puntaje, correctas, incorrectas)

def main():
        preg = [1,0,0,1,1,0,1,0,0,1]
        resp = [r.choice([0,1]) for i in range(10)]
        
        print(preg)
        print(resp)

        correcion = corregir(preg, resp)

        print(f"\nPuntaje: {correcion[0]}/50\nResp. correctas: {correcion[1]}\nIncorrectas: {correcion[2]}")

if __name__ == '__main__':
        main()
