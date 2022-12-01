#include <random>


using namespace std;


struct Node
{
    int data;
    Node* next;
};

// the function of generating a list of length n
Node* generate(int n)
{
    Node* ptr = nullptr;
    for (int i = n; i > 0; --i)
    {
        Node* new_node = new Node{ i, ptr };
        ptr = new_node;
    }

    return ptr;
}

// function for generating a list of length n filled with random integers
Node* generate_random(int n)
{
    random_device rd;

    mt19937 rng(rd());
    default_random_engine dre{ rd() };
    uniform_int_distribution<int> randint{ 10, 99 };

    Node* ptr = nullptr;
    for (int i = n; i > 0; --i)
    {
        Node* new_node = new Node{ randint(dre), ptr };
        ptr = new_node;
    }

    return ptr;
}

// the reverse function that expands the entire list
void reverse(Node** head)
{
    Node* current = *head;
    Node* prev = nullptr, * next = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

// the reverse function, which expands a part of the list by borders
void reverse(Node** head, int left, int right)
{
    Node* curr = *head, * prev = NULL;
    int i;
    for (i = 0; i < left; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    Node* rtail = curr;
    Node* rhead = NULL;
    while (i <= right)
    {
        Node* next = curr->next;
        curr->next = rhead;
        rhead = curr;
        curr = next;
        i++;
    }
    if (prev != NULL)
    {
        prev->next = rhead;
    }
    else
    {
        *head = rhead;
    }
    rtail->next = curr;
}