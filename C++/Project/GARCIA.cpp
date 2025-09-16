#include <iostream>
using namespace std;

// lab 3

int main()
{
    int size;
    cout << "Enter the size of the list: ";
    cin >> size;

    int list[size];
    int count;

    cout << "Enter the number of initial elements (<= " << size << "): ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> list[i];
    }

    int choice;
    do
    {
        cout << "\n---- MENU ----\n";
        cout << "1. Insert element\n";
        cout << "2. Delete element\n";
        cout << "3. Check if list is empty\n";
        cout << "4. Check if list is full\n";
        cout << "5. Print list\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (count == size)
            {
                cout << "List is full. Cannot insert.\n";
            }
            else
            {
                int x, p;
                cout << "Enter element to insert: ";
                cin >> x;
                cout << "Enter position (0 to " << count << "): ";
                cin >> p;

                if (p < 0 || p > count)
                {
                    cout << "Invalid position.\n";
                }
                else
                {
                    for (int i = count; i > p; i--)
                    {
                        list[i] = list[i - 1];
                    }
                    list[p] = x;
                    count++;
                    cout << "Element inserted.\n";
                }
            }
        }

        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "List is empty. Cannot delete.\n";
            }
            else
            {
                int p;
                cout << "Enter position to delete (0 to " << count - 1 << "): ";
                cin >> p;

                if (p < 0 || p >= count)
                {
                    cout << "Invalid position.\n";
                }
                else
                {
                    for (int i = p; i < count - 1; i++)
                    {
                        list[i] = list[i + 1];
                    }
                    count--;
                    cout << "Element deleted.\n";
                }
            }
        }

        else if (choice == 3)
        {
            if (count == 0)
                cout << "List is empty.\n";
            else
                cout << "List is not empty.\n";
        }

        else if (choice == 4)
        {
            if (count == size)
                cout << "List is full.\n";
            else
                cout << "List is not full.\n";
        }

        else if (choice == 5)
        {
            if (count == 0)
            {
                cout << "List is empty.\n";
            }
            else
            {
                cout << "List contents: ";
                for (int i = 0; i < count; i++)
                {
                    cout << list[i] << " ";
                }
                cout << "\n";
            }
        }

        else if (choice == 6)
        {
            cout << "Exiting program.\n";
        }

        else
        {
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
