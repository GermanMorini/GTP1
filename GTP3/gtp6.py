import random as r

NOMBRES:str = ["Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"]
EMPRESAS:str = ["Eare", "Centidel", "Browsedrive", "Agimba", "Browsetype", "Buzzdog", "Eazzy", "Babbleopia", "Brainsphere", "Feedmix", "Brightdog", "Abatz", "Eamia", "Buzzster", "Avamba", "Feedfire", "Aivee", "Feedspan", "Feedfish", "Devify", "Browsebug", "Blogtag", "Demivee", "Brainlounge", "Feednation", "Eimbee", "Divanoodle", "Bluezoom", "Buzzbean", "Dablist", "Brightbean", "Dynabox", "Fivespan", "Bluejam", "Fanoodle", "Blognation", "Browsezoom", "Bubbletube", "Cogidoo", "Dabtype", "BlogXS", "Cogilith", "Camimbo", "Dynazzy", "Divavu", "Centizu", "Aimbo", "Fatz", "Dynava", "Centimia", "Einti", "Edgeblab", "Demizz", "Buzzshare", "Eidel", "Ainyx", "Babbleblab", "Dabjam", "Eadel", "Blogtags", "Devpoint", "Devshare", "Ailane", "Browsecat", "Edgeclub", "Cogibox", "Eabox", "Fivebridge", "Chatterbridge", "Avavee", "Camido", "Aibox", "Avamm", "Brainverse", "Edgepulse", "Babbleset", "Devbug", "Dabfeed", "Dabvine", "Aimbu", "DabZ", "Flashdog", "Abata", "Browseblab", "Flashpoint", "Edgetag", "Eire", "Avaveo", "Fivechat", "Brainbox", "Divape", "Eayo", "Edgeify", "Fiveclub", "Feedbug", "Devpulse", "Chatterpoint", "Digitube", "Devcast", "Blogspan"]
PAISES:str = ["South Korea", "Yemen", "Slovenia", "Georgia", "Mongolia", "Ireland", "Luxembourg", "Peru", "Australia", "Bonaire, Saint Eustatius and Saba ", "Iran", "Poland", "Bulgaria", "Tunisia", "Nepal", "Haiti", "Dominican Republic", "Bangladesh", "Somalia", "Montenegro", "Afghanistan", "Kosovo", "Finland", "Senegal", "Nigeria", "Uzbekistan", "Morocco", "United Kingdom", "Guyana", "Cuba", "Venezuela", "Armenia", "Democratic Republic of the Congo", "Micronesia", "Sri Lanka", "Madagascar", "Eritrea", "France", "Czech Republic", "Indonesia", "Palestinian Territory", "Iraq", "Bolivia", "Mexico", "Mali", "French Polynesia", "Vietnam", "Argentina", "Estonia", "Angola", "Egypt", "Serbia", "Denmark", "Uganda", "Botswana", "Cameroon", "Colombia", "Malta", "Malaysia", "Pakistan", "Moldova", "Germany", "Libya", "Croatia", "Swaziland", "Ukraine", "Namibia", "Gambia", "Uruguay", "Belarus", "Ivory Coast", "Portugal", "Macedonia", "Norway", "Brazil", "Tanzania", "Philippines", "Barbados", "Niger", "Greece", "Kuwait", "New Zealand", "El Salvador", "Thailand", "Ethiopia", "Cambodia", "Hungary", "East Timor", "Lesotho", "Costa Rica", "Israel", "Kenya", "Jordan", "Honduras", "China", "Guinea", "Tajikistan", "Russia", "Kyrgyzstan", "Kazakhstan"]

class Direccion:
        calle:str
        numero:int
        localidad:str

        def __init__(self, calle:str, numero:int, localidad:str):
                self.calle = calle
                self.numero = numero
                self.localidad = localidad
                
        def __repr__(self) -> str:
                return f"\tCalle: {self.calle}\n\tNúmero: {self.numero}\n\tLocalidad: {self.localidad}\n"

class Empleado:
        nombre:str
        direccion:Direccion
        edad:int
        sexo:str

        def __init__(self, nombre:str, direccion:Direccion, edad:int, sexo:str):
                self.nombre = nombre
                self.direccion = direccion
                self.edad = edad
                self.sexo = sexo
                
        def __repr__(self) -> str:
                return f"Nombre: {self.nombre}\nDirección:\n{self.direccion}Edad: {self.edad}\nSexo: {self.sexo}\n"

def main():
        empl = [Empleado(r.choice(NOMBRES), Direccion(r.choice(PAISES), r.randint(0,2000), r.choice(EMPRESAS)), r.randint(18, 30), r.choice(['H','M'])) for n in range(10)]

        

if __name__ == '__main__':
        main()
