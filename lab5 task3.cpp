#include <iostream>
using namespace std;
#include <string>
class stringtype {
    string a;
    string b;

public:

    stringtype() {
        a = "Hello";
        b = "World";
    }
    stringtype(string y, string z) {
        a = y;
        b = z;

    }
    ~stringtype() {
        cout << endl << "Program ended!";
    }
    //wont need any parameters and wont need endl
    void copy(string source, string destination) {
        destination = source;
        cout << "The copied string is:" << destination;
        return;

    }

    void setvalues(string str1, string str2) {
        a = str1;
        b = str2;

    }
    void printvalues() {
        cout << "String 1 is '" << a << "' ." << endl;
        cout << "String 2 is '" << b << "' ." << endl;
    }

    int maxlength() {
        int l1 = 0, l2 = 0;

        for (int i = 0; a[i] != '\0'; i++) {
            l1++;
        }
        for (int i = 0; b[i] != '\0'; i++) {
            l2++;
        }
        if (l1 >= l2)
            return l1;
        else
            return l2;
    }
    void compare() {
        int k = 0;
        for (int i = 0; (a[i] != '/0' && b[i] != '/0'); i++) {
            if (a[i] != b[i]) {
                k = 1;
                break;
            }
        }
        if (k == 0) {
            cout << "Strings are equal." << endl;
        }
        else {
            cout << "The strings are not equal." << endl;
        }
    }
    void concatenate() {
        string result;
        cout << "The concatenated strng is: " << a + " " << b;

    }





    int searchChar(char ch) {
        int i = 0;
        while (a[i] != '\0') {
            if (a[i] == ch)
                cout << "Character found";
            else
                i++;
        }
        return 0;
    }
    int searchword(string word) {
        int i = 0, j = 0, k = 0, l = 0;
        while (a[i] != '\0' && word[j] != '\0')
        {
            if (word[j] != a[i])
            {
                i++;
                j = 0;
            }
            else
            {
                i++;
                j++;
            }
        }
        while (b[k] != '\0' && word[l] != '\0')
        {
            if (word[l] != b[k])
            {
                k++;
                l = 0;
            }
            else
            {
                k++;
                l++;
            }
        }
        if (word[j] == '\0' || word[l] == '\0')
            return 1;
        else
            return 0;
    }
};

int main()
{
    stringtype t;
    int opt;

    string first, second, word, character;

    cout << "\nMENU" << endl
        << "1-setvalues\n"
        << "2-print values\n"
        << "3-Find maximum length\n"
        << "4-compare two strings\n"
        << "5-concatenate two strings\n"
        << "6-Search word\n"
        << "7-search character\n"
        << "0-Exit\n";
    cin >> opt;
    switch (opt)
    {
    case 1:
    {
        cout << "Enter the first string: ";
        cin >> first;
        cout << endl;
        cout << "Enter the second string: ";
        cin >> second;
        //getline(cin, second);
        cout << endl;
        t.setvalues(first, second);
        break;
    }

    case 2:
    {
        t.printvalues();
        break;
    }

case3: {
    cout << "The maximum length out of the two strings is: " << t.maxlength();
    break;
    }

    case 4: {
        t.compare();
        break;
    }
    case 5: {
        t.concatenate();
        break;
    }

    case 6: {

        string a;
        cout << "Enter a word to search: ";
        cin >> a;
        if (t.searchword(a) == 1)
            cout << "The word does Exist in one of the strings.";
        else
            cout << "The word does not exist in either of the strings.";
        break;
    }


    case 7: {
        char ch;
        cout << "Enter the character you want to search for in the string:";
        cin >> ch;
        if (t.searchChar(ch) == 1)
            cout << "The character has been found!" << endl;
        else
            cout << "The character is not in the string!" << endl;
        break;
    }





    case 0: {
        cout << "Exited";
        break;
    }
    }
}
