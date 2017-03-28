#include <iostream>
#include <vector>
#include "binary_search.h"

using namespace std;

int main(int argc, char ** argv) {
  BinarySearch searcher;
  vector<int> searchSet = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int>::const_iterator found = searcher.find(searchSet.cbegin(), searchSet.cend(), 2);
  if (found != searchSet.cend()) {
    cout << "Found " << *found << "!" << endl;
  } else {
    cout << "Did Not Find " << 2 << "!" << endl;
  }
  return 0;
}
