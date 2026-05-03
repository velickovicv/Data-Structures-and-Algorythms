class DLList
{
protected:
    DLLNode* head;
    DLLNode* tail; // početak i kraj liste

public:
    DLList() {
        head = NULL;
        tail = NULL;
    }

    ~DLList();

    bool isEmpty() {
        return head == NULL;
    }

    void printAll();

    DLLNode* findNodePtr(int el);

    DLLNode* getHead() {
        return head;
    }

    DLLNode* getNext(DLLNode* ptr);

    int getHeadEl();
    int getNextEl(int el);

    bool isInList(int el);

    void deleteEl(int el);

    void addToHead(int el);
    void addToTail(int el);

    int deleteFromHead();
    int deleteFromTail();
};
