#include "player.h"

Player::Player(string name, int height, int weight, string school, int year) {
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->school = school;
    this->year = year;
}
Cloneable* Player::clone() {
    return new Player(name, height, weight, school, year);
}
void Player::print() {
    cout << name << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "School: " << school << endl;
    cout << "Birth Year: " << year << endl;
}

/**
 * Populate a map with all of the basketball players in the file 
 * "players.txt"
 * @param map A map to fill
 */
void loadPlayers(Map* map) {
    // TODO: Fill this in.  Load in each player and put
    // them in the map with a HashableString with their name
    // as the key and a player as their value.  Look at Person.cpp
    // for an example of how to put things into a map
    ifstream file("players.txt");
    if (file.is_open()) {
        string line;
        while(getline(file, line)) {
            
        }
    }
}
