// sp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "DoublyLinkedList.h"


void remove_duplicates(DoublyLinkedList *b)
{
    DoublyLinkedList::Node* a = b->head;
    while (a != nullptr)
    {
        
      DoublyLinkedList::Node* c = a->next;
      while (c != nullptr)
      {
          if (c->data==a->data)
          {
              DoublyLinkedList::Node* t = c->prev;        
              c->prev->next = c->next;                                
     
              if (c->next ==nullptr)
              {
                  b->tail = c->prev;
                  b->tail->next = nullptr;
                  break;
              }
              else
              {
                  c->next->prev = t;
                  c = t->next;
              }
          }
          else
          c = c->next;
      }
        a = a->next;
    }
}
void sort(DoublyLinkedList* b)
{
    int count=0;
    DoublyLinkedList::Node* a = b->head;
    while (a != nullptr)
    {
        DoublyLinkedList::Node* a = b->head;
        for (int i = 0; i < count; i++)
        {
            a = a->next;
        }
        DoublyLinkedList::Node* c = b->head;
        if (a->next == nullptr)
        {
            b->tail = a;
            break;
        }
        while (c != nullptr)
        {
            if (c->next == nullptr)
            {
                b->tail = c;
                break;
            }
            else
                if (c->data > c->next->data)
                {
                    DoublyLinkedList::Node* o = c->next->next;
                    c->next->prev = c->prev;
                    c->next->next = c;
                    if (c->next->prev != nullptr)
                    {
                        c->next->prev->next = c->next;
                    }
                    else
                    {
                        
                        b->head = c->next;
                    }
                    c->prev = c->next;
                    c->next = o;
                    if (o != nullptr)
                    {
                        o->prev = c;
                        
                    }
                    
                
                }
            else
                c = c->next;
        }
        count++;
       
    }
}
struct point
{
    int x, y;
};
int main()
{
    point* a;
    
    cout << a << endl;
   /* setlocale(LC_ALL, "Russian");
    DoublyLinkedList a1 = DoublyLinkedList();
   
    while (true)
    {
        cout << "1.Добавить элемент в начало\n2.Добавить элемент в конец\n3.Удалить элемент с начала\n4.Удалить элемент с конца\n5.Отобразить список\n6.Сортировать список\n7.Удалить дубликаты\n8.Выйти" << endl;
        try
        {
            char b;
            cin >> b;

            if (b == '1')
            {
                cout << "введите число" << endl;
                int t;
                cin >> t;
                a1.push_front(t);
            }
            else
                if (b == '2')
                {
                    cout << "введите число" << endl;
                    int t;
                    cin >> t;
                    a1.push_back(t);
                }
                else
                    if (b == '3')
                    {
                        a1.pop_front();
                    }
                    else
                        if (b == '4')
                        {
                            a1.pop_back();
                        }
                        else
                            if (b == '5')
                            {
                                a1.display();
                            }
                            else
                                if (b == '6')
                                {
                                    
                                    sort(&a1);
                                }
                                else
                                    if (b == '7')
                                    {
                                        remove_duplicates(&a1);
                                    }
                                    else
                                        if (b == '8')
                                        {
                                            break;
                                        }
        }
        catch (exception w)
        {
            cout << "некоректные данные" << endl;

        }

    }*/
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
