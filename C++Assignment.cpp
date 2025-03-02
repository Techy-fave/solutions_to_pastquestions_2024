#include <iostream>
#include <string>
using namespace std;

// Class to hold all the methods for the questions
class U22CS1098 {
public:
    // Question 2a: Check if a number is prime
    void checkPrime() {
        int num;
        bool isPrime = true;

        cout << "Enter a number to check if it is prime: ";
        cin >> num;

        // Edge case: 1 is not a prime number
        if (num <= 1) {
            isPrime = false;
        } else {
            // Check divisibility from 2 to sqrt(num)
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << num << " is a prime number.\n\n";
        } else {
            cout << num << " is not a prime number.\n\n";
        }
    }

    // Question 2b: Sum of array elements
    void sumOfArrayElements() {
        int size;
        cout << "Enter the number of elements in the array: ";
        cin >> size;

        int arr[size];
        int sum = 0;

        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element " << i << ": ";
            cin >> arr[i];
            sum += arr[i];
        }

        cout << "Sum of all elements: " << sum << "\n\n";
    }

    // Question 3a: Bubble Sort
    void bubbleSort() {
        int size;
        cout << "Enter the number of elements to sort: ";
        cin >> size;

        int arr[size];
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element " << i << ": ";
            cin >> arr[i];
        }

        // Bubble Sort Algorithm
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "Sorted array:\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << "\n";
        }
        cout << "\n";
    }

    // Question 3b: Sum and average of 10 numbers
    void sumAndAverage() {
        int numbers[10];
        int sum = 0;
        float average;

        cout << "Enter 10 numbers:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Number " << i + 1 << ": ";
            cin >> numbers[i];
            sum += numbers[i];
        }

        average = static_cast<float>(sum) / 10;
        cout << "Sum: " << sum << "\n";
        cout << "Average: " << average << "\n\n";
    }

    // Question 4a: Compute length of a string
    void computeStringLength() {
        string input;
        cout << "Enter a string: ";
        cin.ignore(); // Clear input buffer
        getline(cin, input);

        int length = 0;
        while (input[length] != '\0') {
            length++;
        }

        cout << "The length of the string '" << input << "' is " << length << ".\n\n";
    }

    // Question 4b: Linear Search
    int linearSearch(int arr[], int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i + 1; // Return position (1-based index)
            }
        }
        return -1; // Return -1 if not found
    }

    // Question 5a: Add two numbers using pointers
    int addWithPointers() {
        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        int *ptr1 = &num1, *ptr2 = &num2;
        return *ptr1 + *ptr2;
    }

    // Question 5b: Check if a number is a palindrome
    string checkPalindrome() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        string numStr = to_string(num);
        int length = numStr.length();
        bool isPalindrome = true;

        for (int i = 0; i < length / 2; i++) {
            if (numStr[i] != numStr[length - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            return "The number is a palindrome.\n\n";
        } else {
            return "The number is not a palindrome.\n\n";
        }
    }

    // Question 6a: Student structure
    struct Student {
        string name;
        int age;
        float totalMarks;
    };

    void studentInfo() {
        Student students[2];
        float totalMarksSum = 0;

        cout << "Enter details for 2 students:\n";
        for (int i = 0; i < 2; i++) {
            cout << "Student " << i + 1 << ":\n";
            cout << "Name: ";
            cin >> students[i].name;
            cout << "Age: ";
            cin >> students[i].age;
            cout << "Total Marks: ";
            cin >> students[i].totalMarks;
            totalMarksSum += students[i].totalMarks;
        }

        cout << "\nStudent Details:\n";
        for (int i = 0; i < 2; i++) {
            cout << "Student " << i + 1 << ": " << students[i].name << ", " << students[i].age << " years, " << students[i].totalMarks << " marks\n";
        }

        cout << "Average Total Marks: " << totalMarksSum / 2 << "\n\n";
    }

    // Question 6b: Check number type
    void checkNumberType() {
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num == 0) {
            cout << "Zero\n\n";
        } else {
            string sign = (num > 0) ? "positive" : "negative";
            string type = (num % 2 == 0) ? "even" : "odd";
            cout << "Number is " << sign << "-" << type << ".\n\n";
        }
    }
};

int main() {
    U22CS1098 solutions;

    // Call methods for each question
    cout << "Question 2a: Prime Number Check\n";
    solutions.checkPrime();

    cout << "Question 2b: Sum of Array Elements\n";
    solutions.sumOfArrayElements();

    cout << "Question 3a: Bubble Sort\n";
    solutions.bubbleSort();

    cout << "Question 3b: Sum and Average of 10 Numbers\n";
    solutions.sumAndAverage();

    cout << "Question 4a: String Length\n";
    solutions.computeStringLength();

    cout << "Question 4b: Linear Search\n";
    int arr[] = {23, 60, 90, 50, 20, 55, 100, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    int position = solutions.linearSearch(arr, size, target);
    if (position != -1) {
        cout << "Target found at position: " << position << "\n\n";
    } else {
        cout << "Target not found.\n\n";
    }

    cout << "Question 5a: Add Two Numbers Using Pointers\n";
    int sum = solutions.addWithPointers();
    cout << "Sum: " << sum << "\n\n";

    cout << "Question 5b: Palindrome Check\n";
    cout << solutions.checkPalindrome();

    cout << "Question 6a: Student Information\n";
    solutions.studentInfo();

    cout << "Question 6b: Number Type Check\n";
    solutions.checkNumberType();

    return 0;
}