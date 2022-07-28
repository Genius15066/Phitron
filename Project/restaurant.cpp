#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;
    Restaurant()
    {
        this->total_tax = 0;
    }

    void get_data(int n);
    void display(int n);
};

void Restaurant::get_data(int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> food_item_codes[i];
        cin.ignore();
        getline(cin, food_item_names[i]);
        cin >> food_item_prices[i];
    }
}

void Restaurant::display(int n)
{
    cout << "\t\tMake Bill" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Item Code"
         << "\t"
         << "Item Name"
         << "\t\t"
         << "   Item Price" << endl;

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << food_item_codes[i] << " \t\t" << food_item_names[i] << "\t\t" << food_item_prices[i] << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    Restaurant *r;
    r = new Restaurant();
    r->get_data(n);
    r->display(n);

loop:
    int l, t;
    cout << endl;
    cout << "Enter table no: ";
    cin >> t;
    cout << "Enter number of items: ";
    cin >> l;

    int item_codes[l], item_qty[l];
loop1:
    for (int i = 0; i < l; i++)
    {
        cout << "Enter item " << i + 1 << " code: ";
        cin >> item_codes[i];
        cout << "Enter item " << i + 1 << " quantity: ";
        cin >> item_qty[i];
    }

    // find item name and price
    string item_name[l];
    int item_price[l];

    for (int i = 0; i < l; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (item_codes[i] == r->food_item_codes[j])
            {
                item_name[i] = r->food_item_names[j];
                item_price[i] = r->food_item_prices[j];
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "You enter wrong code for food_item" << endl;
            goto loop1;
        }
    }

    // total price and tax;
    int total_price = 0;
    int total_tax = r->total_tax;
    for (int i = 0; i < l; i++)
    {
        total_price += item_qty[i] * item_price[i];
    }
    total_tax += round((total_price * 5) / 100);
    r->total_tax = total_tax;
    int total_bill = total_price + total_tax;

    cout << "\t\t\t\t\t\t Bill Summary" << endl;
    cout << "\t\t\t ------------------------------------------------------" << endl;
    cout << "Table No: " << t << endl;
    cout << endl;
    cout << "Item Code"
         << "\t"
         << "   Item Name"
         << "\t\t"
         << "    Item Price"
         << "\t\t"
         << "Item Quantity"
         << "\t\t"
         << "Total Price" << endl;
    for (int i = 0; i < l; i++)
    {
        cout << item_codes[i] << "\t\t" << item_name[i] << "\t\t" << item_price[i] << "\t\t     " << item_qty[i] << "\t\t\t   " << item_price[i] * item_qty[i] << endl;
    }
    cout << "TAX"
         << "\t\t\t\t\t\t\t\t\t\t\t    " << total_tax << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "NET  TOTAL"
         << "\t\t\t\t\t\t\t\t\t\t   " << total_bill << endl;
    goto loop;
}
