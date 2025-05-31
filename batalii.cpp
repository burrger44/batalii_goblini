#include <iostream>
#include <windows.h>

using namespace std;

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    int viata = 100, stamina = 100, raspuns, inamic = 100, lvl = 15 , betime = 0;

    cout << "ai intalint un goblin" << endl;

    while (viata > 0){
        cout << "ce vei face?" << endl;
        cout << "1. ataci" << endl;
        cout << "2. potiune de stamina" << endl;
        cout << "3. potiune de viata" << endl << endl;
        setcolor(5);
        cout << "sabia ta da " << lvl << " damage" << endl;
        setcolor(4);
        cout << "viata = " << viata << "   ";
        setcolor(1);
        cout << "stamina = " << stamina << endl << endl;

        setcolor(2);

        cout << "      _______      " << endl;
        cout << "     / /\\ /\\ \\     " << endl;
        cout << "    |   x  x  |     " << endl;
        cout << "    |    ^    |     " << endl;
        cout << "     \\  ---  /     " << endl;
        cout << "      \\_____/      " << endl;
        cout << "      /|||||\\      " << endl;
        cout << "     /       \\     " << endl;

        cout << "viat goblinului = " << inamic << endl; 

        setcolor(15);

        if(stamina < 25){
            cout << "nu poti ataca. esti prea obosit" << endl;
        }


        cin >> raspuns;

        if(stamina >= 25){
            if(raspuns == 1){
                cout << "HAAAIIIA" << endl;
                inamic = inamic - lvl;
                stamina = stamina - 15;
                if(inamic < 1){
                    cout << "BRAVO!!! l-ai invins. acum sabia ta e mai puternica din cauza exp-ului acumulat";
                    Sleep(10000);
                    system("cls");
                    viata = 100;
                    stamina = 100;
                    lvl = lvl + 5;
                    betime = 0;
                    inamic = 100;
                    cout << "ai intalint un alt goblin" << endl;
                }
            }
        }
        else{
            if(raspuns == 1){
                cout << "ti-am spus deja ca nu poti ataca. pentru ca nu asculti tura asta e pierduta" << endl;
            }
        }
        if(raspuns == 2){
            cout << "glg, glg, glg" << endl;
            stamina = stamina + 75;
            betime++;
        }
        else if(raspuns == 3){
            cout << "glg, glg, glg" << endl;
            viata = viata + 50;
            betime++;
        }

        if(betime >= 10){
            cout << "te-ai imbatat" << endl;
            cout << "ai lesinat si ai murit" << endl;
            cout << "am uitat sa iti zic ca nu e bine sa bei prea multe potiuni" << endl;
            cout << "doar ca sa stii, 9 bauturi pe batalie. daca bei 10 sau mai mult, stii ce se intampla";
            Sleep(15000);
            system("cls");
            break;
        }
        else{
            cout << endl << endl << "acum e runda inamicului" << endl;
            cout << "inamicul ataca" << endl;
            cout << "bleaaaagggh" << endl;
            viata = viata - 25; 
        }
    }

    cout << "ai murit" << endl << "ai omorat: "  << (lvl - 15) / 5 << " goblini" << endl;

    Sleep(2000);
    if( (lvl - 15) / 5 <= 5){
        cout << "ai ajuns in rai. nu ai vrut sa ii omori cu adevarat. doar voiai sa te aperi";
    }
    else{
        cout << "ai ajuns sa te transformi tu intr-un goblin. IESTI UN MONSTRU FARA INIMA CARE OMOARA PE ORCINE VEDE IN FATA!!!";
    }
}
