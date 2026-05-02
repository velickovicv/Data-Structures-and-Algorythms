class SLList
{
protected:
    SLLNode* head;
    SLLNode* tail; // pokazivači na početak i kraj liste

public:
    SLList() {
        head = NULL;
        tail = NULL;
    }

    ~SLList();

    bool isEmpty() {
        return head == NULL;
    }

    void addToHead(int el);
    void addToTail(int el);

    int deleteFromHead();
    int deleteFromTail();

    SLLNode* findNodePtr(int el);

    SLLNode* getHead() {
        return head;
    }

    SLLNode* getNext(SLLNode* ptr);

    int getHeadEl();
    int getNextEl(int el);

    void printAll();

    bool isInList(int el);

    void deleteEl(int el);
};
