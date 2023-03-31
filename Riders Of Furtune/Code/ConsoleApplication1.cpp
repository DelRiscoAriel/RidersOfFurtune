#include <iostream>
#include <time.h>

using namespace std;

const int MAPSIZE = 28;

char Map[28] = { 'P', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm','m',
                'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm','D' };

const int NumWeapons = 5;
const int NumEmpty = 7;

int randomNumber(int, int);
void printMap();
void printMapAst();
void assignEmpty();
void assignWeapons();

int main()
{
    char choice;
    int space = 0;
    int random = 0;
    int exp = 0;
    string weapon = "Knife";
    int damage = 0;

    //Generate a random number
    srand(time(NULL));
    //Assign the empty spaces
    assignEmpty();
    //Assign Weapons
    assignWeapons();

    cout << "----Welcom to Riders of Fortune----" << endl;
    cout << "You play as Yara, a young hourseman in search of the of the illustrious Chalice of Knowledge, " << endl;
    cout << "an artifact that will bring you everlasting wisdom. The Chalice can only be found " << endl;
    cout << "in dragon dungeon after defeating the dragon." << endl;

    //Print the Map
    //printMap();
    printMapAst();
    cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
    Map[0] = 'n';

    for (int level = 1; level <= 28; level++)
    {
        cout << endl << "Do you want to explore the next level? If not you will skip it(You will roll a dice and advancethe number). (Y/N) ";
        cin >> choice;
        cout << endl;
        if (choice == 'y' || choice == 'Y')
        {
            if (Map[level] == 'm')
            {
                if (level <= 6)
                {
                    cout << "You have encountere a Monster in this level. His HP is 3." << endl;
                    cout << "Rolling dice... ";
                    random = randomNumber(1, 6);
                    cout << "The attack damage is " << random << " plus the damage of your weapon " << damage << " .The total damage is " << (random + damage) << endl;
                    if (random + damage >= 3)
                    {
                        cout << "You have defeated the Monster. Your EXP is increade by 2" << endl;
                        exp += 2;
                        Map[level] = 'P';
                        //printMap();
                        printMapAst();
                        cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
                    }
                    else
                    {
                        cout << "The monster has Killed you. You LOST.";
                        break;
                    }
                }

                else if (level > 6 && level <= 11)
                {
                    cout << "You have encountere a Monster in this level. His HP is 4." << endl;
                    cout << "Rolling dice... ";
                    random = randomNumber(1, 6);
                    cout << "The attack damage is " << random << " plus the damage of your weapon " << damage << " .The total damage is " << (random + damage) << endl;
                    if (random + damage >= 4)
                    {
                        cout << "You have defeated the Monster. Your EXP is increade by 2" << endl;
                        exp += 2;
                        Map[level] = 'P';
                        //printMap();
                        printMapAst();
                        cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
                    }
                    else
                    {
                        cout << "The monster has Killed you. You LOST.";
                        break;
                    }
                }

                else if (level > 11 && level <= 16)
                {
                    cout << "You have encountere a Monster in this level. His HP is 5." << endl;
                    cout << "Rolling dice... ";
                    random = randomNumber(1, 6);
                    cout << "The attack damage is " << random << " plus the damage of your weapon " << damage << " .The total damage is " << (random + damage) << endl;
                    if (random + damage >= 5)
                    {
                        cout << "You have defeated the Monster. Your EXP is increade by 2" << endl;
                        exp += 2;
                        Map[level] = 'P';
                        //printMap();
                        printMapAst();
                        cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
                    }
                    else
                    {
                        cout << "The monster has Killed you. You LOST.";
                        break;
                    }
                }

                else if (level > 16 && level <= 22)
                {
                    cout << "You have encountere a Monster in this level. His HP is 6." << endl;
                    cout << "Rolling dice... ";
                    random = randomNumber(1, 6);
                    cout << "The attack damage is " << random << " plus the damage of your weapon " << damage << " .The total damage is " << (random + damage) << endl;
                    if (random + damage >= 6)
                    {
                        cout << "You have defeated the Monster. Your EXP is increade by 2" << endl;
                        exp += 2;
                        Map[level] = 'P';
                        //printMap();
                        printMapAst();
                        cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
                    }
                    else
                    {
                        cout << "The monster has Killed you. You LOST.";
                        break;
                    }
                }

                else if (level > 22 && level <= 28)
                {
                    cout << "You have encountere a Monster in this level. His HP is 7." << endl;
                    cout << "Rolling dice... ";
                    random = randomNumber(1, 6);
                    cout << "The attack damage is " << random << " plus the damage of your weapon " << damage << " .The total damage is " << (random + damage) << endl;
                    if (random + damage >= 7)
                    {
                        cout << "You have defeated the Monster. Your EXP is increade by 2" << endl;
                        exp += 2;
                        Map[level] = 'P';
                        //printMap();
                        printMapAst();
                        cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
                    }
                    else
                    {
                        cout << "The monster has Killed you. You LOST.";
                        break;
                    }
                }

            }

            else if (Map[level] == 'C')
            {
                cout << "You have found a new weapon: The Crossbow, that adds 3 to the total damage. " << endl;
                damage = 3;
                weapon = "Crosbow";
                Map[level] = 'P';
                //printMap();
                printMapAst();
                cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            }

            else if (Map[level] == 'F')
            {
                cout << "You have found a new weapon: The Flail, that adds 4 to the total damage. " << endl;
                damage = 4;
                weapon = "Flail";
                Map[level] = 'P';
                //printMap();
                printMapAst();
                cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            }

            else if (Map[level] == 'B')
            {
                cout << "You have found a new weapon: The Broad Sword, that adds 5 to the total damage. " << endl;
                damage = 5;
                weapon = "Broad Sword";
                Map[level] = 'P';
                //printMap();
                printMapAst();
                cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            }

            else if (Map[level] == 'd')
            {
                cout << "You have found a new weapon: The Dragon Slayer, that adds 6 to the total damage. " << endl;
                damage = 6;
                weapon = "Dragon Slayer";
                Map[level] = 'P';
                //printMap();
                printMapAst();
                cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            }

            else if (Map[level] == 'S')
            {
                cout << "You have found a new weapon: The Spell Of the Gods, that adds 7 to the total damage. " << endl;
                damage = 7;
                weapon = "Spell Of the Gods";
                Map[level] = 'P';
                //printMap();
                printMapAst();
                cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            }

            else if (Map[level] == 'e')
            {
                cout << "There is nothing for you to do, so you reflect upon your adventures thus far. \nYou take the time to train and enhance your reflexes." << endl;
                Map[level] = 'P';
                //printMap();
                printMapAst();
                cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            }

            else if (Map[level] == 'D')
            {
                if (exp <= 5)
                {
                    cout << "Alas, the dragons eyes stare at you and places you under his spell." << endl;
                    cout << "You try to move but fail to do so andfind yourself torched by the dragon’s fire." << endl;
                    cout << "--If only you had more experience, you could have seen it coming.--";
                    break;
                }
                else
                {
                    cout << "You have reach the Dragon lair, time to fight him. His HP is 10." << endl;
                    cout << "Rolling dice... ";
                    random = randomNumber(1, 6);
                    cout << "The attack damage is " << random << " plus the damage of your weapon " << damage << " .The total damage is " << (random + damage) << endl;
                    if (random + damage >= 10)
                    {
                        cout << "Due to your cunning and experience, you have defeated the deadly dragon. Your quest has ended good sir." << endl;
                        cout << "You’ve obtained the Chalice of knowledge and all of earth’s mysteries are revealed. " << endl;
                        cout << "--You have WIN the game--" << endl;
                        break;
                    }
                }
            }
        }
         
        else
        {
            /*Map[level] = 'P';
            //printMap();
            printMapAst();
            cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";*/
            random = randomNumber(1, 6);
            level += random;
            if (level < 27)
                cout << "Rolling Dice... The Dice number is " << random << ", advance to level " << level << endl;
            else
            {
                cout << "Rolling Dice... The Dice number is " << random << ", advance to Dungeon." << endl;
                level = 27;
            }
            Map[level] = 'P';
            //printMap();
            printMapAst();
            cout << endl << "       ---   EXP: " << exp << "         Current Weapon: " << weapon << " +" << damage << "    ---";
            cout << random << "  " << level << endl;
        }

        for (int act = 0; act <= level; act++)
            Map[act] = 'n';
    }
    
    while (choice != 'Z')
    {
        cin >> choice;
    } 
    

}

