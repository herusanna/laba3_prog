#include <iostream>
#include<string>
using namespace std;
int main()
{
    /*first level*/

    int size;
    char str[15];
    cout << "Input string:\n\n ";
    cin.getline(str, sizeof(str));
    size = strlen(str);
    cout <<"Size of array:  "<< size << endl;
    for (int i = 0; i < size; i++) {
    if(isalpha(str[i])){
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else
            str[i] = tolower(str[i]);
        cout << str[i];
    }
    }
    cout << endl;

     /*second level*/

    string words[] =  {"KEY", "Project", "KATHERINE", "kids", "Laboratory", "fantasy", "kitten"};
    cout << "\n\nGiven words:\n"; 
    for (string word : words)
    {
       cout << word<<"\t";
    }
    cout << "\n\nWords with a 'k' letter:\n";
    for(string word : words)
    {
        for(char k : word)
        {
            if (k=='k'|| k == 'K')
            {
                cout << word << "\t";
            }
        }
    }
    cout << endl;

    /*third level*/

    int n;
    char mass[16];
    char findMax='0';
    cout << "\nInput string:\n\n ";
    cin.getline(mass, sizeof(mass));
    n = strlen(mass);
    for (int i = 0; i < n; i++) {
        if (mass[i] >= '0' && mass[i] <= '9') {
            if (mass[i]>findMax)
            {
                findMax = mass[i];
            }   
        }
    }
     if (findMax == 0)
        cout << "There's no numbers " << findMax << endl;
    else
    cout <<"Max number: "<< findMax << endl;
    system("pause");
    return 0;
}
