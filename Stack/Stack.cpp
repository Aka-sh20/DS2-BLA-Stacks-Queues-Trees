#include <iostream>
using namespace std;

class Stack
{
private:
    static const int SIZE = 5;
    int arr[SIZE];
    int top;

public:

    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == SIZE - 1;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack Overflow! Stack is full." << endl;
            return;
        }

        top++;
        arr[top] = value;

        cout << value << " pushed into stack." << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow! Stack is empty." << endl;
            return;
        }

        cout << arr[top] << " removed from stack." << endl;
        top--;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Top value is: " << arr[top] << endl;
    }

    void displayAll()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack elements from top to bottom:" << endl;

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s;

    int choice;
    int value;

    do
    {
        cout << endl;
        cout << "===== STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display All" << endl;
        cout << "5. Check if Empty" << endl;
        cout << "6. Check if Full" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.displayAll();
            break;

        case 5:
            if (s.isEmpty())
                cout << "Stack is empty." << endl;
            else
                cout << "Stack is not empty." << endl;
            break;

        case 6:
            if (s.isFull())
                cout << "Stack is full." << endl;
            else
                cout << "Stack is not full." << endl;
            break;

        case 7:
            cout << "Program ended." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 7);

    return 0;
}
