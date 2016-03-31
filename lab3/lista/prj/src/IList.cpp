#include "IList.hh"

template <typename E>
class SNode{
private:
  E elem;
  SNode<E>* next
  friend class SLinkedList<E>
  public:
  E getElement()
  {
    return elem;
  }
  SNode getNext()
  {
    return next;
  }
  void setElement(E newE)
  {
    elem = newE;
  }
  void setNext(Node<E> newN)
  {
    next = newN;
  }
};


template <typename E>
class SLinkedList{
public:
  SLinkedList();
  ~SLinkedList();
  bool empty() const;
  const E& front() const;
  void addFront(const E& e);
  void removeFront();
private:
  SNode<E>* head;
};
