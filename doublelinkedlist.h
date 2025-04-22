/**
 * @brief A node in the doubly linked list.
 *
 * @struct node
 * @var data A pointer to the character array that stores the data.
 * @var prev A pointer to the previous node in the list.
 * @var next A pointer to the next node in the list.
 */
struct node
{
    char *data;
    struct node *prev;
    struct node *next;
};

/**
 * @brief A pointer to a Node.
 *
 * @typedef Node
 */
typedef struct node Node;

/**
 * @brief Prints the doubly linked list in the forward direction.
 *
 * @param n The first node in the list.
 */
void traverseForward(Node *n);

/**
 * @brief Prints the doubly linked list in the reverse direction.
 *
 * @param n The last node in the list.
 */
void traverseBackward(Node *n);

/**
 * @brief Inserts one node after another in the doubly linked list.
 *
 * @param n1 The node after which the insertion is done.
 * @param n2 The node that is inserted.
 */
void insertAfter(Node *n1, Node *n2);

/**
 * @brief Inserts one node before another in the doubly linked list.
 *
 * @param n1 The node before which the insertion is done.
 * @param n2 The node that is inserted.
 */
void insertBefore(Node *n1, Node *n2);

/**
 * @brief Deletes a node from the doubly linked list.
 *
 * @param n The node to be deleted.
 */
void deleteNode(Node *n);

/**
 * @brief Creates a new node with the given data.
 *
 * @param data The data that the node will store.
 * @return A pointer to the newly created node.
 */
Node createNode(char *data);

/**
 * @brief Finds a node with the given data in the doubly linked list.
 *
 * @param head The first node in the list.
 * @param data_to_find The data that the node must have.
 * @return A pointer to the node containing the given data, or NULL if no such node was found.
 */
Node *findData(Node *head, char *data_to_find);
