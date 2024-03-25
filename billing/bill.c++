
#include<iostream>
#include<fstream>
#include<sstream>
#include<windows.h>
using namespace std;

class Bill {
private:
    string item;
    int rate, quantity;

public:
    Bill() : item(""), rate(0), quantity(0) {}

   
    void setItem(string Item) {
        item = Item;
    }

    void setRate(int Rate) {
        rate = Rate;
    }

    void setQuantity(int Quantity) {
        quantity = Quantity;
    }

     string getItem()  {
        return item;
    }

    int getRate()  {
        return rate;
    }

    int getQuantity()  {
        return quantity;
    }
};
void additem(Bill &b) {
    bool close = false;
    while (!close) {
        int choice;
        cout << "\t1 ADD" << endl;
        cout << "\t2 CLOSE" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string item;
            int rate, quant;
            cout << "Enter item name: ";
            cin >> item;
            b.setItem(item);

            cout << "Enter rate of item: ";
            cin >> rate;
            b.setRate(rate);

            cout << "Enter quantity of item: ";
            cin >> quant;
            b.setQuantity(quant);

     ofstream out("/MCA/dsa/projectc++/Bill.txt", ios::app);
            if (!out) {
                cout << "File can't be opened" << endl;
            } else {
                out << "\t" << b.getItem() << ":" << b.getRate() << ":" << b.getQuantity() << endl;
            }
            out.close();
            cout << "\tItem added successfully" << endl;
            Sleep(3000);
        } else if (choice == 2) {
            close = true;
            cout << "\tBack to main menu!!" << endl;
            Sleep(3000);
        }
    }
}
void printbill(Bill &b) {
    bool close = false;
    while (!close) {
        int choice;
        cout << "\t1 PRINT BILL" << endl;
        cout << "\t2 CLOSE Session" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            ifstream in("/MCA/dsa/projectc++/Bill.txt"); // Ensure this path is correct
            if (!in) {
                cout << "File can't be opened" << endl;
                return;
            }
            string line;
            cout << "\nItem\t\tRate\tQuantity\tAmount\n";
            cout << "--------------------------------------------------\n";

            while (getline(in, line)) {
                stringstream ss(line);
                string itemname;
                int itemrate, itemquant;
                getline(ss, itemname, ':'); // Correctly parse the item name
                ss >> itemrate;
                ss.ignore(); // Ignore the colon delimiter
                ss >> itemquant;

                cout << itemname << "\t\t" << itemrate << "\t" << itemquant << "\t\t" << (itemrate * itemquant) << endl;
            }
            in.close();
        } else if (choice == 2) {
            close = true;
            cout << "\tSession closed\n";
        }
    }
}
int main() {
    Bill b;
    bool exit = false;

    while (!exit) {
        system("cls");
        int val;
        cout << "\tWELCOME TO SUPER MARKET BILLING SYSTEM" << endl;
        cout << "\t************************" << endl;
        cout << "\t1. ADD ITEM" << endl;
        cout << "\t2. PRINT BILL" << endl; 
        cout<<"\t2.Discounts and Offers"<<endl;
        cout<<"\t2 User Authentication"<<endl;
        cout << "\t3. EXIT" << endl;
        cout << "\tEnter your choice: ";
        cin >> val;

        switch (val) {
            case 1:
              additem(b);
              break;

             case 2:
                 printbill(b);
                 break;
              case 3:
                exit = true;
                cout << "Exiting program." << endl;
                break;

              default:
                cout << "Invalid option. Please try again." << endl;
                break;
        
        }
    }
    return 0;
}
