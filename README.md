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

blablabla

### Screenshots of Knight's Quest

blablabla

### A link to game demo video

blablabla
