#include <iostream>
using namespace std;

class parity 
{

private:
    int size = 0;
    int num;
    int* p = new int [size];

public:

    void put(int num);
    void print();
    void del(int num);
    int test();
    
};

void parity:: put(int num)
{
 
        size = size + 1;
        int* temp = new int[size];
        for (int i = 0; i < size - 1; i++)
        {
            temp[i] = p[i];
        }
        delete[] p;
        p = temp;
        p[size - 1] = num;
  
}

void parity::print()
{
    cout << "Total items are: " << endl<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<< p[i] << " ";
    }
}

void parity:: del(int num)
{
        size = size - 1;
        int* temp = new int[size];
        int count = 0;
        for (int i = 0; i < size + 1; i++) 
        {
            if (p[i] != num)
            {
                temp[count] = p[i];
                count++;
            }
        }
        delete[] p;
        p = temp;
    
}

int parity::test()
{
    if (size % 2 == 0)
    {
        return 1;
    }

    else 
    {
        return 0;
    }
}


int main()
{

    int d, num;
    parity pp;

    do
    {
        cout << "Hello!! What would you like to do??" <<endl<< endl;
        cout << "1. Add an item" << endl;
        cout << "2. Delete an item" << endl;
        cout << "3. Test an item" << endl;
        cout << "4. Print all items" << endl;
        cout << "5. Exit" << endl;
        cin >> d;

        if (d == 1)
        {
            cout << "Enter the number to add" << endl;
            cin >> num;
            pp.put(num);
        }

        else if (d == 2)
        {
            cout << "Enter the number to delete" << endl;
            cin >> num;
            pp.del(num);
        }

        else if (d == 3)
        {
            cout << "Enter the number to test" << endl;
            cin >> num;
            pp.test();
        }

        else if (d == 4)
        {
            pp.print();
        }

        else if (d == 5)
        {
            cout << "Bye bye..." << endl;
            break;
        }

        else cout << "Please enter a valid input" << endl;

    } while (d != 5);

    return 0;

}