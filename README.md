# Knight's Quest: The Enchanted Castle

### Description of Knight's Quest

blablablablabla

### Features of Knight's Quest

blablablabla

### How to play Knight's Quest

blablabla

### How object-oriented concepts were used to develop Knight's Quest

1) LinkedList class
   
   - Encapsulation: The LinkedList class encapsulates the data and operations related to a linked list. It contains private member variables and member functions that define the behavior of the linked list data structure.
   - Template Class: The LinkedList class is a template class, allowing it to work with different data types. The template parameter T represents the type of elements stored in the linked list. This enables the class to be flexible and reusable for different data types.
   - Node Structure: The LinkedList class has a nested Node structure that represents each element/node in the linked list. The Node structure contains a value of type T and a pointer to the next node, allowing the linked list to maintain its structure.
   - Data Encapsulation: The LinkedList class manages the creation, insertion, removal, and retrieval of nodes in the linked list. It provides public member functions like add(), remove(), at(), etc., which abstract away the internal implementation details and provide a clean interface for interacting with the linked list.

2) Question class
   
   - Abstraction: The Question class represents a question in the game. It encapsulates the question text, the corresponding texts for true and false choices, and the indices of the next questions to navigate based on the chosen option. This abstraction hides the internal implementation details and allows the game logic to work with questions as self-contained entities.
   - Encapsulation: The Question class encapsulates the question-related data and behavior within a single class. It provides public member functions like getQuestion(), getIfTrueText(), getIfFalseText(), etc., to access and retrieve the question data in a controlled manner.
   - Data Storage: Instances of the Question class are stored within the LinkedList<Question> data structure. Each node in the linked list holds a Question object, allowing for sequential access and navigation through the questions during the game.
  
By utilizing these object-oriented concepts, the LinkedList and Question classes provide modularity, reusability, and abstraction in the game's implementation. They allow for structured data storage, efficient navigation, and encapsulation of related functionality, enabling the development of a text-based game with organized questions and smooth progression.

### How linked lists play a role in Knight's Quest

Knight's Quest primarily utilizes a linked list to store and manage the sequence of questions. The LinkedList class, defined in the "linked_list.h" file, is used to create a linked list of Question objects. Here's how it plays a role in this game:

1) Linked List
   
   - The LinkedList class is instantiated as LinkedList<Question> *questions = new LinkedList<Question>; to create a linked list specifically for storing Question objects.
   - The questions read from the "game.txt" file are parsed and added to the linked list using the questions->add() function. Each question is added as a new node at the end of the linked list, preserving the order of the questions.

2) Game Progression
   - The game progresses by navigating through the questions stored in the linked list based on the player's choices.
   - The currentQuestion variable is used to keep track of the current question being displayed to the player.
   - Inside the main game loop, the current question's text and options are displayed to the player using currentQuestion.getQuestion(), currentQuestion.getIfTrueText(), and currentQuestion.getIfFalseText().
   - The player's choice (1 or 2) is obtained through input using cin >> choice.
   - Depending on the player's choice, the game uses the getIfTrue() or getIfFalse() function of the current question to determine the next question to display.
   - The next question is retrieved from the linked list using questions->at(), and the currentQuestion is updated accordingly.
   - This process continues until an exit condition is met, indicating the end of the game.

Overall, the linked list allows for the sequential progression of questions in the game. Each question node holds the necessary information and references to
other questions, enabling the game to guide the player's progression through their choices. However, this game also utilizes stack-like behavior with the LinkedList class through the stackPush() and stackPop() functions.

- The stackPush() function, defined in the LinkedList class, adds a new element to the front of the linked list. It mimics the behavior of pushing an element onto a stack. This function is used to add elements to the front of the linked list in the game.

- The stackPop() function, also defined in the LinkedList class, removes the element at the front of the linked list. It simulates popping an element from a stack. Although it is not used explicitly in the provided code, it can be employed in the game if needed.

While the primary functionality of the linked list in the game is to maintain the sequential order of questions, the stackPush() and stackPop() functions demonstrate the flexibility of the LinkedList class to exhibit stack-like behavior. This can be useful for implementing additional game mechanics or managing temporary states in the game.

### Screenshots of Knight's Quest

blablabla

### A link to game demo video

blablabla