//This function assigns empty spaces by coming up with random numbers
void assignEmpty()
{
    for (int cnt = 0; cnt < NumEmpty; cnt++)
    {
        //Get random Space between 2 and 27
        int random = randomNumber(1, 26);
        bool assigned = false;
        while (!assigned)
        {
            if (Map[random] == 'm')
            {
                assigned = true;
                Map[random] = 'e';
            }
            else
            {
                random = randomNumber(2, 27);
            }
        }

    }
}

void assignWeapons()
{       
    bool crossBow = false; // C
    bool flail = false; // F
    bool broadSword = false; // B
    bool dragonSlayer = false; //d
    bool spellOfTheGods = false; //S

    int randomC = randomNumber(1, 6);
    while (!crossBow)
    {
         if (Map[randomC] == 'm')
         {
             crossBow = true;
             Map[randomC] = 'C';
         }
         else
         {
             randomC = randomNumber(1, 6);
         }
    }

    int randomF = randomNumber(7, 12);
    while (!flail)
    {
        if (Map[randomF] == 'm')
        {
            flail = true;
            Map[randomF] = 'F';
        }
        else
        {
            randomF = randomNumber(7, 12);
        }
    }

    int randomB = randomNumber(12, 17);
    while (!broadSword)
    {
        if (Map[randomB] == 'm')
        {
            broadSword = true;
            Map[randomB] = 'B';
        }
        else
        {
            randomB = randomNumber(12, 17);
        }
    }

    int randomd = randomNumber(18, 22);
    while (!dragonSlayer)
    {
        if (Map[randomd] == 'm')
        {
            dragonSlayer = true;
            Map[randomd] = 'd';
        }
        else
        {
            randomd = randomNumber(18, 22);
        }
    }

    int randomS = randomNumber(23, 27);
    while (!spellOfTheGods)
    {
        if (Map[randomS] == 'm')
        {
            spellOfTheGods = true;
            Map[randomS] = 'S';
        }
        else
        {
            randomS = randomNumber(23, 27);
        }
    }
}

void printMap()
{
    cout << endl;
    cout << "----- ";
    for (int cnt = 0; cnt < MAPSIZE; cnt++)
    {
        cout << Map[cnt] << " ";
    }
    cout << "-----";
}

void printMapAst()
{
    cout << endl;
    cout << "----- ";
    for (int cnt = 0; cnt < MAPSIZE; cnt++)
    {
        if (Map[cnt] == 'P')
        {
            cout << "P ";
        }
        else if (Map[cnt] == 'D')
        {
            cout << "D ";
        }
        else
        {
            cout << "* ";
        }
    }
    cout << "----- ";
}

int randomNumber(int low, int high)
{
    return (rand() % (high - low + 1)) + low;
}


