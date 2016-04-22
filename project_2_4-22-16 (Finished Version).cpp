#include <iostream>

using namespace std;

/*  Levi Paldino, Colleen Jones, Boris Tatic, David Bernard, Quincy Jones, Michael DeLuca
    Group Project
    Project #2
    Various bar code readers
*/

int main(){

int UserInput;
char BinaryCode[21] = {}; // Will hold the binary code characters that user enters
char Code39[9] = {}; // Will hold the Code 39 characters that user will enter
char Code48[8] = {}; // Will hold the Code 48 characters that user will enter

cout << "Welcome to the bar code reader!" << endl;

do{

    cout << "\nWhich bar code reader would you like to use:  " << endl;
    cout << "Enter a  1 for the binary bar code reader, Enter a 2 for the Code 39 reader, Enter a 3 for the Code 48 reader, and enter a 0 to exit the program." << endl; // Program determine which reader will be used based on user input
    cout << "Please select a bar code reader: " << endl;
    cin >> UserInput;

while (UserInput != 0){

        if(UserInput == 1){

        cout << "You are using the Binary Bar Code Reader." << endl;

        /* Starts a binary bar code reader that will output either a 1 for narrow (n) or a 0 for wide (w)
           User inputs an odd number between 1-21 and will input that number of characters
           Outputs an binary bar code
        */

        int CodeBinary[21] = {};
        int BarsInCode;

        cout << "Please enter a number to indicate an the number of bars in the code that is an odd number between 1-21: "; //User inputs an odd number for program to read and use
        cin >> BarsInCode;

        for(int i = 0; i < BarsInCode; i++){

            cout << "Please enter an n for a narrow bar or a w for a wide bar: ";
            cin >> BinaryCode[i];

            if (BinaryCode[i] == 'n')
            CodeBinary[i] = 0; // A narrow bar gets a value of 0.
            else if (BinaryCode[i] == 'w')
            CodeBinary[i] = 1; // A wide bar gets a value of 1.

            }

        cout << "The binary bar code is: " << endl;

        for (int i = 0; i <BarsInCode; i++){

            cout << CodeBinary[i] << " ";

            }

            break;

        }else if(UserInput == 2){

        cout << "You are using the Code 39 bar code reader." << endl;

            /* Reads in 9 characters, one at a time entered as wide (w) or narrow (n)
               Use int choose with factorial function
               Determine if there are enough bars, too few, or too many of a type of bar
               Output decoded number or error message
            */

        int x = 0; // Counts the number of wide bars
        int WideBars[3] = {}; // Array holding the position of the wide bars
        int j = 0; // Used to cycle through the array of wide bars

        cout << "\nPlease ensure that there are three wide bars entered, or an error message will appear." << endl;

        for(int i = 8; i >= 0; i--){

            cout << "\nPlease enter a 'n' for a narrow bar or a 'w' for a wide bar: ";
            cin >> Code39[i];

            if (Code39[i] == 'w'){
                WideBars[j] = i;
                x++; // Must equal 3 to continue program properly or gives an error message
                j++; // Cycles array to store positions of wide bars
            }
        }

            if (x == 3){
                int encode; // Encoding number
                int k = 4; // Used in choose function
                int choose (int, int);

                encode = (choose(WideBars[0], k) + choose(WideBars[1] , (k-1)) + choose(WideBars[2] , (k-2)));

                cout << "\nThe encoding number is: " << encode << endl;

                break;

            }else if (x < 3){

                cout << "\nThere are too few wide bars that were entered in the program." << endl;

                break;

            }else(x < 3);{

                cout << "\nThere are too many wide bars that were entered in the program." << endl;

                break;
            }

            break;

        }else if(UserInput == 3){

        cout << "You are using the Code 48 bar code reader." << endl;

            /* Reads in 8 characters that are entered as black (b) or white (w)
               Takes the black bars into the choose function
               Determines if there are too many or too few of one type of bar
               Outputs an error if necessary, or an encoding number
            */

        int x = 0; // Counts the number of black bars
        int BlackBars[4] = {}; // Array holding the position of the black bars
        int j = 0; // Used to cycle through the array of black bars

        cout << "\nPlease ensure that there are four black bars and four white bars, or an error message will appear." << endl;

        for(int i = 7; i >= 0; i--){

            cout << "\nPlease enter a 'b' for a black bar or a 'w' for a white bar: ";
            cin >> Code48[i];

            if (Code48[i] == 'b'){
                BlackBars[j] = i;
                x++; // Will eventually equal 4 or will get an error message
                j++; // Cycles through the array of black bars
            }
        }
            if (x == 4){
                int encode; // Encoding number
                int k = 4; // Used in choose function
                int choose (int, int);

                encode = (choose(BlackBars[0], k) + choose(BlackBars[1] , (k-1)) + choose(BlackBars[2] , (k-2)) + choose(BlackBars[3] , (k-3)));

                cout << "\nThe encoding number is: " << encode << endl;

                break;

            }else if (x < 4){

                cout << "\nThere are too few black bars that were entered in the program, ";
                cout << "and there are too many white bars entered. Please try again." << endl;

                break;

            }else(x < 4);{

                cout << "\nThere are too many black bars that were entered in the program, ";
                cout << "and there are too few white bars entered.  Please try again." << endl;

                break;
            }

        break;

    }else(UserInput == 0);{

        break;

    }

}

}while(UserInput != 0);

cout << "Thank you for using the bar code reader! Come Again!" << endl;

return 0;

}

int factorial(int n){

	int factorialofnum;

	if(n <= 1){

        return 1;
	}

	factorialofnum = n * factorial(n - 1);
	return factorialofnum;
}

int choose (int n, int k){

if (n >= k){
int e; // Will finally hold e value of an choose function
int temp = (n - k); // Temporary variable that will hold n - k;

e = ((factorial(n))/(factorial(k) * (factorial(temp))));

return e;

}else{

return 0; // Returns a zero if n < k.

    }

}
