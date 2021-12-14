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

  TList(const TList&) = delete; // ������ �� �����������

  void operator=(const TList&) = delete; // ������ �� ������������

public:

  // ����� ��� �������� ���������� � ���� �������
  void ForGoogleTest(bool result)
  {
    if (result == true)
      throw std::string("Exception");
    // � ��������� ������ ���������� �� ������������
  }


  TList() : pFirst(nullptr), size(0) {} // �����������

  ~TList() { clear(); } // ����������

  int get_size() const { return size; } // ��������� �������� ������� ������

  bool is_empty() const { return pFirst == nullptr; } // �������� �� �������

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

  void push_front(const TType elem) // ������� �������� � ������ ������
  {
    pFirst = new Node(elem, pFirst);
    size++;
  }

};
