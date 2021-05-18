# 2021_Podmornice

IGRA POTAPANJA PODMORNICA!

Jednostavna igra potapanja podmornica napravljena uz pomoć C++-a i Qt Creator-a.

Pravila igre :
![dad0e5ca-0f5c-44b3-9700-7b92eb4ca119](https://user-images.githubusercontent.com/72262620/118695174-2df44180-b80d-11eb-88e8-bb675eb85a94.jpeg)

Na klik dugmeta "Započni" igra počinje. Imate 60 pokusaja da probate da potopite pet podmornica. Svaka podmornica je različite dužine.
Pobedio je onaj koji je uspeo da potopi sve podmornice za manje od 60 pokušaja. Ukoliko polje zacrveni, to je promašaj, a ukoliko se oboji
u neku nijansu plave, pogodjen je neki deo podmornice. Podmornice različitih dužina su različito obojene.
Kada pogodite podmornicu, biće vam čekirano polje ispod table na kom će pisati koja je podmornica pogodjena, i takodje će biti ispisano na ekranu.





Instalacija:
  Potrebno je instalirati qmake, qt i g++ kompajler. U prilogu su instalije za Linux(ukucati u terminalu sledece linije):
    g++ :  sudo apt-get install g++ 
    
    qmake : sudo apt-get update -y
            sudo apt-get install -y qt5-qmake
            
    qt : sudo apt-get install qt5-default
    
    
   Kako pokrenuti igru : 
   
   Potrebno je skinuti repozitorijum i ući u terminalu do krajnjeg foldera gde se nalaze samo fajlovi
   (npr na mom sistemu to izgleda ovako : Desktop/projekat/2021_Podmornice/podmorniceGUI_Novo/PodmorniceGUI/).
   Kada se udje u ovaj poslednji direktorijum i ukuca ls, trebalo bi da se vidi fajl PodmorniceGUI.pro.
   Potrebno je ukucati sledeću liniju u terminalu: qmake PodmorniceGUI.pro
   
   Ovo će izenerisati Makefile u tekućem
   direktorijumu. Uz pomoć komande make će se generisati izvršni fajl PodmorniceGUI, koji je potrebno pokrenuti komandom ./PodmorniceGUI
   Ovo će pokrenuti igru. Srećno :)!
  






