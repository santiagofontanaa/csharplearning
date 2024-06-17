// Call system
using System;

// Create a block of code call HelloWorld
namespace HelloWorld
{

    // Crreate a Class call Program
    class Program
    {
        // This will be the principal Method
        static void Main(string[] args)
        {
            // GETTING THE NUMBERS
            Console.WriteLine("Write Number 1: ");
            int numberOne = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Write Number 2: ");
            int numberTwo = Convert.ToInt32(Console.ReadLine());

            // GETTING THE TYPE OF OPERATON
            Console.WriteLine("What kind of operation it will be: ");
            Console.WriteLine("[+] | [-] | [*] | [/]");
            string operationSelection = Convert.ToString(Console.ReadLine());

            // LOGIC OF EACH OPERATION
            if (operationSelection == "+")
            {
                // Creating a var int called selectionResult that will be numberOne (operation) numberTwo
                int selectionResult = numberOne + numberTwo;
                // Writing it on the console
                Console.WriteLine("RESULT: " + selectionResult);
            }
            else if (operationSelection == "-")
            {
                int selectionResult = numberTwo - numberOne;
                Console.WriteLine("RESULT: " + selectionResult);
            }
            else if (operationSelection == "*")
            {
                int selectionResult = numberTwo * numberOne;
                Console.WriteLine("RESULT: " + selectionResult);
            }
            else if (operationSelection == "/")
            {
                int selectionResult = numberOne / numberTwo;
                Console.WriteLine("RESULT: " + selectionResult);
            }
            else
            {
                // If the operationSelection is not + | - | * | / will send that is not a valid operation.
                Console.WriteLine(operationSelection + " IS NOT A VALID OPERATION");
            }
        }
    }
}
