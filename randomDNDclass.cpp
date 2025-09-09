#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

class Character {
public:
    string name;
    string charClass;
    string race;
    string feat;
    string background;
    int level = 1;
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
};

class RandomNumAbilities {
public:
   int rollAbility() {
    int rolls[4];
    for (int i = 0; i < 4; ++i) {
         rolls[i] = rand() % 6 + 1; // Roll 1d6
    }
    sort(rolls, rolls + 4); // Drop lowest
    return rolls[1] + rolls[2] + rolls[3];
    }
};

class RandomClass {
public:
    string getRandomClass() {
        string classes[] = {"Fighter", "Wizard", "Rogue", "Cleric", "Ranger", "Paladin", "Artificer", "Barbarian", "Bard", "Druid", "Monk", "Sorcerer", "Warlock"};
        int index = rand() % 13;
        return classes[index];
    }
};

class RandomRace {
public:
    string getRandomRace() {
        string races[] = {"Human", "Elf", "Dwarf", "Halfling", "Orc", "Gnome", "Tiefling", "Dragonborn", "Half-Elf", "Half-Orc", "Aasimar", "Genasi", "Goliath", "Kenku", "Tabaxi", "Triton", "Yuan-ti", "Firbolg", "Goblin", "Hobgoblin", "Kobold", "Lizardfolk", "Bugbear", "Centaur", "Minotaur", "Satyr", "Warforged", "Changeling", "Shifter", "Kaladesh", "Vedalken", "Simic Hybrid", "Loxodon", "Aetherborn", "Merfolk", "Sphinx", "Naga", "Elemental", "Fey", "Undead", "Drow", "Duergar", "Svirfneblin", "Aarakocra", "Genasi (Air)", "Genasi (Earth)", "Genasi (Fire)", "Genasi (Water)", "Githyanki", "Githzerai", "Locathah", "Grung", "Autognome", "Plasmoid", "Thri-kreen", "Owlfolk", "Rabbitfolk"};
        int index = rand() % 58;
        return races[index];
    }
};

class RandomSkills {
public:
    string getRandomSkill() {
        string skills[] = {"Acrobatics", "Animal Handling", "Arcana", "Athletics", "Deception", "History", "Insight", "Intimidation", "Investigation", "Medicine", "Nature", "Perception", "Performance", "Persuasion", "Religion", "Sleight of Hand", "Stealth", "Survival"};
        int index = rand() % 18;
        return skills[index];
    }
};

class RandomFeats {
    public:
    string getRandomFeat() {
        string feats[] = {"Alert", "Athlete", "Actor", "Charger", "Crossbow Expert", "Defensive Duelist", "Dual Wielder", "Dungeon Delver", "Durable", "Elemental Adept", "Grappler", "Great Weapon Master", "Healer", "Inspiring Leader", "Keen Mind", "Lightly Armored", "Linguist", "Lucky", "Mage Slayer", "Magic Initiate", "Martial Adept", "Medium Armor Master", "Mobile", "Mounted Combatant", "Observant", "Polearm Master", "Resilient", "Ritual Caster", "Savage Attacker", "Sentinel", "Sharpshooter", "Shield Master", "Skilled", "Skulker", "Spell Sniper", "Tavern Brawler", "Tough", "War Caster", "Weapon Master"};
        int index = rand() % 38;
        return feats[index];
    }
};

class RandomBackground {
public:
    string getRandomBackground() {
        string backgrounds[] = {"Acolyte", "Charlatan", "Criminal", "Entertainer", "Folk Hero", "Guild Artisan", "Hermit", "Noble", "Outlander", "Sage", "Sailor", "Soldier", "Urchin"};
        int index = rand() % 13;
        return backgrounds[index];
    }
};

class D20CharacterGenerator {
public:
    Character generateCharacter(string name) {
        RandomNumAbilities abilityRoller;
        RandomClass classGenerator;
        RandomRace raceGenerator;
        RandomSkills skillGenerator;
        RandomFeats featGenerator;

        Character newChar;
        newChar.name = name;
        newChar.race = raceGenerator.getRandomRace();
        newChar.background = RandomBackground().getRandomBackground();
        newChar.feat = featGenerator.getRandomFeat();
        newChar.charClass = classGenerator.getRandomClass();
        newChar.strength = abilityRoller.rollAbility();
        newChar.dexterity = abilityRoller.rollAbility();
        newChar.constitution = abilityRoller.rollAbility();
        newChar.intelligence = abilityRoller.rollAbility();
        newChar.wisdom = abilityRoller.rollAbility();
        newChar.charisma = abilityRoller.rollAbility();

        return newChar;
    }
};

class D20CharacterPrinter {
public:
    void printCharacter(const Character& character) {

        // Print basic info
        cout << "Name: " << character.name << endl;
        cout << "Class: " << character.charClass << endl;
        cout << "Level: " << character.level << endl;
        cout << "Race: " << character.race << endl;
        cout << "Background: " << character.background << endl;
        cout << "Feat: " << character.feat << endl;

        // Print abilities
        cout << "Strength: " << character.strength << endl;
        cout << "Dexterity: " << character.dexterity << endl;
        cout << "Constitution: " << character.constitution << endl;
        cout << "Intelligence: " << character.intelligence << endl;
        cout << "Wisdom: " << character.wisdom << endl;
        cout << "Charisma: " << character.charisma << endl;
    }
};

int main(){
    srand(static_cast<unsigned int>(time(0))); // Seed randomness

    string characterName;
    cout << "Enter your character's name: ";
    getline(cin, characterName);

    D20CharacterGenerator generator;
    Character myCharacter = generator.generateCharacter(characterName);

    D20CharacterPrinter printer;
    printer.printCharacter(myCharacter);

    return 0;
}
