#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

using namespace std;

template <class T>
class LinkedList
{
public:
    LinkedList(); // Constructor
    ~LinkedList(); // Destructor

    void add(const T value); // Add a value to the end of the list
    void addFront(const T value); // Add a value to the front of the list
    void remove(); // Remove the last value from the list
    void removeFront(); // Remove the first value from the list
    void removeAt(const int index); // Remove a value at the specified index

    void stackPush(const T value); // Push a value onto the stack (add to the front)
    void stackPop(); // Pop a value from the stack (remove from the front)

    void clear(); // Clear the entire list
    void print(); // Print the values in the list

    bool contains(const T value) const; // Check if the list contains a given value
    bool isEmpty() const; // Check if the list is empty

    int getSize() const; // Get the size of the list

    T at(const int index) const; // Get the value at the specified index

protected:
    struct Node // Definition of a Node
    {
        T *value; // Pointer to the stored value of type T
        Node *next; // Pointer to the next Node
    };

    Node *head; // Pointer to the head (first Node) of the list
};

template <class T>
LinkedList<T>::LinkedList()
{
    head = new Node(); // Create a new head Node
    head->value = NULL; // Set the value of the head Node to NULL
    head->next = NULL; // Set the next pointer of the head Node to NULL
}

template <class T>
LinkedList<T>::~LinkedList()
{
    clear(); // Call the clear function to deallocate memory
    delete head; // Delete the head Node
}

template <class T>
void LinkedList<T>::add(const T value)
{
    if (head->value != NULL)
    {
        Node *current = head;

        while (current->next != NULL)
        {
            current = current->next; // Traverse to the last Node
        }

        current->next = new Node(); // Create a new Node
        current->next->value = new T(value); // Set the value of the new Node
        current->next->next = NULL; // Set the next pointer of the new Node to NULL
    }
    else
    {
        head->value = new T(value); // Set the value of the head Node
        head->next = NULL; // Set the next pointer of the head Node to NULL
    }
}

template <class T>
void LinkedList<T>::addFront(const T value)
{
    if (head->value != NULL)
    {
        Node *node = new Node(); // Create a new Node

        node->value = new T(value); // Set the value of the new Node
        node->next = head; // Set the next pointer of the new Node to the current head Node
        head = node; // Set the new Node as the head Node
    }
    else
    {
        head->value = new T(value); // Set the value of the head Node
        head->next = NULL; // Set the next pointer of the head Node to NULL
    }
}

template <class T>
void LinkedList<T>::remove()
{
    removeAt(getSize() - 1); // Remove the last value by calling removeAt with the index of the last value
}

template <class T>
void LinkedList<T>::removeFront()
{
    removeAt(0); // Remove the first value by calling removeAt with index 0
}

template <class T>
void LinkedList<T>::removeAt(const int index)
{
    if (!isEmpty())
    {
        int currentIndex = 0;
        Node *previous = NULL;
        Node *current = head;
        Node *next = head->next;

        while (current != NULL)
        {
            if (currentIndex == index)
            {
                if (previous != NULL)
                    previous->next = next; // Adjust the next pointer of the previous Node
                else
                    head = current->next; // Update the head Node if the first Node is removed

                delete current->value; // Delete the value of the current Node
                delete current; // Delete the current Node
                break;
            }
            else
            {
                previous = current;
                current = current->next;
                next = current->next;
                currentIndex++;
            }
        }
    }
}

template <class T>
void LinkedList<T>::stackPush(const T value)
{
    addFront(value); // Push a value onto the stack by calling addFront
}

template <class T>
void LinkedList<T>::stackPop()
{
    removeFront(); // Pop a value from the stack by calling removeFront
}

template <class T>
void LinkedList<T>::clear()
{
    if (!isEmpty())
    {
        Node *current = head;
        Node *next = NULL;

        while (current != NULL)
        {
            next = current->next; // Store the next pointer before deleting the current Node
            delete current->value; // Delete the value of the current Node
            delete current; // Delete the current Node
            current = next; // Move to the next Node
        }

        head = new Node(); // Create a new head Node
        head->value = NULL; // Set the value of the head Node to NULL
        head->next = NULL; // Set the next pointer of the head Node to NULL
    }
}

template <class T>
void LinkedList<T>::print()
{
    Node *current = head;
    cout << "Values: ";

    while (current != NULL)
    {
        cout << *current->value << " "; // Print the value of the current Node
        current = current->next; // Move to the next Node
    }

    cout << endl;
}

template <class T>
bool LinkedList<T>::contains(const T value) const
{
    Node *current = head;

    while (current != NULL)
    {
        if (*current->value == value) // Compare the value of the current Node with the given value
            return true;
        else
            current = current->next; // Move to the next Node
    }

    return false;
}

template <class T>
bool LinkedList<T>::isEmpty() const
{
    if (getSize() == 0)
        return true;
    else
        return false;
}

template <class T>
int LinkedList<T>::getSize() const
{
    int size = 0;
    Node *current = head;

    while (current != NULL)
    {
        size++; // Increment the size
        current = current->next; // Move to the next Node
    }

    return size;
}

template <class T>
T LinkedList<T>::at(const int index) const
{
    int currentIndex = 0;
    Node *current = head;

    while (current != NULL)
    {
        if (currentIndex == index)
            return *current->value; // Return the value of the current Node at the specified index
        else
            currentIndex++;

        current = current->next; // Move to the next Node
    }

    return T();
}

#endif

