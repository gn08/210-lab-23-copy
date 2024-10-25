#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

void add_goat(list<Goat>trip, string names[], string colors[]){
    int name_index = rand() % SZ_NAMES;
    int color_index = rand() % SZ_COLORS;
    int age = rand() % (MAX_AGE + 1);
    Goat new_goat(names[name_index], age, colors[color_index]);
    trip.push_back(new_goat);
    cout << "Goat added: " << new_goat.get_name() << "(" << new_goat.get_age() << "," << new_goat.get_color() << ")" << endl;
}

void delete_goat(){
    if (trip.empty()){
        cout << "No goats" << endl;
        return;
    }

    int index = select_goat(trip);
    if (index == 1) return;
    auto it = trip.begin();
    advance(it, index);
    trip.erase(it);
    cout << "Deleted" << endl;
}

void display_trip(){
    if (tr)
}

int select_goat(list<Goat>trip){

}

int main() {
    srand(time(0));
    bool again;

    do{
        cout << "\n*** GOAT MANAGER 3001 ***" << endl;
        cout << "[1] Add a goat" << endl;
        cout << "[2] Delete a goat" << endl;
        cout << "[3] List goats" << endl;
        cout << "Choice -->";

        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4){
            cin.clear();
            cin.ignore(1000, '/n');
            cout << "Invalid" << endl;
        } else {
            valid_choice = true;
        }
    }while (!valid_choice);
    return choice;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

