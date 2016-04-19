# include <iostream>

using namespace std;

int factorial (int); // Function prototype for a factorial function
int choose (int, int); // Function prototype for the ratio function

int main (){

int number;
int k;

cout << "Please input a number greater than 0 to get a factorial: " << endl;
cin >> number;
if (number < 0){ // Catches if user inputs a number less than 0.
        cout << "That is not greater than 0. Please input another number: ";
        cin >> number;
}
cout << "Great! Now input a k value: " << endl;
cin >> k;

cout << "The factorial of  the number is: " << factorial(number) << endl;
cout << "The ratio of the factorial is: " << choose(number , k) << endl;


return 0;
}

int factorial(int n){

	int factorialofnumber;

	if(n <= 1){

        return 1;
	}

	factorialofnumber = n * factorial(n - 1);
	return factorialofnumber;
}

int choose (int n, int k){

if (n >= k){
int ratioofnum; // will finally hold the answer of ratio
int temp = (n - k); // temporary variable that will hold n - k;

ratioofnum = ((factorial(n))/(factorial(k) * (factorial(temp))));

return ratioofnum;
}else{

return 0; // returns a zero if n < k.
}

}

