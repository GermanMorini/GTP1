#include<iostream>
#include<string.h>

using namespace std;

//--------------------------------------------------------------------
#include<time.h>

void plantar_semilla() __attribute__((constructor)); 
void plantar_semilla() {srand(time(NULL));}

// Bases de datos
string NOMBRES[100] = {"Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"};
string EMPRESAS[100] = {"Eare", "Centidel", "Browsedrive", "Agimba", "Browsetype", "Buzzdog", "Eazzy", "Babbleopia", "Brainsphere", "Feedmix", "Brightdog", "Abatz", "Eamia", "Buzzster", "Avamba", "Feedfire", "Aivee", "Feedspan", "Feedfish", "Devify", "Browsebug", "Blogtag", "Demivee", "Brainlounge", "Feednation", "Eimbee", "Divanoodle", "Bluezoom", "Buzzbean", "Dablist", "Brightbean", "Dynabox", "Fivespan", "Bluejam", "Fanoodle", "Blognation", "Browsezoom", "Bubbletube", "Cogidoo", "Dabtype", "BlogXS", "Cogilith", "Camimbo", "Dynazzy", "Divavu", "Centizu", "Aimbo", "Fatz", "Dynava", "Centimia", "Einti", "Edgeblab", "Demizz", "Buzzshare", "Eidel", "Ainyx", "Babbleblab", "Dabjam", "Eadel", "Blogtags", "Devpoint", "Devshare", "Ailane", "Browsecat", "Edgeclub", "Cogibox", "Eabox", "Fivebridge", "Chatterbridge", "Avavee", "Camido", "Aibox", "Avamm", "Brainverse", "Edgepulse", "Babbleset", "Devbug", "Dabfeed", "Dabvine", "Aimbu", "DabZ", "Flashdog", "Abata", "Browseblab", "Flashpoint", "Edgetag", "Eire", "Avaveo", "Fivechat", "Brainbox", "Divape", "Eayo", "Edgeify", "Fiveclub", "Feedbug", "Devpulse", "Chatterpoint", "Digitube", "Devcast", "Avellaneda"};
string PAISES[100] = {"South Korea", "Yemen", "Slovenia", "Georgia", "Mongolia", "Ireland", "Luxembourg", "Peru", "Australia", "Bonaire, Saint Eustatius and Saba ", "Iran", "Poland", "Bulgaria", "Tunisia", "Nepal", "Haiti", "Dominican Republic", "Bangladesh", "Somalia", "Montenegro", "Afghanistan", "Kosovo", "Finland", "Senegal", "Nigeria", "Uzbekistan", "Morocco", "United Kingdom", "Guyana", "Cuba", "Venezuela", "Armenia", "Democratic Republic of the Congo", "Micronesia", "Sri Lanka", "Madagascar", "Eritrea", "France", "Czech Republic", "Indonesia", "Palestinian Territory", "Iraq", "Bolivia", "Mexico", "Mali", "French Polynesia", "Vietnam", "Argentina", "Estonia", "Angola", "Egypt", "Serbia", "Denmark", "Uganda", "Botswana", "Cameroon", "Colombia", "Malta", "Malaysia", "Pakistan", "Moldova", "Germany", "Libya", "Croatia", "Swaziland", "Ukraine", "Namibia", "Gambia", "Uruguay", "Belarus", "Ivory Coast", "Portugal", "Macedonia", "Norway", "Brazil", "Tanzania", "Philippines", "Barbados", "Niger", "Greece", "Kuwait", "New Zealand", "El Salvador", "Thailand", "Ethiopia", "Cambodia", "Hungary", "East Timor", "Lesotho", "Costa Rica", "Israel", "Kenya", "Jordan", "Honduras", "China", "Guinea", "Tajikistan", "Russia", "Kyrgyzstan", "Kazakhstan"};
string EMAILS[100] = {"hmacgoun64@storify.com", "swinterburn2j@businessweek.com", "cmctaggart5@yandex.ru", "dcornnerg2@un.org", "ssteadman2x@vkontakte.ru", "plempertzg9@globo.com", "pparmintero0@about.com", "wpashenkovqi@google.de", "glaymanjo@hatena.ne.jp", "ayakovliv8o@stanford.edu", "tdenajerak0@ibm.com", "edunbabin31@virginia.edu", "gambroixo7@cbslocal.com", "mliffe8a@marriott.com", "bvaughanan@gnu.org", "ccammock47@mayoclinic.com", "wcampaignejz@economist.com", "fbrandom4k@a8.net", "gcarletonip@nyu.edu", "gtourvillem8@japanpost.jp", "mpeticanb7@wired.com", "cucceli81@mysql.com", "wrossitere2@symantec.com", "tcaddanf0@seesaa.net", "bsabattierge@mediafire.com", "bfranciotti7v@slate.com", "iconfaitk6@soup.io", "scatherallfp@hp.com", "efolk5c@springer.com", "santonnikovab@amazonaws.com", "btaftqj@privacy.gov.au", "bsterteq8@pbs.org", "jgreystockfq@baidu.com", "csedger7z@amazon.com", "dwillmoreeh@mayoclinic.com", "amckellochnu@wiley.com", "tedinboroi3@prnewswire.com", "adauntera8@cnet.com", "cmolinesoa@prlog.org", "jwilcocks5e@nydailynews.com", "cthurstaner@chron.com", "jhatwellcl@bluehost.com", "wmacleese5p@bandcamp.com", "abonning@ustream.tv", "gpittam7e@zimbio.com", "btallentcf@redcross.org", "mfolshomb@imgur.com", "djanaudqa@cyberchimps.com", "gfoxenis@berkeley.edu", "rhart2q@imgur.com", "tjeannel2u@archive.org", "khofleri2@fotki.com", "bjirasdl@bizjournals.com", "wproshky@over-blog.com", "apooly3o@un.org", "vborgbartolo1j@gravatar.com", "cmattholie44@salon.com", "gpetraslm@msn.com", "nandriessen8@symantec.com", "earthurs4l@diigo.com", "creyburn9l@cnn.com", "gmaccreepb@netscape.com", "bgemelli20@tripod.com", "usuffield55@accuweather.com", "aboggisnw@nih.gov", "esketcher3d@washington.edu", "hphythien52@istockphoto.com", "cshermaniv@google.com.au", "fwordsworthi8@senate.gov", "alammengaon@yolasite.com", "jmolerm@washingtonpost.com", "cpoehz@tamu.edu", "elakin5d@sohu.com", "bmungan7@sitemeter.com", "uduberry8z@timesonline.co.uk", "qtaye5i@de.vu", "aelliotb8@sun.com", "jtennynl@github.io", "kandrivel9@seesaa.net", "mshackladyic@uol.com.br", "bsantellobt@cisco.com", "welmar3e@pen.io", "alaborda6n@com.com", "amcgranebu@wikispaces.com", "lfaldoqg@posterous.com", "aandreuhj@un.org", "flearmountbr@ucoz.com", "rlarchierea@pbs.org", "cfrankemab3@youtu.be", "rburmandw@flickr.com", "tphillcockpw@gravatar.com", "wtighe7p@creativecommons.org", "wcaulketgo@theguardian.com", "bkalberer2o@moonfruit.com", "coveyg3@vkontakte.ru", "npoutressm1@qq.com", "aaartsen4q@studiopress.com", "sadamecrr@storify.com", "elegendregr@state.gov", "enehlgf@kickstarter.com"};
string FECHAS[100] = {"17/06/1996", "26/07/1987", "28/02/1984", "04/12/1990", "15/08/1985", "15/03/1996", "30/07/1992", "21/07/1982", "28/06/1987", "13/05/1986", "24/08/1991", "11/09/1981", "24/04/1992", "01/08/1991", "19/07/1989", "02/02/1985", "16/07/1984", "29/10/1988", "05/09/1982", "27/10/1987", "22/03/1994", "07/05/1986", "02/12/1983", "01/05/1990", "21/07/1990", "11/04/1983", "16/08/1988", "25/05/1981", "19/04/1983", "08/03/1988", "28/09/1990", "02/03/1994", "14/01/1982", "02/02/1995", "02/02/1986", "12/12/1987", "15/03/1992", "12/01/1995", "15/03/1985", "08/07/1994", "28/07/1992", "23/11/1990", "19/01/1988", "13/04/1989", "30/06/1985", "25/02/1985", "05/03/1988", "12/12/1995", "14/03/1991", "09/03/1982", "15/11/1989", "01/01/1990", "06/11/1993", "06/09/1995", "09/09/1984", "02/11/1985", "02/09/1984", "25/07/1986", "25/11/1990", "03/12/1984", "28/02/1989", "14/02/1985", "31/03/1981", "31/12/1991", "30/05/1989", "11/08/1994", "11/08/1994", "23/08/1985", "16/01/1988", "16/11/1993", "23/08/1988", "21/01/1992", "07/02/1987", "09/08/1991", "19/01/1981", "08/04/1989", "30/09/1983", "15/03/1982", "04/08/1993", "26/10/1984", "18/05/1995", "06/02/1982", "15/04/1983", "25/10/1987", "02/05/1992", "24/03/1986", "21/01/1987", "12/10/1984", "04/02/1994", "05/06/1987", "06/03/1983", "23/05/1996", "28/08/1993", "24/05/1993", "04/09/1988", "05/06/1992", "19/11/1985", "18/06/1987", "01/11/1991", "06/12/1984"};
string PELICULAS[100] = {"Big Hero 6", "That Thing You Do!", "Flamingo Road", "Perfect Human, The (Perfekte Menneske, Det)", "Living in Emergency: Stories of Doctors Without Borders", "Man on Fire", "Battleground", "Haunted Mansion, The", "Bill Burr: Let It Go", "Marwencol", "Shiver of the Vampires, The (Frisson des vampires, Le)", "Charlie Chan at Monte Carlo", "Vera Cruz", "Highway Racer", "Mothman Prophecies, The", "Final Darkness, The (Buio Omega)", "Fright Night", "How to Meet Girls from a Distance", "Phantom, The", "Few Good Men, A", "Panda! Go Panda! Rainy Day Circus", "Pocahontas II: Journey to a New World ", "Trilogy: The Weeping Meadow (Trilogia: To livadi pou dakryzei)", "Guess Who's Coming to Dinner", "Scar", "Tyler Perry's Diary of a Mad Black Woman", "Cambridge Spies", "Ace of Aces (a.k.a. Super Ace, The) (As des as, L')", "Resident Evil: Damnation", "Cold Prey III (Fritt Vilt III)", "Missionary Man", "Last House on the Left, The", "That Hamilton Woman", "Goebbels Experiment, The (Das Goebbels Experiment)", "Red Psalm (Még kér a nép)", "Manhattan Project, The", "Three Strangers", "Cesar & Rosalie (César et Rosalie)", "Signal, The (Señal, La)", "Five-Year Engagement, The", "Killer Inside Me, The", "Querelle", "Shocker", "Lover Come Back", "Occupants, The", "Dersu Uzala", "Mummy's Hand, The", "Worth Winning", "The Bone Snatcher", "Flight of the Navigator", "Strip-tease", "Millhaven", "Journey to Italy (Viaggio in Italia) (Voyage to Italy) (Voyage in Italy)", "Honky Tonk Freeway", "In Her Shoes", "Looney Tunes: Back in Action", "Fantastic Four: Rise of the Silver Surfer", "Dirt Bike Kid, The", "Too Early, Too Late (Trop tôt, trop tard)", "Passion Play", "Camila", "Petulia", "Beyond the Fear", "Bigger Than Life", "Besa (Solemn Promise)", "Yi Yi", "Shopworn Angel, The", "Wankers, The (Les branleuses)", "Glass Menagerie, The", "Paper Man", "Dark Half, The", "Last of the Mohicans, The", "Mountain Men, The", "Petting Zoo", "Ingeborg Holm", "Between Miracles", "Emperor", "Fans", "Black and White in Color (Noirs et blancs en couleur)", "Mr. Smith Goes to Washington", "Sherlock Holmes and the Voice of Terror", "Devdas", "Squaw Man, The", "Live and Become (Va, vis et deviens)", "Wolves", "Shadows and Fog", "Great Beauty, The (Grande Bellezza, La)", "Meet Me at the Fair", "Return of the Fly", "My Gun is Quick", "Don't Go In the Woods", "Short Eyes", "The Hire: Chosen", "Addams Family Values", "Riot on Sunset Strip", "Meatballs 4", "Once Upon a Time in Mexico", "The Second Best Exotic Marigold Hotel", "After the Life", "Bloodline"};
string TRABAJOS[100] = {"Programmer IV", "Design Engineer", "Web Developer IV", "Health Coach II", "Graphic Designer", "Payment Adjustment Coordinator", "Developer I", "Registered Nurse", "Programmer III", "Assistant Media Planner", "Senior Developer", "Biostatistician IV", "Technical Writer", "Engineer I", "Research Assistant II", "Desktop Support Technician", "Office Assistant IV", "Actuary", "Civil Engineer", "Speech Pathologist", "Administrative Assistant I", "Quality Control Specialist", "Product Engineer", "Automation Specialist III", "Media Manager I", "Associate Professor", "Analog Circuit Design manager", "Senior Sales Associate", "Social Worker", "Physical Therapy Assistant", "Account Representative I", "Web Designer I", "Recruiter", "Staff Accountant II", "Biostatistician I", "Statistician II", "Human Resources Assistant III", "Account Representative III", "Nuclear Power Engineer", "VP Product Management", "Safety Technician I", "Developer IV", "Senior Editor", "Human Resources Assistant I", "Dental Hygienist", "Legal Assistant", "Office Assistant II", "Account Coordinator", "Chief Design Engineer", "Automation Specialist I", "Recruiting Manager", "Community Outreach Specialist", "Health Coach I", "Geologist IV", "Statistician I", "Information Systems Manager", "Human Resources Assistant II", "Staff Accountant III", "Media Manager IV", "Executive Secretary", "VP Quality Control", "Environmental Tech", "Accounting Assistant I", "Computer Systems Analyst III", "Biostatistician II", "Accountant IV", "Senior Quality Engineer", "Structural Engineer", "Financial Analyst", "Research Assistant I", "Administrative Officer", "Compensation Analyst", "Health Coach IV", "Accountant II", "Accountant III", "Software Engineer IV", "Programmer Analyst I", "Financial Advisor", "Account Representative IV", "Internal Auditor", "Clinical Specialist", "Software Test Engineer IV", "Pharmacist", "Staff Scientist", "Assistant Professor", "Statistician IV", "Staff Accountant I", "Sales Representative", "Tax Accountant", "Web Developer III", "Marketing Manager", "Sales Associate", "Media Manager III", "Systems Administrator I", "Automation Specialist IV", "Human Resources Assistant IV", "Engineer II", "Software Engineer III", "Budget/Accounting Analyst III", "VP Accounting"};
// int PRIMOS[100] = {"2", "3", "5", "7", "11", "13", "17", "19", "23", "29", "31", "37", "41", "43", "47", "53", "59", "61", "67", "71", "73", "79", "83", "89", "97", "101", "103", "107", "109", "113", "127", "131", "137", "139", "149", "151", "157", "163", "167", "173", "179", "181", "191", "193", "197", "199", "211", "223", "227", "229", "233", "239", "241", "251", "257", "263", "269", "271", "277", "281", "283", "293", "307", "311", "313", "317", "331", "337", "347", "349", "353", "359", "367", "373", "379", "383", "389", "397", "401", "409", "419", "421", "431", "433", "439", "443", "449", "457", "461", "463", "467", "479", "487", "491", "499", "503", "509", "521", "523", "541"};

