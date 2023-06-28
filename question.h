#ifndef QUESTION_H
#define QUESTION_H

#include <string>

using namespace std;

class Question
{
public:
    Question(); // Constructor declaration
    Question(string question, string ifTrueText, string ifFalseText, int ifTrue, int ifFalse); // Constructor declaration with parameters
    string getQuestion(); // declares a member function that returns the question
    string getIfTrueText(); // declares a member function that returns the "if true" choice
    string getIfFalseText(); // declares a member function that returns the "if false" choice
    int getIfTrue(); //declares a member function that returns the "if true" question
    int getIfFalse(); // declares a member function that returns the "if false" question

private://declares a private member variable
    string question; // declares variable to store the question
    string ifTrueText; // declares variable to store the text for the "if true" choice
    string ifFalseText; // declares a private member variable to store the text for the "if false" choice
    int ifTrue; // declares a private member variable to store the index of the "if true" question
    int ifFalse; // declares a privatee member variable to store the index of the "if false" question
};

Question::Question()
{
    
}

Question::Question(string question, string ifTrueText, string ifFalseText, int ifTrue, int ifFalse)
{
  
    this->question = question; // assign the value of the question member variable
    this->ifTrueText = ifTrueText; // assign the value of the ifTrueText member variable
    this->ifFalseText = ifFalseText; // assign the value of the ifFalseText member variable
    this->ifTrue = ifTrue; // assign the value of the ifTrue member variable
    this->ifFalse = ifFalse; // assign the value of the ifFalse member variable
}

string Question::getQuestion()
//the definition of the getQuestion() member function of the Question class
{
    return question; // Return the value of the question member variable
}

string Question::getIfTrueText()
//the definition of the getIfTrueText() member function of the Question class
{
    return ifTrueText; // Return the value of the ifTrueText member variable
}

string Question::getIfFalseText()
//the definition of the getIfFalseText() member function of the Question class

{
    return ifFalseText; // Return the value of the ifFalseText member variable
}

int Question::getIfTrue()
//the definition of the getIfTrue() member function of the Question class
{
    return ifTrue; // Return the value of the ifTrue member variable
}

int Question::getIfFalse()
//the definition of the getIfFalse() member function of the Question class
{
    return ifFalse; // Return the value of the ifFalse member variable
}

#endif
