#pragma once
#include <memory>

class BinarySearch {
  private:
    class Impl;
    std::unique_ptr<Impl> _impl;
  public:
    ~BinarySearch();
    BinarySearch();
    template<typename Iterator, typename T>
    Iterator find(Iterator start, Iterator end, const T &item);
};

#include "binary_search.tpp"
