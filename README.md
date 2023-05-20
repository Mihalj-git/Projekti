# Projekti
Prošli projekti

Opis projekata(nalaze se i u opisu pojedinih fileova):

Tenk:

Program namijenjen za model tenka napravljen pomoću Arduina, senzora, joysticka, servo motora,
lasera i baterija. Tenk se pokreće pomoću DC-motora povezanih pomoću tranzistora na baterije
(bazu tranzistora čini pinovi arduina koji propuštaju struju prilikom pokretanja motora) spojenih na kotače.
Kontrole pokreta su povezane uz joystick na kojem su omogućene funkcije kretanja u svim smjerovima na 2D koordinatnom
sustavu te promjenjivi otpornik koji služi za pomicanje smjera topa. Arduino svoje napajanje dobiva iz prijenosne baterije
na prednjem dijelu tenka.

Auto:

Program namijenjen za model automobila napravljen pomoću Arduina, Ultrazvučnog senzora(HC-SRO4), H mosta(za DC motore),
servo motora i plastičnog modela podloge automobila napravljenog 3D printerom. Auto ima osnovne funkcije izbjegavanja 
frontalnog sudara te algoritam za okretanje unatrag prilikom pronalaska predmeta ispred sebe. Servo motor služi za okretanje
prednjih kotača kako bi se automobil mogao pravilno usmjeriti. Mala prijenosna baterija služi kao izvor napona automobila.

Društvena igra na temelju Rizika:

Program je namijenjen kao dodatak društvenoj igri temeljenoj na Riziku. Omogućava određene događaje i situacije unutar same igre poput 
stvaranja koalicije protiv određenog igrača koji je previše proširio svoj teritorij, dolazak kriznih situacija(opisanih u programu kao "kriza") 
i njihova klasifikacija u određene veličine. Arduino je spojen na nekoliko gumbova i LCD zaslon pomoću kojih igrači unose i primaju podatke od 
algoritma. Sam algoritam funkcionira na temelju vremena i akcija određenih igrača, svaka akcija igrača mijenja trenutno ponašanje algoritma tako da 
ga približava određenim postupcima(npr. napad na drugu državu izaziva porast svjetskih tenzija što smanjuje vrijeme potrebno za dolazak nove "krize").
Određene odluke igrača također mogu pridonijeti nekim događajima poput stvaranja Afričko-Europske Unije kao nove države na karti. Algoritam računa 
određene promjene na kraju poteza a prikazuje ih igračima početkom sljedećeg. Svaki igrač ima svoj potez, a broj igrača se bira na početku runde.

Milijunaš:

Interaktivna igra Milijunaš temeljena na istoimenoj televizijskoj igri. Korištenjem Python-a i njegovih library-ja dizajnirano je grafičko 
sučelje te sam algoritam za igru. Grafičko sučelje je napravljeno na dva načina, korištenjem Turtle te Tkinter bibilioteka.
