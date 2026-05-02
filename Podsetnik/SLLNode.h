class SSLNode
{
  protected:
     int info;
     SSLNode* next;

  public:

  SSLNode() { 
    next = null;
  }

 SLLNode(int i) {
 info = i;
 next = null;
 }

SSLNode(int i, SSLNode* n) {
   info = i;
   next  = n;
}
~SSLNode() {
}

int print() { return info; }

bool isEqual(int el) { return el == info; }
