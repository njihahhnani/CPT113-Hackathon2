#ifndef QUESTION_H
#define QUESTION_H

#include <string>

using namespace std;

class Question
{
public:
    Question();
    Question(string question, string ifTrueText, string ifFalseText, int ifTrue, int ifFalse);
    string getQuestion();
    string getIfTrueText();
    string getIfFalseText();
    int getIfTrue();
    int getIfFalse();

private:
    string question;
    string ifTrueText;
    string ifFalseText;
    int ifTrue;
    int ifFalse;
};

Question::Question()
{
}

Question::Question(string question, string ifTrueText, string ifFalseText, int ifTrue, int ifFalse)
{
    this->question = question;
    this->ifTrueText = ifTrueText;
    this->ifFalseText = ifFalseText;
    this->ifTrue = ifTrue;
    this->ifFalse = ifFalse;
}

string Question::getQuestion()
{
    return question;
}

string Question::getIfTrueText()
{
    return ifTrueText;
}

string Question::getIfFalseText()
{
    return ifFalseText;
}

int Question::getIfTrue()
{
    return ifTrue;
}

int Question::getIfFalse()
{
    return ifFalse;
}

#endif
