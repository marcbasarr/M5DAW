
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<MMSystem.h>

using namespace std;

// Atributos del opcion

int choiseenemy;
int choiseattack;

// Atributos del enemigo

int enemyHP = 1200;
string enemyName = "Charizard";
bool isAlive = true;
int enemyDamage;

// Atributos del enemigo

int enemy2HP = 800;
string enemyName2 = "Lapras";
bool isAlive2 = true;
int enemyDamage2;
//Atributos de héroe

string heroName;
int heroDamage;
int heroHP = 2000;
int heroIsAlive = true;
char opcion;
int BolaSombra = 500;
int Attack1lost = 4;
int Psiquico = 500;
int Attack2lost = 3;
int Placaje = 50;

//--------------------------------------------------     Inicio de juego *****  V    O    I    D  *****     --------------------------------------------------

void gameStart() {
    //-----------------------------------------------------------------------------------------------          PRINCIPIO Main             ---------------------------------------------------------------------

    cout << "Hola bienvenido al mundo Pokemon :D\n";
    cout << "Como te llamas?\n";

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    cin >> heroName;
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    cout << "Tu nombre es " << heroName << "\n";

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    cout << "Oh no!!, un " << enemyName << " acaba de aparecer, tiene " << enemyHP << " puntos de vida \n";
    //PlaySound(TEXT("charizard.wav"), NULL, SND_LOOP);
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    cout << "Oh no!!, un " << enemyName2 << " acaba de aparecer, tiene " << enemy2HP << " puntos de vida \n";
    //PlaySound(TEXT("lapras.wav"), NULL, SND_LOOP);
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

} 

//--------------------------------------------------     Ataques en *****  V    O    I    D  *****     --------------------------------------------------

void Attackenemies() {
    cout << "Que ataque quieres elegir para atacar: \n";
    cout << "[1] -- Bola Sombra     " << Attack1lost << " / 4\n";
    cout << "[2] -- Psiquico    " << Attack2lost << " / 3\n";
    cout << "[3] -- Placaje\n";
} 

//--------------------------------------------------     Eleccion de enemigos en *****  INT  *****    --------------------------------------------------

int Electionenemies(int x){
    int eleccion;
    if (x == 1) {
        cout << "Has elegido al enemigo Charizard\n";
        return eleccion = 1;
    }
    else if (x == 2) {
        cout << "Has elegido al enemigo Lapras\n";
        return eleccion = 2;
    }
    
}


void attackenemiesss(int n, int m) {
   if (m == 1) {
   switch (n) {
       //---------------------------------------------------------------------------         PINCIPIO  Switch              ---------------------------------------------------------------------

       //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   case 1:
       Attack1lost = Attack1lost - 1;
       if (Attack1lost <= 0) {
           cout << "Oh no ya no puedes utlizar mas Bola Sombra :OOOO\n";
       }
       else {
           enemyHP = enemyHP - BolaSombra;
           cout << " Has elegido Bola Sombra\n";
       }
       break;
       //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   case 2:

       Attack2lost = Attack2lost - 1;
       if (Attack2lost <= 0) {
           cout << "Oh no ya no puedes utlizar mas Psiquico :OOOO\n";
       }
       else {
           cout << " Has elegido Psiquico\n";
           enemyHP = enemyHP - Psiquico;
       }
       break;
       //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   case 3:
       cout << " Has elegido Placaje\n";
       enemyHP = enemyHP - Placaje;
       break;

   default:
       cout << "Pues te quedas sin turno, por tonto, haber elegido bien :/\n";
       break;
   }

}
    
    else if (m == 2) {


        switch (n) {
            //---------------------------------------------------------------------------         PINCIPIO  Switch              ---------------------------------------------------------------------

            //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        case 1:
            Attack1lost = Attack1lost - 1;
            if (Attack1lost <= 0) {
                cout << "Oh no ya no puedes utlizar mas Bola Sombra :OOOO\n";
            }
            else {
                enemy2HP = enemy2HP - BolaSombra;
                cout << " Has elegido Bola Sombra\n";
            }
            break;
            //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        case 2:

            Attack2lost = Attack2lost - 1;
            if (Attack2lost <= 0) {
                cout << "Oh no ya no puedes utlizar mas Psiquico :OOOO\n";
            }
            else {
                cout << " Has elegido Psiquico\n";
                enemy2HP = enemy2HP - Psiquico;
            }
            break;
            //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        case 3:
            cout << " Has elegido Placaje\n";
            enemy2HP = enemy2HP - Placaje;
            break;

        default:
            cout << "Pues te quedas sin turno, por tonto, haber elegido bien :/\n";
            break;
        }
    }
}
//--------------------------------------------------     Eleccion de enemigos *****  V    O    I    D  *****    --------------------------------------------------

