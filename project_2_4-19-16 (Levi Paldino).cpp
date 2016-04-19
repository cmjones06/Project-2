#include <iostream>

using namespace std;

/* Enter group names
    Group Project
    Project #2
    Various bar code readers
*/

int main(){

int input;

do{

    cout << "\nWhich bar code decoder would you like to use:  " << endl;
    cout << "Enter a  1 for the binary bar code reader, Enter a 2 for the Code 39 reader, Enter a 3 for the Code 48 reader, and enter a 0 to exit the program." << endl; // Program determine which reader will be used based on user input
    cout << "Please select a bar code reader: " << endl;
    cin >> input;

while (input != 0){

        if(input == 1){

        cout << "You are using the binary bar code reader.";

        int codebinary[21] = {};
        char binarycode[21] = {};
        int binCode;

        //Begin with the binary bar code reader
        //Reads a number, b ,indicating the number of bars in the code (an odd integer 1 <= b <= 21)
        cout << "\nPlease enter a number to indicate an the number of bars in the code that is an odd number between 1-21: "; // User inputs an odd number for program to read and use
        cin >> binCode;

        for(int i = 0; i < binCode; i++){

            cout << "\nPlease enter an n for a narrow bar or a w for a wide bar: ";
            cin >> binarycode[i];

            if (binarycode[i] == 'n')
            codebinary[i] = 0; // A narrow bar gets a value of 0.
            else if (binarycode[i] == 'w')
            codebinary[i] = 1; // A wide bar gets a value of 1.

            }

        cout << "The binary bar code is: " << endl;

        for (int i = 0; i <binCode; i++){
            cout << codebinary[i] << " ";
            }
            break;
        }
        else if(input == 2){
            cout << "You are using the Code 39 bar code reader.";

            //read in 9 characters, one at a time (w or n)
            //use int choose(int n,int k) and int factorial(int n)
            //determine if there are enough bars for narrow and wide
            //output decoded number or error message

            break;
            }
        else if(input == 3){
            cout << "You are using the Code 48 bar code reader.";
            break;
            }
        else{
            break;
            }

}

}while(input != 0);

cout << "Thank you for using the bar code reader! Come Again!" << endl;

 return 0;
}
