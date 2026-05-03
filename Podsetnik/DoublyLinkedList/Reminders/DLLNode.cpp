// Cvor se isto kao i jednostruko spregnuta lista, jedina razlika je sto se definise i pointer na prethodni cvor
// sto kod SLL ne postoji, vec mora rucnu.

class DLLNode
{
public:
    int info;
    DLLNode* prev;
    DLLNode* next;

    // podrazumevani konstruktor
    DLLNode() {
        prev = NULL;
        next = NULL;
    }

    // konstruktor sa vrednošću
    DLLNode(int el) {
        info = el;
        prev = NULL;
        next = NULL;
    }

    // konstruktor sa svim parametrima
    DLLNode(int el, DLLNode* p, DLLNode* n) {
        info = el;
        prev = p;
        next = n;
    }

    ~DLLNode() { }

    int print() {
        return info;
    }

    bool isEqual(int el) {
        return el == info;
    }
};
