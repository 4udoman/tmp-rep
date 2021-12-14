#pragma once
#include <string>

template <class TType>
class TList
{
private:
  struct Node
  {
    TType data;
    Node* pNext;
    Node(const TType _data = {}, Node* _pNext = nullptr) : data(_data), pNext(_pNext) {}
  };
  Node* pFirst;
  int size;

  TList(const TList&) = delete; // Запрет на копирование

  void operator=(const TList&) = delete; // Запрет на присваивание

public:

  // Метод для проверки соединения с гугл тестами
  void ForGoogleTest(bool result)
  {
    if (result == true)
      throw std::string("Exception");
    // В противном случае исключение не возбуждается
  }


  TList() : pFirst(nullptr), size(0) {} // Конструктор

  ~TList() { clear(); } // Деструктор

  int get_size() const { return size; } // Получение значения размера списка

  bool is_empty() const { return pFirst == nullptr; } // Проверка на пустоту

  void pop_front()
  {
    Node* tmp = pFirst;
    pFirst = pFirst->pNext;
    delete tmp;
  }

  void clear()
  {
    while (pFirst != nullptr)
      pop_front();
  }

  void push_front(const TType elem) // Вставка элемента в начало списка
  {
    pFirst = new Node(elem, pFirst);
    size++;
  }

};
