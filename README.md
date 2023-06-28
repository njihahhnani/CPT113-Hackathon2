# Knight's Quest: The Enchanted Castle

### Description of Knight's Quest

Knight's Quest is an enjoyable text - based adventure game that takes the player on an adventurous journey of finding a long lost item that is repeatedly mentioned in urban legends which can unlock the mysterious castle – a legendary magic ring.

Immerse yourself in a captivating gaming experience as you step into the role of a valiant knight in our extraordinary adventure, Knight's Quest. Prepare to embark on a journey that will push the boundaries of your imagination and test your courage to its limits.

You'll find yourself in the darkness of night, wandering a painstakingly designed terrain, in this aesthetically breathtaking game set in a realm of enigma and wonder. You'll travel through ancient woodlands and perilous terrains, clad in dazzling armor and armed with a trusty light, motivated by an insatiable quest to discover the secrets of a famous castle.

As the story unraveled with every choice having consequences, what would be your move? Would you successfully obtain said legendary ring?

Knight's Quest is more than just a game; it's an immersive journey that brings you to a world where magic and reality collide. Will you accept the challenge, unlock the castle's vast wisdom, and etch your name in legend? Your actions will determine the fate of the enchanted planet. Begin this extraordinary journey today and become the hero that fate has chosen.

### Features of Knight's Quest

- Multiple Endings: Introduce different endings based on the player's choices throughout the game. Each ending can be influenced by the player's actions, decisions, or the fulfillment of certain conditions.

- Side Quests: Include optional side quests or missions that the player can undertake alongside which if the player found the magic ring, they can choose to pick it or not. If they pick it, they will have the ability to reach the castle faster.

- Progress Tracking: The current question is stored in a variable (currentQuestion) to keep track of the player's progress through the game.

- Input Validation: The code validates the player's input and displays an error message for invalid choices.

- Linked List Data Structure: The questions are stored in a linked list data structure (LinkedList) to maintain their order and facilitate traversal.

- Error Handling: The code includes basic error handling. If the file fails to open, the program returns an error code (1)

### How to play Knight's Quest

Once the game starts, you will see a welcome message displayed on the screen. Take a moment to read it.

Read the question and choices: The game will present you with a question. Read the question carefully, as well as the two choices provided.

Enter either 1 or 2 to make your choice. The choices correspond to the options provided with the question. Type the number and press Enter.

Depending on your choice, the game will navigate to the next question. If your choice leads to a valid "if true" or "if false" question, the game will display that question. Otherwise, if there are no more valid questions, the game will end.

Repeat the steps for each new question presented to you. Read the question, select a choice, and proceed with the game flow.

The game will continue until there are no more valid questions to display. At that point, the game will display a "Thank you for playing!" message.

Once the game ends, you can exit the program.

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

Game ending 1: Player loses

![lose](https://github.com/njihahhnani/CPT113-Hackathon2/assets/117801046/7ce87b97-a277-4aa9-9088-0cafc15df780)

Game ending 2: Player wins

![win](https://github.com/njihahhnani/CPT113-Hackathon2/assets/117801046/616a59f1-d57a-48c8-b599-d74480594564)


### A link to game demo video

https://youtu.be/wwShfOUf68c
