#include <iostream>
using namespace std;


int compute_check_digit(int arr[], int size) {
    int check_digit;
    
    int sum = 0;
    for (int i = size - 1; i >= 0; i = i - 2) {
        sum += arr[i];
    }
   


   
    sum *= 3;



    
    int sum2 = 0;
    for (int i = size - 2; i >= 0; i = i - 2) {
        sum2 += arr[i];
    }
    ;


   
    int sum3 = sum + sum2;
  



    check_digit = 10 - (sum3 % 10);
    if (sum3 % 10 == 0) 
        check_digit = 0;
    return check_digit;
}


int main()
{

    int choice;
    int i;
    int number_size = 0;
    int arr[17];

    do
    {
        cout << endl;
        cout << "---- Check Digit Calculator ----\n";
        cout << "1. EAN-8 \n" << "2. UPC-A \n" << "3. EAN-13 \n" << "4. EAN-14 \n" << "5. SSCC \n";
        cout << "Choose your product code type: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Please enter the first 7 digits!\n";
            number_size = 7;
        }

        else if (choice == 2)
        {
             cout << "Please enter the first 12 digits!\n";
            number_size = 11;
        }

        else if (choice == 3)
        {
            cout << "Please enter the first 12 digits!\n";
            number_size = 12;
        }

        else if (choice == 4)
        {
            cout << "Please enter the first 13 digits!\n";
            number_size = 13;
        }

        else if (choice == 5)
        {
            cout << "Please enter the first 17 digits!\n";
            number_size = 17;
        }

        else if (choice > 5)
        {
        cout << "Error:" << choice << "is an invalid option. Try again!\n";
        break;
        }

        for (i = 0; i < number_size; i++)
        {
            cin >> arr[i];
        }
        cout << endl;
        cout << "The check digit is: ";
        cout << compute_check_digit(arr, number_size) << endl;
        cout << "And the product code is: ";
        for (i = 0; i < number_size; i++)
        {
            cout << arr[i];
        }
        cout << compute_check_digit(arr, number_size) << endl;
    }

    while (choice <= 5);

    return 0;

}