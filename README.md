# The Lost Treasure — Adventure Game

Een tekst-gebaseerd avonturenspel waarbij de speler keuzes maakt die het verhaal beïnvloeden.

## Beschrijving

Je speelt een avonturier op zoek naar een verloren schat diep in de jungle.  
Jouw keuzes bepalen of je de schat vindt of met lege handen terugkeert.

## Programmeertaal

| Bestand                  | Taal | Uitvoeren                                            |
|--------------------------|------|------------------------------------------------------|
| `src/adventure_game.cpp` | C++  | `g++ adventure_game.cpp -o adventure && ./adventure` |

## Leerdoelen

De volgende concepten worden gedemonstreerd:

- **Comments** — `// Adventure Game`, `// data type: int`, etc.
- **Data types** — `int choice`, `int hp`, `bool hasItem`
- **Operators** — `hp -= 15`, `hp -= 25`, `choice == 1`
- **If / else** — pad 1 vs pad 2, toorts wel/niet, zwemmen vs brug

## Installatie & uitvoeren

**Windows (Visual Studio):**
```
cl adventure_game.cpp /Feadventure
adventure.exe
```

**Linux / Mac:**
```bash
g++ adventure_game.cpp -o adventure
./adventure
```

## Verhaalstructuur

```
Start
├── Pad 1: Doornig pad  (HP -15)
│   ├── Toorts pakken  → Grot → SCHAT GEVONDEN (Score: HP + 50)
│   └── Toorts laten  → Grot → GAME OVER
└── Pad 2: Breed pad
    ├── Zwemmen (HP -25) → SCHAT GEVONDEN (Score: HP + 30)
    └── Brug zoeken     → GAME OVER
```

## Bestandsstructuur

```
adventure-game/
├── src/
│   └── adventure_game.cpp
├── flowchart.drawio
├── .gitignore
└── README.md
```

## Auteur

Student — Periode 2, 2024
