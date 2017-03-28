#include "binary_search.h"

class BinarySearch::Impl {
  public:
    template<typename Iterator, typename T>
    Iterator find(Iterator start, Iterator end, const T &item);
};

template <typename Iterator, typename T>
Iterator BinarySearch::Impl::find(Iterator start, Iterator end, const T &item) {
  auto low  = 0;
  auto high = end - start - 1;
  while (low <= high) {
    auto mid = (low + high) / 2;
    auto midItr = start + mid;
    if (*midItr == item) {
      return midItr;
    } else if (*midItr < item) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return end;
}

BinarySearch::BinarySearch() : _impl(new BinarySearch::Impl) {
}

BinarySearch::~BinarySearch() = default;

template<typename Iterator, typename T>
Iterator BinarySearch::find(Iterator start, Iterator end, const T &item) {
  return _impl->find(start, end, item);
}

