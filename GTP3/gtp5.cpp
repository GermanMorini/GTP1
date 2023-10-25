#include<iostream>

using namespace std;

//--------------------------------------------------------------------
#include<time.h>
#include<string.h>

// Bases de datos
string NOMBRES[100] = {"Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"};
string PELICULAS[100] = {"Big Hero 6", "That Thing You Do!", "Flamingo Road", "Perfect Human, The (Perfekte Menneske, Det)", "Living in Emergency: Stories of Doctors Without Borders", "Man on Fire", "Battleground", "Haunted Mansion, The", "Bill Burr: Let It Go", "Marwencol", "Shiver of the Vampires, The (Frisson des vampires, Le)", "Charlie Chan at Monte Carlo", "Vera Cruz", "Highway Racer", "Mothman Prophecies, The", "Final Darkness, The (Buio Omega)", "Fright Night", "How to Meet Girls from a Distance", "Phantom, The", "Few Good Men, A", "Panda! Go Panda! Rainy Day Circus", "Pocahontas II: Journey to a New World ", "Trilogy: The Weeping Meadow (Trilogia: To livadi pou dakryzei)", "Guess Who's Coming to Dinner", "Scar", "Tyler Perry's Diary of a Mad Black Woman", "Cambridge Spies", "Ace of Aces (a.k.a. Super Ace, The) (As des as, L')", "Resident Evil: Damnation", "Cold Prey III (Fritt Vilt III)", "Missionary Man", "Last House on the Left, The", "That Hamilton Woman", "Goebbels Experiment, The (Das Goebbels Experiment)", "Red Psalm (Még kér a nép)", "Manhattan Project, The", "Three Strangers", "Cesar & Rosalie (César et Rosalie)", "Signal, The (Señal, La)", "Five-Year Engagement, The", "Killer Inside Me, The", "Querelle", "Shocker", "Lover Come Back", "Occupants, The", "Dersu Uzala", "Mummy's Hand, The", "Worth Winning", "The Bone Snatcher", "Flight of the Navigator", "Strip-tease", "Millhaven", "Journey to Italy (Viaggio in Italia) (Voyage to Italy) (Voyage in Italy)", "Honky Tonk Freeway", "In Her Shoes", "Looney Tunes: Back in Action", "Fantastic Four: Rise of the Silver Surfer", "Dirt Bike Kid, The", "Too Early, Too Late (Trop tôt, trop tard)", "Passion Play", "Camila", "Petulia", "Beyond the Fear", "Bigger Than Life", "Besa (Solemn Promise)", "Yi Yi", "Shopworn Angel, The", "Wankers, The (Les branleuses)", "Glass Menagerie, The", "Paper Man", "Dark Half, The", "Last of the Mohicans, The", "Mountain Men, The", "Petting Zoo", "Ingeborg Holm", "Between Miracles", "Emperor", "Fans", "Black and White in Color (Noirs et blancs en couleur)", "Mr. Smith Goes to Washington", "Sherlock Holmes and the Voice of Terror", "Devdas", "Squaw Man, The", "Live and Become (Va, vis et deviens)", "Wolves", "Shadows and Fog", "Great Beauty, The (Grande Bellezza, La)", "Meet Me at the Fair", "Return of the Fly", "My Gun is Quick", "Don't Go In the Woods", "Short Eyes", "The Hire: Chosen", "Addams Family Values", "Riot on Sunset Strip", "Meatballs 4", "Once Upon a Time in Mexico", "The Second Best Exotic Marigold Hotel", "After the Life", "Bloodline"};

// Elige un valor random de las bases de datos, pero puede ser cualquier otro arreglo
void aleatorio(char nombre[], string base_de_datos[]) {
        int random_index = rand()%100;
        strcpy(nombre, base_de_datos[random_index].c_str());
}

//--------------------------------------------------------------------

struct Cancion {
        char artista[20], titulo[40];
        int duracion, tamano;
};

void generar_canciones(Cancion playlist[]) {
        for (int i = 0; i < 50; i++) {
                aleatorio(playlist[i].artista, NOMBRES);
                aleatorio(playlist[i].titulo, PELICULAS);
                playlist[i].duracion = 1 + rand()%19;
                playlist[i].tamano = 100 + rand()%400;
        }
}

void anadir(Cancion playlist[], int &largo) {
        Cancion can;

        cout << "Ingrese el título: ";
        cin.ignore();
        cin.getline(can.titulo, 40, '\n');
        
        cout << "Ingrese el nombre del artista: ";
        cin.ignore();
        cin.getline(can.artista, 20, '\n');
        
        cout << "Ingrese la duración: ";
        cin >> can.duracion;
        
        cout << "Ingrese el tamaño: ";
        cin >> can.tamano;

        playlist[largo] = can;
        largo++;
}

void mostrar(Cancion playlist[], int largo) {
        for (int i = 0; i < largo; i++) {
                cout << endl << "------ CANCIÓN " << i+1 << " ------" << endl << endl;
                cout << "Título: " << playlist[i].titulo << endl;
                cout << "Artista: " << playlist[i].artista << endl;
                cout << "Duración: " << playlist[i].duracion << endl;
                cout << "Tanaño: " << playlist[i].tamano << endl;
        }
}

void buscar(Cancion playlist[], int largo) {
        char busqueda[20];
        Cancion resultados[100];
        int tipo_busqueda = -1, contador = 0;

        while(tipo_busqueda != 1 and tipo_busqueda != 2) {
                cout << "¿Por qué parámetro desea buscar? (1: título, 2: artista):" << endl << endl << "> ";
                cin >> tipo_busqueda;
                cout << endl;
        }

        switch (tipo_busqueda) {
                case 1:
                        cout << "Ingrese el título: ";
                        cin.ignore();
                        cin.getline(busqueda, 20, '\n');
                        
                        for (int i = 0; i < largo; i++) {
                                if(strstr(playlist[i].titulo, busqueda) != NULL) {
                                        resultados[contador] = playlist[i];
                                        contador++;
                                }
                        }
                        break;
                case 2:
                        cout << "Ingrese el nombre del artista: ";
                        cin.ignore();
                        cin.getline(busqueda, 20, '\n');
                        
                        for (int i = 0; i < largo; i++) {
                                if(strstr(playlist[i].artista, busqueda) != NULL) {
                                        resultados[contador] = playlist[i];
                                        contador++;
                                }
                        }
                        break;
        }

        mostrar(resultados, contador);
}

int main() {
        srand(time(NULL));

        Cancion playlist[100];
        int opt, largo = 10;
        bool salir = 0;

        generar_canciones(playlist);

        while(not salir) {
                cout << "Ingrese una opción: " << endl;
                cout << "1. Añadir nueva canción" << endl;
                cout << "2. Mostrar canciones" << endl;
                cout << "3. Buscar canción" << endl;
                cout << "4. Salir" << endl << endl << "> ";

                cin >> opt;

                switch(opt) {
                        case 1:
                                anadir(playlist, largo);
                                cout << "-----------------------" << endl << endl;
                                break;
                        case 2:
                                mostrar(playlist, largo);
                                cout << "-----------------------" << endl << endl;
                                break;
                        case 3:
                                buscar(playlist, largo);
                                cout << "-----------------------" << endl << endl;
                                break;
                        case 4:
                                cout << "Saliendo..." << endl << endl;
                                salir = 1;
                                break;
                        default:
                                cout << opt << " no es una opción válida!" << endl << endl;
                }
        }

        return 0;
}
