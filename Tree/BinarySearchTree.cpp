#include <iostream>
using namespace std;


// Only one class is used in this program
class Node
{
public:
    int data;
    Node* left;
    Node* right;


    // Constructor
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }


    // Check if a value already exists in the BST
    static bool valueExists(Node* root, int value)
    {
        if (root == nullptr)
        {
            return false;
        }

        if (value == root->data)
        {
            return true;
        }

        if (value < root->data)
        {
            return valueExists(root->left, value);
        }
        else
        {
            return valueExists(root->right, value);
        }
    }


    // Insert a value into the BST
    static Node* insert(Node* root, int value)
    {
        if (root == nullptr)
        {
            cout << value << " inserted into the BST." << endl;
            return new Node(value);
        }

        // Smaller value goes to the left
        if (value < root->data)
        {
            root->left = insert(root->left, value);
        }

        // Larger value goes to the right
        else if (value > root->data)
        {
            root->right = insert(root->right, value);
        }

        return root;
    }
	static void showRoot(Node* root)
	{
    		if (root == nullptr)
    		{
        		cout << "BST is empty." << endl;
        		return;
    		}

    		cout << "Root value is: " << root->data << endl;
	}

    // Inorder Traversal
    // LEFT -> ROOT -> RIGHT
    static void inorder(Node* root)
    {
        if (root == nullptr)
        {
            return;
        }

        inorder(root->left);

        cout << root->data << " ";

        inorder(root->right);
    }


    // Preorder Traversal
    // ROOT -> LEFT -> RIGHT
    static void preorder(Node* root)
    {
        if (root == nullptr)
        {
            return;
        }

        cout << root->data << " ";

        preorder(root->left);

        preorder(root->right);
    }


    // Postorder Traversal
    // LEFT -> RIGHT -> ROOT
    static void postorder(Node* root)
    {
        if (root == nullptr)
        {
            return;
        }

        postorder(root->left);

        postorder(root->right);

        cout << root->data << " ";
    }
};


// Show values before traversal
void showBeforeTraversal(int bstValues[], int bstCount)
{
    cout << "Before Traversal (BST insertion order):" << endl;

    for (int i = 0; i < bstCount; i++)
    {
        cout << bstValues[i] << " ";
    }

    cout << endl;
}


int main()
{
    Node* root = nullptr;

    const int MAX_VALUES = 50;

    // Stores every value typed by the user,
    // including duplicates
    int enteredValues[MAX_VALUES];
    int enteredCount = 0;

    // Stores only values successfully inserted
    // into the BST
    int bstValues[MAX_VALUES];
    int bstCount = 0;

    int choice;
    int value;


    do
    {
        cout << endl;
        cout << "===== BINARY SEARCH TREE MENU =====" << endl;
        cout << "1. Insert Value" << endl;
        cout << "2. Show All Entered Values" << endl;
        cout << "3. Show Root" << endl;
	cout << "4. Inorder Traversal" << endl;
        cout << "5. Preorder Traversal" << endl;
        cout << "6. Postorder Traversal" << endl;
        cout << "7. Show All Traversals" << endl;
        cout << "8. Exit" << endl;

        cout << "Enter your choice: ";


        // Protect program if user types a letter or symbol
        if (!(cin >> choice))
        {
            cout << "Invalid input. Please enter a number from 1 to 8."
                 << endl;

            cin.clear();
            cin.ignore(1000, '\n');

            choice = 0;
            continue;
        }


        switch (choice)
        {

        case 1:
        {
            cout << "Enter value to insert: ";


            // Check if value is a valid integer
            if (!(cin >> value))
            {
                cout << "Invalid value. Please enter an integer."
                     << endl;

                cin.clear();
                cin.ignore(1000, '\n');

                break;
            }


            // Save everything the user enters
            if (enteredCount < MAX_VALUES)
            {
                enteredValues[enteredCount] = value;
                enteredCount++;
            }


            // Check duplicate before inserting
            if (Node::valueExists(root, value))
            {
                cout << value
                     << " is a duplicate value. It was not inserted."
                     << endl;

                break;
            }


            // Insert value into BST
            root = Node::insert(root, value);


            // Save successful insertion order
            if (bstCount < MAX_VALUES)
            {
                bstValues[bstCount] = value;
                bstCount++;
            }


            break;
        }


        case 2:
        {
            if (enteredCount == 0)
            {
                cout << "No values have been entered yet." << endl;
                break;
            }

            cout << "All values entered by the user:" << endl;

            for (int i = 0; i < enteredCount; i++)
            {
                cout << enteredValues[i] << " ";
            }

            cout << endl;

            break;
        }

	case 3:
	{
    		Node::showRoot(root);
    		break;
	}
        
	case 4:
        {
            if (root == nullptr)
            {
                cout << "BST is empty." << endl;
                break;
            }

            cout << endl;

            showBeforeTraversal(bstValues, bstCount);

            cout << "After Inorder Traversal:" << endl;

            Node::inorder(root);

            cout << endl;

            break;
        }


        case 5:
        {
            if (root == nullptr)
            {
                cout << "BST is empty." << endl;
                break;
            }

            cout << endl;

            showBeforeTraversal(bstValues, bstCount);

            cout << "After Preorder Traversal:" << endl;

            Node::preorder(root);

            cout << endl;

            break;
        }


        case 6:
        {
            if (root == nullptr)
            {
                cout << "BST is empty." << endl;
                break;
            }

            cout << endl;

            showBeforeTraversal(bstValues, bstCount);

            cout << "After Postorder Traversal:" << endl;

            Node::postorder(root);

            cout << endl;

            break;
        }


        case 7:
        {
            if (root == nullptr)
            {
                cout << "BST is empty." << endl;
                break;
            }

            cout << endl;

            showBeforeTraversal(bstValues, bstCount);

            cout << endl;

            cout << "After Inorder Traversal:" << endl;
            Node::inorder(root);
            cout << endl;

            cout << endl;

            cout << "After Preorder Traversal:" << endl;
            Node::preorder(root);
            cout << endl;

            cout << endl;

            cout << "After Postorder Traversal:" << endl;
            Node::postorder(root);
            cout << endl;

            break;
        }


        case 8:
        {
            cout << "Program ended." << endl;
            break;
        }


        default:
        {
            cout << "Invalid choice. Please select 1 to 8."
                 << endl;
        }

        }


    } while (choice != 8);


    return 0;
}
