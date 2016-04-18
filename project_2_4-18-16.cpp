#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

int main()
{
    cout << "first begin by reading an integer." << endl ;
    cout << "1=binary bar code, 2=code 39, 3=code 48, and 0=quit program" << endl;
    cout << "User will input a number 0-3, program will determine which decoder it is" << endl;

    int input;
    string arr;
    char temp;
    int codebinary[21] = {};

    cout << "Please enter an integer from 0-3: ";
    cin >> input;

    while (input >= 0 && input <= 3)
    {
        if(input == 1)
        {
            cout << "binary bar code";
            //begin with the binary bar code reader
            //Read a number b indicating the number of bars in the code (an odd integer 1 <= b <= 21)
            int binCode;
            cout << "\nPlease enter a number to indicate the number of bars in the code (1-21): ";
            cin >> binCode;


            cout << "\nPlease enter an n or a narrow bar or a w for a wide bar: " << endl;
            for(int i = 0; i < binCode; i++)
            {
                cin >> temp;
                //arr.append(&temp); //takes character (temp) and puts at the end of the string (arr)
                arr = arr[temp];


                if (temp == 'n')
                   (//cout << "narrow\n";
                   //cout << "0" << endl
                   codebinary[i] = 0);
                else if (temp == 'w')
                    (//cout << "wide\n";
                    //cout << "1" << endl
                    codebinary[i] = 1);
            }

        for (int i = 0; i <binCode; i++){
                cout << codebinary[i] << " ";
        }

            break;
            }

        else if(input == 2)
            {cout << "code 39";

            //read in 9 characters, one at a time (w or n)
            //use int choose(int n,int k) and int factorial(int n)
            //determine if there are enough bars for narrow and wide
            //output decoded number or error message

            break;
            }

        else if(input == 3)
            {cout << "code 48";
            break;
            }
        else
            break;

    }


 return 0;
}