// Elige un valor random de las bases de datos, pero puede ser cualquier otro arreglo
void aleatorio(char nombre[], string base_de_datos[]) {
        int random_index = rand()%100;
        strcpy(nombre, base_de_datos[random_index].c_str());
}

//--------------------------------------------------------------------

int main() {
        struct Direccion {
                char calle[20];
                int numero;
                char localidad[20];
        };

        struct Empleado {
                char nombre[20];
                Direccion direccion;
                int edad;
                char sexo;
        };

        Empleado emp[10], menores[10], avell[10], aux;
        char sex[2] = {'H', 'M'};
        int cont_1 = 0, cont_2 = 0;
        bool b = 0;

        for (int i = 0; i < 10; i++) {
                cout << "------ EMPLEADO " << i+1 << " ------" << endl << endl;

                // cin.ignore();
                // cout << "Ingrese el nombre del empleado: ";
                // cin.getline(emp[i].nombre, 20, '\n');
                aleatorio(emp[i].nombre, NOMBRES);

                // cin.ignore();
                // cout << "Ingrese la calle: ";
                // cin.getline(emp[i].direccion.calle, 20, '\n');
                aleatorio(emp[i].direccion.calle, PAISES);
                
                // cout << "Ingrese el número: ";
                // cin >> emp[i].direccion.calle;
                emp[i].direccion.numero = 100 * rand()%10;

                // cin.ignore();
                // cout << "Ingrese la localidad: ";
                // cin.getline(emp[i].direccion.localidad, 20, '\n');
                aleatorio(emp[i].direccion.localidad, EMPRESAS);

                // cout << "Ingrese la edad: ";
                // cin >> emp[i].edad;
                emp[i].edad = 18 + rand()%40;

                // cout << "Ingrese el sexo: ";
                // cin >> emp.sexo;
                emp[i].sexo = sex[rand()%2];

                if(emp[i].edad < 25) {
                        menores[cont_1] = emp[i];
                        cont_1++;
                }

                if(!strcmp(emp[i].direccion.localidad, "Avellaneda")) {
                        avell[cont_2] = emp[i];
                        cont_2++;
                }
        }
        
        for (int i = 0; i < cont_1; i++) {
                cout << "Nombre del menor: " << menores[i].nombre << " : " << menores[i].edad << endl;
        }

        cout << endl;

        for (int i = 0; i < cont_2; i++) {
                cout << "Avell: " << avell[i].nombre << " : " << avell[i].direccion.localidad << endl;
        }
        
        cout << endl;

        while(!b) {
                b = 1;

                for(int i = 0; i < 9; i++) {
                        if(emp[i].nombre[0] > emp[i+1].nombre[0]) {
                                aux = emp[i];
                                emp[i] = emp[i+1];
                                emp[i+1] = aux;
                                b = 0;
                        }
                }
        }

        for (int i = 0; i < 10; i++) {
                cout << "Nombre: " << emp[i].nombre << " : " << emp[i].edad << " : " << emp[i].direccion.localidad << endl;
        }

        return 0;
}
