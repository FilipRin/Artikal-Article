#ifndef _LISTA_H_
#define _LISTA_H_

template <typename T>
struct Node {
    T data;
    Node* next;
};

template <typename T> class List {
private:
    Node<T>* head;
    int numOfElements;
public:
    List() {
        head = NULL;
        numOfElements = 0;
    }

    int& getNumOfElements() const { return numOfElements; }

    void push(T val) {
        if (numOfElements > 1)
            reverseList(&head);
        Node<T>* n = new Node<T>();
        n->data = val;
        n->next = head;
        head = n;
        numOfElements++;
        reverseList(&head);
    }

    T pop() {
        if (head) {
            T p = head->data;
            head = head->next;
            return p;
        }
    }

    void reverseList(Node<T>** head)
    {
        Node<T>* prev = NULL;
        Node<T>* current = *head;
        Node<T>* next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        *head = prev;
    }


    List<T>& operator+=(const T& classObj)
    {
        this->push(classObj);
        return *this;
    }

    T& operator[](int index)
    {
        if (index > numOfElements)
        {
            std::cout << "Uneli ste indeks elementa van opsega! ";
            T tmp = -1;
            return tmp;
        }
        Node<T>* temp = head;
        int num = index;
        while (num != 0)
        {
            num--;
            temp = temp->next;
        }
        return temp->data;
    }

};


#endif // !_LISTA_H_
