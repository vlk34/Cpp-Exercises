#include <iostream>
#include <fstream>

using namespace std;

class Item {
private: 
    string name;
    float price;
    int qty;

public:
    Item(){}
    Item(string n, float p, int q) {
        name = n;
        price = p;
        qty = q;
    }

    friend ifstream &operator>> (ifstream &fis, Item &i);
    friend ofstream &operator<< (ofstream &fos, Item &i);
    friend ostream &operator<< (ostream &os, Item &i);
};

int main() {

    int n;
    string name;
    float price;
    int qty;

    cout << "Enter number of Item: ";
    cin >> n;

    Item *list[n];

    cout << "Enter All Items: " << endl;
    for (int i = 0; i < n; i++) {

        cout << "Enter " << i+1 << ". item's name, price and quantity: ";
        cin >> name >> price >> qty;

        list[i] = new Item(name, price, qty);
    }

    cout << endl;

    ofstream fos("Items.txt");
    for (int i = 0; i < n; i++) {
        fos << *list[i];
    }

    Item item;
    ifstream fis("Items.txt");
    for (int i = 0; i < 3; i++) {
        fis >> item;
        cout << "Item " << i+1 << ". "<< item << endl;
    }

    for (int i = 0; i < n; i++) {
        delete list[i];
        list[i] = nullptr;
    }

    return 0;
}

ifstream &operator>> (ifstream &fis, Item &i) {
    fis >> i.name >> i.price >> i.qty;
    return fis;
}

ofstream &operator<< (ofstream &fos, Item &i) {
    fos << i.name << endl << i.price << endl << i.qty << endl;
    return fos;
}

ostream &operator<< (ostream &os, Item &i) {
    os << i.name << endl << "Price: " << i.price <<"$"<< endl << "Quantity: " << i.qty << endl;
    return os;
} 