void elecciones() {
    int enem1, optionn;
    Attackenemies();
    cin >> optionn;
    cout << "Ahora elige a que enemigo quieres atacar: ";
    cin >> enem1;
    attackenemiesss(optionn, enem1);
    
    Electionenemies(enem1);
}

//--------------------------------------------------     Puntos restantes *****  bool  *****    --------------------------------------------------

bool points() {
    if (heroHP > 0) {
        cout << "Te quedan " << heroHP << " puntos de vida\n";
        return true;
    }
    else {
        cout << "Te quedan 0 puntos de vida\n";
        return false;
    }
}

//--------------------------------------------------     Ataque enemigo 1 *****  INT  *****    --------------------------------------------------

int enemyAttack(int n) {
    return enemyDamage = (rand() % 500);
}

//--------------------------------------------------     Ataque enemigo 2 *****  INT  *****    --------------------------------------------------

int enemyAttack2(int n2) {
    return enemyDamage2 = (rand() % 500);
}


int enemyAttackAll(int l) {
    return heroHP = heroHP - (enemyAttack(enemyDamage) + enemyAttack2(enemyDamage2));
}
//--------------------------------------------------     Muerte del heroe *****  bool  *****    --------------------------------------------------

bool herodead() {
        if (heroHP <= 0) {
            cout << "has muerto\n";
            return false;

        }
        else {
            return true;
        }
    }

//--------------------------------------------------     Estado del enemigo *****  bool  *****    --------------------------------------------------

bool checkEnemyStatus() {
        if (enemyHP <= 0) {
            cout << "Te has cargado al enemigo " << enemyName << " \n";
            enemyHP = 0;
            return false;
            //enemyIsAlive = false;
        }
        else {
            cout << "El enemigo " << enemyName << " te ha hecho un dano de " << enemyDamage << " puntos de vida\n";
            cout << "El enemigo " << enemyName2 << " te ha hecho un dano de " << enemyDamage2 << " puntos de vida\n";
            cout << "El enemigo " << enemyName << " tiene " << enemyHP << " puntos de vida\n";
            cout << "El enemigo " << enemyName2 << " tiene " << enemy2HP << " puntos de vida\n";
            return true;
        }
    }
bool checkEnemyStatus1(){
    if (enemyHP <= 0) {
        cout << "Te has cargado al enemigo " << enemyName2 << " \n";
        cout << "Enhorabuena te has cargado a todos los enemigos \n";
        enemyHP = 0;
        return false;
    }
    else {
        cout << "El enemigo " << enemyName << " tiene " << enemyHP << " puntos de vida\n";
    }
}
bool checkEnemyStatus2(){
    if (enemy2HP <= 0) {
        cout << "Te has cargado al enemigo " << enemyName2 << " \n";
        cout << "Enhorabuena te has cargado a todos los enemigos \n";
        enemyHP = 0;
        return false;
    }
    else {
    cout << "El enemigo " << enemyName2 << " tiene " << enemy2HP << " puntos de vida\n";
}
}

int main()
{
    gameStart();

    while (heroHP > 0 || enemyHP > 0 || enemy2HP > 0) {
        //------------------------------------------------          PRINCIPIO Bucle              ---------------------------------------------------------------------
        if (heroHP > 0 && enemyHP > 0 && enemy2HP > 0) {
            elecciones();
            enemyAttackAll(heroHP);
            herodead();
            checkEnemyStatus();
        }
        else if (heroHP <= 0) {
            herodead();
            break;
        }
        else if (enemyHP <= 0 || enemy2HP <= 0) {
        if (enemyHP <= 0) {
            checkEnemyStatus2();
        }
        else if (enemy2HP <= 0) {
            checkEnemyStatus1();
            
        }
        }
        points();
        
    
    } //--------------------------------------------------------------------------------------------------------          FINAL Bucle              ---------------------------------------------------------------------

}//-------------------------------------------------------------------------------------------------------------          FINAL Main             ---------------------------------------------------------------------
        
        
