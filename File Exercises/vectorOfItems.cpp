#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Item {
private:
    string name;
    int price;
    int quantity;
public:

    // Constructor
    Item(){};
    Item(string n, int p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    friend ifstream &operator>> (ifstream &fis, Item &i);
    friend ofstream &operator<< (ofstream &fos, Item &i);
    friend ostream &operator<< (ostream &os, Item &i);
};

int main() {

    vector<Item *> list;
    int n, price, quantity;
    string name;

    cout << "How many items?: ";
    cin >> n;

    cout << "Enter all items: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i+1 << ". " << "item's name, price and quantity: "; 
        cin >> name >> price >> quantity;

        list.push_back(new Item(name, price, quantity));
    }

    ofstream fos("Items.txt");
    for (int i = 0; i < n; i++) {
        fos << *list[i];
    }

    Item item;
    ifstream fis("Items.txt");
    for (int i = 0; i < n; i++) {
        fis >> item;
        cout << "Item " << i+1 << ": " << item << endl;
    }

    for (int i = 0; i < n; i++) {
        delete list[i];
        list[i] = nullptr;
    }

    return 0;
}

ifstream &operator>> (ifstream &fis, Item &i) {
    fis >> i.name >> i.price >> i.quantity;
    return fis;
}

ofstream &operator<< (ofstream &fos, Item &i) {
    fos << i.name << endl << i.price << endl << i.quantity << endl;
    return fos;
}

ostream &operator<< (ostream &os, Item &i) {
    os << i.name << endl << "Price: " << i.price << "$" <<endl << "Quantity: " << i.quantity << endl;
    return os;
}