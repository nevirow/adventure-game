// Adventure Game - The Lost Treasure
// Compile: g++ adventure_game.cpp -o adventure
// Windows: cl adventure_game.cpp /Feadventure
#include <iostream>
using namespace std;

int main()
{
    // Variabelen: int voor keuze en HP, bool voor item
    int  choice;
    int  hp      = 100;
    bool hasItem = false;

    // Intro
    cout << "=== THE LOST TREASURE ===" << endl;
    cout << "Je staat aan de rand van de jungle.\n\n";

    // Scène 1: twee paden
    cout << "1. Doornig pad door het struikgewas\n";
    cout << "2. Breed, gebaand pad\n";
    cin  >> choice;

    // if / else: pad 1 of pad 2
    if (choice == 1) {
        cout << "\nJe baant je door de doorns. HP -15.\n";
        hp -= 15; // operator: aftrekken

        cout << "Je vindt een toorts op de grond.\n";
        cout << "1. Pak de toorts\n2. Laat hem liggen\n";
        cin  >> choice;

        if (choice == 1) hasItem = true; // bool item opslaan

        cout << "\nJe betreedt een donkere grot.\n";

        // if / else op basis van item (array alternatief: bool vlag)
        if (hasItem) {
            cout << "Met de toorts zie je de gouden kist!\n";
            cout << "SCHAT GEVONDEN! Score: " << hp + 50 << "\n";
        } else {
            cout << "Pikdonker. Je struikelt. GAME OVER.\n";
        }

    } else {
        cout << "\nJe volgt het pad en bereikt een rivier.\n";
        cout << "1. Zwem over (HP -25)\n2. Zoek een brug\n";
        cin  >> choice;

        if (choice == 1) {
            hp -= 25;
            cout << "Je haalt de overkant maar bent uitgeput.\n";
            cout << "SCHAT GEVONDEN! Score: " << hp + 30 << "\n";
        } else {
            cout << "Na uren zoeken keer je leeg terug. GAME OVER.\n";
        }
    }

    return 0;
}
