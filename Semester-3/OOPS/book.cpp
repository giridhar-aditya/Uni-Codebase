#include <iostream>
using namespace std;
int count = 1;
class Book{
private:
    int book_id;
    char book_name[20];
    int price;
public:
    int searchbook(int id);
    void display();
    Book(){
        cout << "\nBook Entry No " << count<<endl; count++;
        cout << "Enter the Book ID :"; cin >> book_id;
        cout << "Enter the Book Name :"; cin >> book_name;
        cout << "Enter the price of the book :"; cin >> price;
        cout << "The Book was added to the Database\n";
    }
};
int Book ::searchbook(int id){
    if (id == book_id){return 1;}
    else{return 0;}
}
void Book ::display(){
    cout << "The Book ID : " << book_id << endl;
    cout << "The Book Name : " << book_name << endl;
    cout << "The Price : " << price << endl;
}
int main(){
    char ch1; int ID, z = 0, n;
    cout << "Enter the Number of Books Entry :"; cin >> n; Book S[n];
    cout << "Do you want to Search records(y/n) :"; cin >> ch1;
    while (ch1 == 'y'){
        cout << "Enter the ID of the book you are looking for :"; cin >> ID;
        for (int i = 0; i < n; i++){z = S[i].searchbook(ID); if (z == 1){S[i].display(); break;}}
        if (z == 0){cout << "\nSuch a Book is not Registered in the Database\n";}
        cout << "\nDo you want to Search Anymore Records(y/n) :"; cin >> ch1;
        if (ch1 == 'n'){cout << "Thank you using the Application";}
    }
}