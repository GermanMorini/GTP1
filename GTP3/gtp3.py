import random as r

NOMBRES:str = ["Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"]

class Participante:
        nombre:str
        puntos:list[int]

        def __init__(self, nombre:str, puntos:list[int]):
                self.nombre = nombre
                self.puntos = puntos

        def puntaje(self) -> int:
                return sum(self.puntos)

        def __repr__(self) -> str:
                return f"Nombre: {self.nombre}\nPuntos: {self.puntos}"

def main():
        cantidad:int = int(input("Ingrese la cantidad de participantes: "))

        part:list[Participante] = [Participante(r.choice(NOMBRES), [r.randint(0,10) for j in range(10)]) for n in range(cantidad)]
        
        ganador:Participante = part[0]

        for i in range(1, cantidad):
                if part[i].puntaje() > ganador.puntaje():
                        ganador = part[i]

        print(part)
        print(f"El gandor es: {ganador.nombre}")
        

if __name__ == '__main__':
        main()
