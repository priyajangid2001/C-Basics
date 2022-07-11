#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new_file_write.txt", ios::in);
    string tp;
    if (!new_file)
    {
        cout << "No such file";
    }
    else
    {
        int n, res_ind = 0;
        ;

        while (getline(new_file, tp))
        {

int count=0;
            n = tp.length();
            for (int i = 0; i < n; i++)
            {
                if (tp[i] == ' ')
                { 
                    count++;
                    tp[i + 1] = toupper(tp[i + 1]);
                    continue;
                }
                else
                {
                    tp[res_ind++] = tp[i];
                }
            }
            tp[0] = tolower(tp[0]);
            for(int i=0;i<n-count;i++)
            cout << tp[i];
        }
    }


new_file.close();
return 0;
}
