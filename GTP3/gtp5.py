import random as r

NOMBRES:str = ["Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"]
PELICULAS:str = ["Big Hero 6", "That Thing You Do!", "Flamingo Road", "Perfect Human, The (Perfekte Menneske, Det)", "Living in Emergency: Stories of Doctors Without Borders", "Man on Fire", "Battleground", "Haunted Mansion, The", "Bill Burr: Let It Go", "Marwencol", "Shiver of the Vampires, The (Frisson des vampires, Le)", "Charlie Chan at Monte Carlo", "Vera Cruz", "Highway Racer", "Mothman Prophecies, The", "Final Darkness, The (Buio Omega)", "Fright Night", "How to Meet Girls from a Distance", "Phantom, The", "Few Good Men, A", "Panda! Go Panda! Rainy Day Circus", "Pocahontas II: Journey to a New World ", "Trilogy: The Weeping Meadow (Trilogia: To livadi pou dakryzei)", "Guess Who's Coming to Dinner", "Scar", "Tyler Perry's Diary of a Mad Black Woman", "Cambridge Spies", "Ace of Aces (a.k.a. Super Ace, The) (As des as, L')", "Resident Evil: Damnation", "Cold Prey III (Fritt Vilt III)", "Missionary Man", "Last House on the Left, The", "That Hamilton Woman", "Goebbels Experiment, The (Das Goebbels Experiment)", "Red Psalm (Még kér a nép)", "Manhattan Project, The", "Three Strangers", "Cesar & Rosalie (César et Rosalie)", "Signal, The (Señal, La)", "Five-Year Engagement, The", "Killer Inside Me, The", "Querelle", "Shocker", "Lover Come Back", "Occupants, The", "Dersu Uzala", "Mummy's Hand, The", "Worth Winning", "The Bone Snatcher", "Flight of the Navigator", "Strip-tease", "Millhaven", "Journey to Italy (Viaggio in Italia) (Voyage to Italy) (Voyage in Italy)", "Honky Tonk Freeway", "In Her Shoes", "Looney Tunes: Back in Action", "Fantastic Four: Rise of the Silver Surfer", "Dirt Bike Kid, The", "Too Early, Too Late (Trop tôt, trop tard)", "Passion Play", "Camila", "Petulia", "Beyond the Fear", "Bigger Than Life", "Besa (Solemn Promise)", "Yi Yi", "Shopworn Angel, The", "Wankers, The (Les branleuses)", "Glass Menagerie, The", "Paper Man", "Dark Half, The", "Last of the Mohicans, The", "Mountain Men, The", "Petting Zoo", "Ingeborg Holm", "Between Miracles", "Emperor", "Fans", "Black and White in Color (Noirs et blancs en couleur)", "Mr. Smith Goes to Washington", "Sherlock Holmes and the Voice of Terror", "Devdas", "Squaw Man, The", "Live and Become (Va, vis et deviens)", "Wolves", "Shadows and Fog", "Great Beauty, The (Grande Bellezza, La)", "Meet Me at the Fair", "Return of the Fly", "My Gun is Quick", "Don't Go In the Woods", "Short Eyes", "The Hire: Chosen", "Addams Family Values", "Riot on Sunset Strip", "Meatballs 4", "Once Upon a Time in Mexico", "The Second Best Exotic Marigold Hotel", "After the Life", "Bloodline"]

class Cancion:
        titulo:str
        artista:str
        duracion:int
        tamanio:int

        def __init__(self, titulo:str, artista:str, duracion:int, tamanio:int):
                self.titulo = titulo
                self.artista = artista
                self.duracion = duracion
                self.tamanio = tamanio
                
        def __repr__(self) -> str:
                return f"\nTitulo: {self.titulo}\nArtista: {self.artista}\nDuración: {self.duracion} Min\nTamaño: {self.tamanio} MB"

class Programa:
        playlist:list[Cancion]
        
        def __init__(self, playlist:list[Cancion]):
                self.playlist = playlist

        def aniadir(self):
                titl = input("Ingrese el título de la canción: ")
                art = input("Ingrese el artista: ")
                dur = input("Ingrese la duración: ")
                tam = input("Ingrese el tamaño: ")

                can:Cancion = Cancion(titl, art, dur, tam)

                if can not in self.playlist:
                        self.playlist.append(can)
                        print("\nCanción añadida con éxito!\n\n")
                else:
                        print("\nLa canción ya está en la lista!\n\n")

        # Método privado
        def __search_algorithm(self, regex:str, search_by="titulo") -> [(int, Cancion)]:
                result:list[tuple] = []
                
                for i in range(len(self.playlist)):
                        if regex in self.playlist[i].__getattribute__(search_by):
                                result.append((i, self.playlist[i]))

                return result

        def buscar(self):
                opts = {
                        "1": "titulo",
                        "2": "artista"
                }

                while True:
                        search_by = input("¿Por qué parámetro desea buscar? (1: titulo, 2: artista)")
                        
                        if search_by in opts:
                                query = input(f"Ingrese el {opts[search_by]}: ")

                                print("------ RESULTADOS DE LA BÚSQUEDA ------")
                                for c in self.__search_algorithm(query, opts[search_by]):
                                        print(c)
                                print("---------------------------------------")
                                break
                        else:
                                print("Ingrese un parámetro de búsqueda válido")

        def mostrar(self):
                for c in self.playlist:
                        print("------ CANCIÓN ------\n")
                        print(c)
                        print()

        def salir(self):
                exit(0)

        # Retorna las opciones del programa
        def get_options(self):
                return {"1": self.aniadir, "2": self.mostrar, "3": self.buscar, "4": self.salir}


def main():
        playlist:list[Cancion] = [Cancion(r.choice(PELICULAS), r.choice(NOMBRES), r.randint(1,10), r.randint(1, 10)) for n in range(10)]
        prog:Programa = Programa(playlist)

        while True:
                print("------ MENU DE OPCIONES ------\n")
                opt = input("Ingrese una opción:\n1. Añadir canción\n2. Mostrar canciónes\n3. Buscar canción\n4. Salir\n\n>> ")
                parse = prog.get_options()

                if opt in parse:
                        print()
                        parse[opt]()
                else:
                        print("\n\n--- Opción no válida! ---\n\n")

if __name__ == '__main__':
        main()
