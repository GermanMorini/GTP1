import random as r

EMPRESAS:str = ["Eare", "Centidel", "Browsedrive", "Agimba", "Browsetype", "Buzzdog", "Eazzy", "Babbleopia", "Brainsphere", "Feedmix", "Brightdog", "Abatz", "Eamia", "Buzzster", "Avamba", "Feedfire", "Aivee", "Feedspan", "Feedfish", "Devify", "Browsebug", "Blogtag", "Demivee", "Brainlounge", "Feednation", "Eimbee", "Divanoodle", "Bluezoom", "Buzzbean", "Dablist", "Brightbean", "Dynabox", "Fivespan", "Bluejam", "Fanoodle", "Blognation", "Browsezoom", "Bubbletube", "Cogidoo", "Dabtype", "BlogXS", "Cogilith", "Camimbo", "Dynazzy", "Divavu", "Centizu", "Aimbo", "Fatz", "Dynava", "Centimia", "Einti", "Edgeblab", "Demizz", "Buzzshare", "Eidel", "Ainyx", "Babbleblab", "Dabjam", "Eadel", "Blogtags", "Devpoint", "Devshare", "Ailane", "Browsecat", "Edgeclub", "Cogibox", "Eabox", "Fivebridge", "Chatterbridge", "Avavee", "Camido", "Aibox", "Avamm", "Brainverse", "Edgepulse", "Babbleset", "Devbug", "Dabfeed", "Dabvine", "Aimbu", "DabZ", "Flashdog", "Abata", "Browseblab", "Flashpoint", "Edgetag", "Eire", "Avaveo", "Fivechat", "Brainbox", "Divape", "Eayo", "Edgeify", "Fiveclub", "Feedbug", "Devpulse", "Chatterpoint", "Digitube", "Devcast", "Blogspan"]

class Equipo:
        nombre:str
        goles_realizados:int
        goles_recibidos:int

        def __init__(self, nombre:str, greal:int, grec:int):
                self.nombre = nombre
                self.goles_realizados = greal
                self.goles_recibidos = grec
                
        def __repr__(self) -> str:
                return f"Nombre: {self.nombre}\nGoles realizados: {self.goles_realizados}\nGoles recibidos: {self.goles_recibidos}"

def main():
        eq:list[Equipo] = [Equipo(r.choice(EMPRESAS), r.randint(0,6), r.randint(0,6)) for n in range(8)]
        eq_:list[Equipo] = [e for e in eq if e.goles_realizados > e.goles_recibidos]

        for i in range(len(eq_)):
                print(eq_[i])
                print()

if __name__ == '__main__':
        main()
