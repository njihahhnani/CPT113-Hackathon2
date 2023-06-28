#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "linked_list.h"
#include "question.h"

using namespace std;

int main()
{
    bool isExit = false;
    fstream file;
    LinkedList<Question> *questions = new LinkedList<Question>;
    Question currentQuestion;

    file.open("game.txt", ios::in);

    if (file)
    {
        string line;

        while (getline(file, line))
        {
            LinkedList<string> *arguments = new LinkedList<string>;
            stringstream stream(line);

            while (stream.good())
            {
                string argument;
                getline(stream, argument, ';');
                arguments->add(argument);
            }

            questions->add(Question(arguments->at(0), arguments->at(1), arguments->at(2), stoi(arguments->at(3)), stoi(arguments->at(4))));
            delete arguments;
        }

        file.close();
    }
    else
    {
        return 1;
    }

    currentQuestion = questions->at(0);
    cout << "Welcome to Knight's Quest: The Enchanted Castle text-based game!" << endl;

    do
    {
        string choice;
        cout << endl;
        cout << currentQuestion.getQuestion() << endl;
        cout << "1) " << currentQuestion.getIfTrueText() << endl;
        cout << "2) " << currentQuestion.getIfFalseText() << endl;
        cout << "Please enter 1 or 2 only: ";
        cin >> choice;

        if (choice == "1")
        {
            if (currentQuestion.getIfTrue() != -1)
            {
                currentQuestion = questions->at(currentQuestion.getIfTrue());
            }
            else
            {
                isExit = true;
            }
        }
        else if (choice == "2")
        {
            if (currentQuestion.getIfFalse() != -1)
            {
                currentQuestion = questions->at(currentQuestion.getIfFalse());
            }
            else
            {
                isExit = true;
            }
        }
        else
        {
            cout << endl
                 << "Invalid choice!"
                 << endl;
        }
    } while (!isExit);

    cout << "Thank you for playing! Exiting..." << endl;
    delete questions;
    return 0;
}
