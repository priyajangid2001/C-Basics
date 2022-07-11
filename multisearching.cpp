// multi  searching from a text file
// search line,word,letter  from a paragraph
//   e.g:- text file is
// The endless source of knowledge, information, entertainment, and training are books.  Before the age of the internet, books were the most dominating source of knowledge.
// line to be search is -" Before the age" ;

// output should be
// it is present at index 85

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new_file_write.txt", ios::in);
    string input; // string read from the text file new_file_write
    if (!new_file)
    {
        cout << "No such file";
    }
    else
    {
        int n, m;
        string search; // string to be searched from the text file
        int index;

        cout << "enter the word to be searched";
        getline(cin, search);
        m = search.length(); // length of search string
        n = input.length();  // // length of input string
        while (getline(new_file, input))
        {
            int i, j;
            // cout<<tp;
            // cout<<search;

            for (i = 0; input[i] != '\0'; i++)
            // search till the end of file
            {
                for (j = 0; search[j] != '\0'; j++)

                {
                    if (search[j] != input[i + j])
                    {

                        break;
                    }
                }
                if (j == m)

                {
                    cout << "it is present at index" << i + 1 << endl;
                }
            }
        }
    }

    new_file.close();
    return 0;
}
