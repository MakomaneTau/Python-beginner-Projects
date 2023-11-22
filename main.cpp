#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

void skip(){
    cout << endl;
}

int main(){

    vector <char> keyboardCharacters;

    for (int i = 33; i < 123; ++i) {
        keyboardCharacters.push_back(static_cast<char>(i));
    }


    random_device rd;
    uniform_int_distribution <int> dist(1,90);
    
    //Shuffle a list
    random_shuffle(keyboardCharacters.begin(), keyboardCharacters.end()); 

    int length_of_password;
    bool condition = false;
    cout << "Enter length of your password (Minimum 8 characters): ";
    cin >> length_of_password;
    while (condition != true){
        
         if ( !(length_of_password) )
        {
            condition = false;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Incorrect entry. Try again: " << endl;
            cout << "Enter length of your password (Minimum 8 characters): ";
            cin >> length_of_password;
        }

        else if (length_of_password < 8 || length_of_password > 20){
            condition = false;
            cout << "Enter length of your password (Minimum 8 characters): ";
            cin >> length_of_password;
        }
        else{
            condition = true;
        }
    }
    
    skip();

    int num;
    for (int i = 0; i < length_of_password; i++){
        cout << keyboardCharacters[dist(rd)];
    }

    skip();


    system("pause");

}