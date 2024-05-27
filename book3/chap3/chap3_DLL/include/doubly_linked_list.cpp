#include "doubly_linked_list.h"

template <typename T>
DLinkedList<T>::DLinkedList()
{
    header = new DNode<T>;
    trailer = new DNode<T>;
    // Have them point to each other
    header->next = trailer;
    trailer->prev = header;
}

template <typename T>
DLinkedList<T>::~DLinkedList()
{
    while (!empty())
    {
        removeFront();
    }
    delete trailer;
}

template <typename T>
bool DLinkedList<T>::empty() const
{
    return header->next == trailer;
}

template <typename T>
const T& DLinkedList<T>::front() const
{
    return header->next->elem;
}

template <typename T>
const T& DLinkedList<T>::back() const
{
    return trailer->prev->elem;
}

template <typename T>
void DLinkedList<T>::addFront(const T& e)
{
    add(header->next,e);
}

template <typename T>
void DLinkedList<T>::addBack(const T& e)
{
    add(trailer,e);
}

template <typename T>
void DLinkedList<T>::removeFront()
{
    remove(header->next);
}

template <typename T>
void DLinkedList<T>::removeBack()
{
    remove(trailer->prev);
}

template <typename T>
int DLinkedList<T>::size() const
{
    return N;
}

template <typename T>
void DLinkedList<T>::display() const
{
    DNode<T>* temp = header;
    while ( temp != NULL)
    {
        cout<<temp->elem<<" ";
        temp = temp->next;
    }
    

}

template <typename T>
void DLinkedList<T>::add(DNode<T>* v, const T& e)
{
    DNode<T>* u = new DNode<T>;
    u->elem = e;
    u->next = v;
    u->prev = v->prev;
    u->prev->next = u;
    v->prev = u;
}

template <typename T>
void DLinkedList<T>::remove(DNode<T>* v)
{
    DNode<T>* u = v->prev;
    DNode<T>* w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}