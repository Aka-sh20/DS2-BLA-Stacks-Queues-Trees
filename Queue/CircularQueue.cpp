#include <iostream>
using namespace std;

class CircularQueue
{

public:

    // Constructor
    CircularQueue()
    {
        start = 0;
        end = -1;
        count = 0;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return count == 0;
    }

    // Check if queue is full
    bool isFull()
    {
        return count == SIZE;
    }

    // Add a value to the queue
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow! Queue is full." << endl;
            return;
        }

        // Move rear forward
        // If it reaches the last index, it goes back to index 0
        end = (end + 1) % SIZE;

        arr[end] = value;
        count++;

        cout << value << " added to the queue." << endl;
    }

    // Remove a value from the queue
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Queue is empty." << endl;
            return;
        }

        cout << arr[start] << " removed from the queue." << endl;

        // Move front forward
        start = (start + 1) % SIZE;

        count--;
    }

    // Show the first value
    void showFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Front value is: " << arr[start] << endl;
    }

    // Show all values from front to rear
    void displayAll()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue elements from front to rear:" << endl;

        for (int i = 0; i < count; i++)
        {
            int index = (start + i) % SIZE;
            cout << arr[index] << " ";
        }

        cout << endl;

        cout << "Front index: " << start << endl;
        cout << "Rear index: " << end << endl;
    }

private:
    static const int SIZE = 5;

    int arr[SIZE];
    int start;
    int end;
    int count;

};


int main()
{
    CircularQueue q;

    int choice;
    int value;

    do
    {
        cout << endl;
        cout << "===== CIRCULAR QUEUE MENU =====" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Show Front" << endl;
        cout << "4. Display All" << endl;
        cout << "5. Check if Empty" << endl;
        cout << "6. Check if Full" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";

	if (!(cin >> choice))
	{
    		cout << "Invalid input. Please enter a number from 1 to 7." << endl;

    		cin.clear();
   		cin.ignore(1000, '\n');

    		choice = 0;
    		continue;
	}

        switch (choice)
        {
        case 1:
            cout << "Enter value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.showFront();
            break;

        case 4:
            q.displayAll();
            break;

        case 5:
            if (q.isEmpty())
                cout << "Queue is empty." << endl;
            else
                cout << "Queue is not empty." << endl;
            break;

        case 6:
            if (q.isFull())
                cout << "Queue is full." << endl;
            else
                cout << "Queue is not full." << endl;
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
