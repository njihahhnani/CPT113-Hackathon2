#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

using namespace std;

template <class T>
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();

    void add(const T value);
    void addFront(const T value);
    void remove();
    void removeFront();
    void removeAt(const int index);

    void stackPush(const T value);
    void stackPop();

    void clear();
    void print();

    bool contains(const T value) const;
    bool isEmpty() const;

    int getSize() const;

    T at(const int index) const;

protected:
    struct Node
    {
        T *value;
        Node *next;
    };

    Node *head;
};

template <class T>
LinkedList<T>::LinkedList()
{
    head = new Node();
    head->value = NULL;
    head->next = NULL;
}

template <class T>
LinkedList<T>::~LinkedList()
{
    clear();
    delete head;
}

template <class T>
void LinkedList<T>::add(const T value)
{
    if (head->value != NULL)
    {
        Node *current = head;

        while (current->next != NULL)
        {
            current = current->next;
        }

        current->next = new Node();
        current->next->value = new T(value);
        current->next->next = NULL;
    }
    else
    {
        head->value = new T(value);
        head->next = NULL;
    }
}

template <class T>
void LinkedList<T>::addFront(const T value)
{
    if (head->value != NULL)
    {
        Node *node = new Node();

        node->value = new T(value);
        node->next = head;
        head = node;
    }
    else
    {
        head->value = new T(value);
        head->next = NULL;
    }
}

template <class T>
void LinkedList<T>::remove()
{
    removeAt(getSize() - 1);
}

template <class T>
void LinkedList<T>::removeFront()
{
    removeAt(0);
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
                    previous->next = next;
                else
                    head = current->next;

                delete current->value;
                delete current;
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
    addFront(value);
}

template <class T>
void LinkedList<T>::stackPop()
{
    removeFront();
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
            next = current->next;
            delete current->value;
            delete current;
            current = next;
        }

        head = new Node();
        head->value = NULL;
        head->next = NULL;
    }
}

template <class T>
void LinkedList<T>::print()
{
    Node *current = head;
    cout << "Values: ";

    while (current != NULL)
    {
        cout << *current->value << " ";
        current = current->next;
    }

    cout << endl;
}

template <class T>
bool LinkedList<T>::contains(const T value) const
{
    Node *current = head;

    while (current != NULL)
    {

        if (*current->value == value)
            return true;
        else
            current = current->next;
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
        size++;
        current = current->next;
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
            return *current->value;
        else
            currentIndex++;

        current = current->next;
    }

    return T();
}

#endif
