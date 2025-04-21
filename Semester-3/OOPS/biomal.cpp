#include <iostream>
#include <string>
using namespace std;

class LivingBeings {
    int type_id;   
    public:
    LivingBeings(int id) {type_id = id;}   
    void who_am_i() {
        if (type_id == 1)
            cout << "Plant" << endl;
        else if (type_id == 2)
            cout << "Animal" << endl;
    }
};

class Plants: public LivingBeings {
    string name, flower_color;
    bool edible;
   
    public:
    Plants(): LivingBeings(1) {
        cout << "Name: ";
        cin >> name;
        cout << "Flower Color: ";
        cin >> flower_color;
        cout << "Edible: ";
        cin >> edible;
    }
   
    Plants(string n, string fc, bool ed): LivingBeings(1) {
        name = n;
        flower_color = fc;
        edible = ed;
    }
   
    void who_am_i() {
        cout << "Name: " << name << endl;
        cout << "Flower Color: " << flower_color << endl;
        cout << "Edible: " << edible << endl;
    }
   
    void my_color(string color, Plants obj_array[], int n) {
        cout << endl << "My Color: " << endl;
        for(int i=0; i<n; i++) {
            if (obj_array[i].flower_color == color) {
                obj_array[i].who_am_i();
            }
        }
    }
};

class Animals: public LivingBeings {
    string name;
   
    public:
    Animals(string nme, int n): LivingBeings(n) {
        name = nme;
    }
   
    int length() {
        return name.length();
    }
   
    void who_am_i() {
        cout << "Name: " << name << endl;
        cout << "Type: Animal" << endl;
    }
   
    string operator > (Animals an2) {
        if (length() > an2.length())
            return name;
        else
             return an2.name;
    }
};

int main() {
    Plants plant[3], plant_2("Tea", "green", true);
    Animals animal_1("Cheetah", 2), animal_2("Elephant", 2);
   
    plant_2.who_am_i();
    plant_2.my_color("pink", plant, 3);
   
    string big_animal = animal_1 > animal_2;
    cout << endl << "Animal with lengthiest name: " << big_animal << endl;
   
    return 0;
}