#include <iostream>
#include <string>
using namespace std;

class card {
protected:
    string name;
    string color;
    string rarity;
public:
    card(string in_name, string in_color, string in_rarity);
    friend ostream& operator<<(ostream& left, const card& right);
};

class creature : public card {
private:
    int attack;
    int defense;
    string type;
public:
    creature(string in_name, string in_color, string in_rarity, int in_attack, int in_defense, string in_type);
    friend ostream& operator<<(ostream& left, const creature& right);
};

class land : public card {
private:
    int mana;
    string description;
    bool tap;
public:
    land(string in_name, string in_color, string in_rarity,int in_mana, string in_description, bool in_tap);
    friend ostream& operator<<(ostream& left, const land& right);
};

int main() {

    creature c1("Rune-Scarred Demon","black","rare",6,6,"Demon");
    creature c2("Akroan Crusader","red","common",1,1,"Human Soldier");

    cout << c1 << endl;
    cout << c2 << endl;

    land c3("Plains","white","uncommon",1,"Basic Land - Plains",false);
    cout << c3 << endl;

    return 0;
}

card::card(string in_name, string in_color, string in_rarity) {
    name = in_name;
    color = in_color;
    rarity = in_rarity;
}

ostream& operator<<(ostream& left, const card& right) {
    left<<"("<<right.name<<","<<right.color<<","<<right.rarity<<")";
    return left;
}

creature::creature(string in_name, string in_color, string in_rarity, int in_attack, int in_defense, string in_type): card(in_name,in_color,in_rarity)
{
    attack = in_attack;
    defense = in_defense;
    type = in_type;
}
ostream& operator<<(ostream& left, const creature& right) {
    left<<"("<<right.name<<","<<right.color<<","<<right.rarity<<",";
    left<<right.attack<<","<<right.defense<<","<<right.type<<")";
    return left;
}
land::land(string in_name, string in_color, string in_rarity,int in_mana, string in_description, bool in_tap): card(in_name,in_color,in_rarity) {
    mana = in_mana;
    description = in_description;
    tap = in_tap;
}
ostream& operator<<(ostream& left, const land& right) {
    left<<"("<<right.name<<","<<right.color<<","<<right.rarity<<",";
    left<<right.mana<<","<<right.description<<",";
    if (right.tap) left<<"tapped";
    else left<<"untapped";

    left<<")";
    return left;
}
