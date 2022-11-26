#ifndef LIST_H //checking the existence of a constant or macro
#define LIST_H //the directive of the preprocessor, a program that prepares the code of a C/C++ program for compilation.


class List
{
    struct Node
    {
        int mPayload;
        Node* mpNext;
        Node(int a);
    };

    Node* mpBegin;
    Node* mpEnd;
    int mCount;

public:
    List();
    List(const List& Right);
    ~List();
    void push_back(int a);
    void dell_all();
    void show();
    int& find_element(int position);
};
#endif // indicates the end of the block
