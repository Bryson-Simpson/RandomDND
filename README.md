# 🎲 D20 Character Generator

[![C++](https://img.shields.io/badge/language-C%2B%2B17-blue.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](./LICENSE)
[![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)](#)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-blue.svg)](https://github.com/yourusername/d20-character-generator/pulls)

A simple **C++ program** that generates random Dungeons & Dragons–style characters.  
It rolls stats, picks a class, race, background, and feat, then prints out the full character sheet.

---

## ✨ Features
- **Ability Scores**: Rolls 4d6, drops the lowest, and sums the top 3.
- **Random Class**: Fighter, Wizard, Rogue, Cleric, Ranger, or Paladin.
- **Random Race**: Includes classic and exotic D&D races (Human, Elf, Tiefling, Dragonborn, Goliath, etc.).
- **Random Backgrounds**: Noble, Hermit, Folk Hero, etc.
- **Random Feats**: Pulls from a pool of 5e feats like *Alert*, *Lucky*, *Sharpshooter*, etc.
- **Expandable**: Easy to add new classes, races, feats, or backgrounds.

---

## 🛠️ How It Works
1. The program asks for your **character’s name**.
2. It randomly generates:
   - Race
   - Class
   - Background
   - Feat
   - Six ability scores
3. It prints out the completed character sheet.

Example output:

```
Enter your character's name: Thaldrin
Name: Thaldrin
Class: Ranger
Level: 1
Race: Goliath
Background: Hermit
Feat: Lucky
Strength: 15
Dexterity: 13
Constitution: 16
Intelligence: 12
Wisdom: 14
Charisma: 10
```

---

## 🚀 Getting Started

### Prerequisites
- A C++ compiler (e.g., `g++` or MSVC)
- C++11 or later (tested with C++17)

### Compilation
```bash
g++ -std=c++17 -o d20_character_generator main.cpp
```

### Run
```bash
./d20_character_generator
```

---

## 📂 Project Structure
- `Character` – data model for characters
- `RandomNumAbilities` – rolls stats (4d6 drop lowest)
- `RandomClass` – picks a random class
- `RandomRace` – picks a random race
- `RandomSkills` – (defined, ready to be used)
- `RandomFeats` – picks a random feat
- `RandomBackground` – picks a random background
- `D20CharacterGenerator` – builds a complete character
- `D20CharacterPrinter` – displays character info

---

## 🧩 Possible Improvements
- Use C++ `<random>` instead of `rand()` for better randomness.
- Save generated characters to a file (JSON, text, etc.).
- Add multiple skills and proficiencies.
- Allow weighted distributions (e.g., humans more common than tabaxi).
- Add multiclassing or leveling options.

---

## 📜 License
This project is licensed under the terms of the [MIT License](./LICENSE).  
Feel free to fork, modify, and expand!

---
