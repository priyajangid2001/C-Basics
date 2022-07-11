#include <iostream>
#include<fstream>
using namespace std;
int encrypt()
{
    fstream encrypt;
    encrypt.open("encrypt.txt", ios::in);
    char input;
    if (!encrypt)
    {
        cout << "No such file";
    }
    else
    {
        int key;
        cout << "key:";
        cin >> key;
        while (encrypt >> noskipws >> input)
        {
            int result =( key + input);
            cout << (char)result;
        }
    }
    encrypt.close();
    return 0;
}
 int decrypt()
 {
 fstream decrypt;
 fstream encrypt;
    encrypt.open("encrypt.txt", ios::in);
    decrypt.open("decrypt.txt", ios::out);
    char input;
    if (!encrypt)
    {
        cout << "No such file";
    }
    else
    {
        int key;
        cout << "key:";
        cin >> key;
        while (encrypt >> noskipws >> input)
        {
            int result =( key - input);
            cout << (char)result;
        }
    }
    decrypt.close();
    encrypt.close();

    return 0;
 }
int main()
{
    int n;
    cout << "enter 1 for encrypt 2 for decrypt";
    cin >> n;
    switch (n)
    {
    case 1:
        encrypt();
        break;
    case 2:
        decrypt();
        break;
    default:
        cout << "wrong choice";
        break;
    
    }
}