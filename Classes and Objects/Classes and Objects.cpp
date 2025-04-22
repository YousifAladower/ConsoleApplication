#include <iostream>
#include <string>
using namespace std;
class clsPerson
{
	//this private and will not be accessed from outside the class
		//for internal use only int x;
public:
	string FirstName;
	string LastName;
	string FullName()
	{
		return FirstName + " " + LastName;
	}
};
class clsCalculator
{
private:
	int x=0;
	
public:

    int Add(int value)
    {
        x += value; // Update the private member x
        Result("Add");
        return x;
    }

    int multiply(int value)
    {
        x *= value; // Update the private member x
        Result("Multiply");
        return x;
    }

    int divide(int value)
    {
        if (value != 0) // Avoid division by zero
        {
            x /= value; // Update the private member x
            Result("Divide");
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        return x;
    }

    int subtract(int value)
    {
        x -= value; // Update the private member x
        Result("Subtract");
        return x;
    }

    int clear()
    {
        x = 0; // Reset x to 0
        Result("Clear");
        return x;
    }

    void Result(string funName)
    {
        cout << "\nThe result after " << funName << " is: " << x << endl;
    }

	
};
int main()
{

    clsCalculator calc;

    calc.Add(10);       // Adds 10 to x and prints the result
    calc.multiply(2);   // Multiplies x by 2 and prints the result
    calc.subtract(5);   // Subtracts 5 from x and prints the result
    calc.divide(3);     // Divides x by 3 and prints the result
    calc.clear();       // Resets x to 0 and prints the result

    system("pause>0");
    return 0;
	/*clsPerson Person1;
	Person1.FirstName = "Mohammed";
	Person1.LastName = "Abu-Hadhoud";
	cout << Person1.FullName() << endl;
	string S1;*/
}