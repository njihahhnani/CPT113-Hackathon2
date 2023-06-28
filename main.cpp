#include <fstream>             // Include the necessary libraries and header files
#include <iostream>
#include <sstream>
#include <string>
#include "linked_list.h"
#include "question.h"

using namespace std;

int main()
{
    bool isExit = false;        // Flag to control the game loop
    fstream file;               // File stream object
    LinkedList<Question> *questions = new LinkedList<Question>;  // Linked list to store questions
    Question currentQuestion;   // Current question object

    file.open("game.txt", ios::in);   // Open the file "game.txt" for reading

    if (file)   // If the file is successfully opened
    {
        string line;

        while (getline(file, line))   // Read each line of the file
        {
            LinkedList<string> *arguments = new LinkedList<string>;   // Linked list to store arguments
            stringstream stream(line);   // Create a string stream to split the line

            while (stream.good())   // Split the line using the delimiter ';'
            {
                string argument;
                getline(stream, argument, ';');
                arguments->add(argument);   // Add each argument to the list
            }

            questions->add(Question(arguments->at(0), arguments->at(1), arguments->at(2), stoi(arguments->at(3)), stoi(arguments->at(4))));
            // Create a new Question object using the arguments and add it to the questions list
            delete arguments;   // Free the memory for the arguments list
        }

        file.close();   // Close the file
    }
    else
    {
        return 1;   // If the file fails to open, return an error code
    }

    currentQuestion = questions->at(0);   // Set the current question to the first question in the list
    cout << "Welcome to Knight's Quest!" << endl;

    do
    {
        string choice;
        cout << endl;
        cout << currentQuestion.getQuestion() << endl;   // Display the current question
        cout << "1) " << currentQuestion.getIfTrueText() << endl;
        cout << "2) " << currentQuestion.getIfFalseText() << endl;
        cout << "Please enter 1 or 2 only: ";
        cin >> choice;

        if (choice == "1")
        {
            if (currentQuestion.getIfTrue() != -1)   // If there is a valid "if true" question
            {
                currentQuestion = questions->at(currentQuestion.getIfTrue());   // Move to the "if true" question
            }
            else
            {
                isExit = true;   // If there is no valid "if true" question, exit the game
            }
        }
        else if (choice == "2")
        {
            if (currentQuestion.getIfFalse() != -1)   // If there is a valid "if false" question
            {
                currentQuestion = questions->at(currentQuestion.getIfFalse());   // Move to the "if false" question
            }
            else
            {
                isExit = true;   // If there is no valid "if false" question, exit the game
            }
        }
        else
        {
            cout << endl << "Invalid choice!" << endl;   // Display an error message for invalid input
        }
    } while (!isExit);   // Repeat the game loop until the exit flag is set

    cout << "Thank you for playing! Exiting..." << endl;
    delete questions;   // Free the memory for the questions
    return 0;
}
