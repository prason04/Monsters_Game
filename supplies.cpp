#include <iostream>
using namespace std;

int main() {

    // variables
    int pencils;
    int erasers;
    int highlighters;
    int sharpies;
    int sticky_notes;
    int index_cards;

// ask for the amount of pencils the user has
    cout << "Input the amount of pencils you have: ";
    cin >> pencils;

// checks if inputted value meet the maximum amount of pencils

    // if inputted value is greater than or equal to 12
    if (pencils >= 12) {
        cout << "You have enough pencils" << endl;
        cout << " " << endl;
    }
    // if inputted value is less than 12
    else {
        // calulates how many more pencils the user needs
        pencils = 12 - pencils;
        cout << "You need " << pencils << " more pencils" << endl;
        cout << " " << endl;
    }



// ask for the amount of erasers the user has
    cout << "Input the amount of erasers you have: ";
    cin >> erasers;

// checks if inputted value meet the maximum amount of erasers

    // if inputted value is greater than or equal to 3
    if (erasers >= 3) {
        cout << "You have enough erasers" << endl;
        cout << " " << endl;
    }
    // if inputted value is less than 3
    else {
        // calulates how many more erasers the user needs
        erasers = 3 - erasers;
        cout << "You need " << erasers << " more erasers" << endl;
        cout << " " << endl;
    }



// ask for the amount of highlighters the user has
    cout << "Input the amount of highlighters you have: ";
    cin >> highlighters;

// checks if inputted value meet the maximum amount of highlighters

    // if inputted value is greater than or equal to 4
    if (highlighters >= 4) {
        cout << "You have enough highlighters" << endl;
        cout << " " << endl;
    }
    // if inputted value is less than 4
    else {
        // calulates how many more highlighters the user needs
        highlighters = 4 - highlighters;
        cout << "You need " << highlighters << " more highlighters" << endl;
        cout << " " << endl;
    }



// ask for the amount of sharpies the user has
    cout << "Input the amount of sharpies you have: ";
    cin >> sharpies;

// checks if inputted value meet the maximum amount of sharpies

    // if inputted value is greater than or equal to 2
    if (sharpies >= 2) {
        cout << "You have enough sharpies" << endl;
        cout << " " << endl;
    }
    // if inputted value is less than 2
    else {
        // calulates how many more sharpies the user needs
        sharpies = 2 - sharpies;
        cout << "You need " << sharpies << " more sharpies" << endl;
        cout << " " << endl;
    }



// ask for the amount of sticky note packs the user has
    cout << "Input the amount of sticky note packs you have: ";
    cin >> sticky_notes;

// checks if inputted value meet the maximum amount of sticky note packs

    // if inputted value is greater than or equal to 4
    if (sticky_notes >= 4) {
        cout << "You have enough sticky note packs" << endl;
        cout << " " << endl;
    }
    // if inputted value is less than 4
    else {
        // calulates how many more sticky note packs the user needs
        sticky_notes = 4 - sticky_notes;
        cout << "You need " << sticky_notes << " more sticky note packs" << endl;
        cout << " " << endl;
    }



// ask for the amount of index card packs the user has
    cout << "Input the amount of index card packs you have: ";
    cin >> index_cards;

// checks if inputted value meet the maximum amount of index card packs

    // if inputted value is greater than or equal to 4
    if (index_cards >= 1) {
        cout << "You have enough index card packs" << endl;
    }
    // if inputted value is less than 1
    else {
        // calulates how many more index card packs the user needs
        index_cards = 1 - index_cards;
        cout << "You need " << index_cards << " more index card packs" << endl;
    }
    return 0;
}