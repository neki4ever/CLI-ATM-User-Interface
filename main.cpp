#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream> 

using namespace std;

bool verificaLogare(string inputUser, string inputPass) {
    ifstream fisier("users.txt"); // Deschidem fisierul pentru citire
    string u, p;

    // Verificam daca fisierul exista
    if (!fisier.is_open()) {
        system("cls");
        cout << "EROARE CRITICA: Fisierul 'users.txt' nu a fost gasit!" << endl;
        system("pause");
        return false;
    }

    while (fisier >> u >> p) {
        if (u == inputUser && p == inputPass) {
            return true; // Am gasit potrivire
        }
    }

    return false; 
}

int main(){

    system("color 06");
    string userNameInput, passInput;
    float balanta = 0.00;
    int loginChoice, mainChoice;
    bool logat = false;


        string meniuLogin = R"(
         ____________________________
        |  ________________________  |
        | |------------------------| |
        | |                        | |
        | |                        | |
        | |      1. LOG IN         | | 
        | |      2. IESIRE         | | 
        | |                        | | 
        | |                        | |
        | |                        | |
        | |________________________| |
        |____________________________|
        
        
        )";


        string meniuMain = R"(
         ____________________________
        |  ________________________  |
        | |--------FakeBank--------| |
        | |                        | |
        | | 1. Verifica balanta    | |
        | | 2. Depozit             | | 
        | | 3. Retragere           | | 
        | | 4. Istoric             | | 
        | |                        | |
        | |       IESIRE(5)        | |
        | |________________________| |
        |____________________________|
        
        
        )";



    while(!logat){

        cout << meniuLogin << endl;
        cout << endl;
        cout << "Alege o optiune(1-2): ";
        if (!(cin >> loginChoice)) { 
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            loginChoice = 0; 
        }
        system("cls");

        switch(loginChoice) {
            case 1:
                system("cls");

                cout << "\n\n";
                cout << "      ==========================" << endl;
                cout << "           INTRODU USER/PAROLA" << endl;
                cout << "      ==========================" << endl;

                cout << "Username: ";
                cin >> userNameInput;
                cout << endl;

                cout << "Parola: ";
                cin >> passInput;

                if(verificaLogare(userNameInput, passInput)){
                    logat = true;
                } else {
                    cout << "\n\n      USER SAU PAROLA GRESITA!\n";
                    system("pause > nul");
                }

                system("cls");
                break;
            case 2:
                return 0;
                break;
            default:
                cout << "Eroare: Input Invalid!";
                cout << endl;
                break;
            }

    }

    while(logat){
        cout << meniuMain << endl;
        cout << endl;
        cout << "Alege o optiune: ";
        cin >> mainChoice;
        system("cls");

        switch(mainChoice){
            case 1:
                cout << R"(
 _____________________________
|  _________________________  |
| |-------------------------| |
| |                         | |
| |    BALANTA CURENTA:     | |)"; 

cout << endl << "| |         $";
                
cout << fixed << setprecision(2) << left << setw(15) << balanta;
              
cout << "| |" << endl;
       
 cout << R"(| |                         | |
| |                         | |
| |_________________________| |
|_____________________________|
)" << endl;

            cout << "Apasa orice tasta pentru a continua...";
                system("pause > nul");
                system("cls");
                
           break;

           case 2:
                system("cls");
                cout << "\n\n";
                cout << "      ==========================" << endl;
                cout << "           MOD DEPOZITARE" << endl;
                cout << "      ==========================" << endl;
                cout << "      INTRODU SUMA: RON ";

                float sDepozit;
                cin >> sDepozit;

                if(sDepozit > 0){
                    balanta += sDepozit;
                }

                system("cls");

cout << R"(
      _____________________________
     |  _________________________  |
     | |-------------------------| |
     | |                         | |
     | |   DEPOZITAT CU SUCCES!  | |)"; 
                cout << endl << "     | |      $";
                cout << fixed << setprecision(2) << left << setw(18) << balanta;
                cout << "| |" << endl;
                cout << R"(     | |                         | |
     | |-------------------------| |
     | |_________________________| |
     |_____________________________|
                )" << endl;

                cout << "Apasa orice tasta pentru a continua...";
                system("pause > nul");
                system("cls");                
           break;

                case 3:
                    system("cls");
                    cout << "\n\n";
                    cout << "      ==========================" << endl;
                    cout << "           MOD EXTRAGERE" << endl;
                    cout << "      ==========================" << endl;
                    cout << "      INTRODU SUMA: RON ";

                    float sExtras;
                    cin >> sExtras;

                    if(sExtras > 0){
                        balanta -= sExtras;
                    } else {
                        cout << "\n\n";
                        cout << "      ==========================" << endl;
                        cout << "          OPERATIE NEPERMISA" << endl;
                        cout << "      ==========================" << endl;
                        cout << "\n\n";
                        cout << "Apasa orice tasta pentru a continua...";    
                        system("pause > nul");
                        system("cls");
                        break;
                    }

                    system("cls");
                    
cout << R"(
      _____________________________
     |  _________________________  |
     | |-------------------------| |
     | |                         | |
     | |   RETRAS CU SUCCES!     | |)"; 
                cout << endl << "     | |      $";
                cout << fixed << setprecision(2) << left << setw(18) << balanta;
                cout << "| |" << endl;
                cout << R"(     | |                         | |
     | |-------------------------| |
     | |_________________________| |
     |_____________________________|
                )" << endl;

                cout << "Apasa orice tasta pentru a continua...";
                system("pause > nul");
                system("cls");        
                
                break;

                case 4:
                system("cls");
                cout << "\n\n";
                cout << "      ===============================" << endl;
                cout << "             WORK IN PROGRESS" << endl;
                cout << "      ===============================" << endl;
                cout << "Apasa orice tasta pentru a continua...";                    
                system("pause > nul");
                system("cls");
                break;

                case 5:
                cout << "\n\n";
                cout << "      ===============================" << endl;
                cout << "                LA REVEDERE !" << endl;
                cout << "      ===============================" << endl;
                cout << "Apasa orice tasta pentru a iesi...";                    
                system("pause > nul");
                system("cls");
                return 0;
                break;

                default:

                break;

        }
    }
}