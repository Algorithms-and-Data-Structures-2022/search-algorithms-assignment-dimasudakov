#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {
    if(arr.empty()) return std::nullopt;

    int l = 0, r = arr.size();
    while(r - l > 1) {
      int middle = (l + r) >> 1;
      if(arr[middle] > search_elem) r = middle;
      else l = middle;
    }
    if(arr[l] == search_elem) return l;
    else return std::nullopt;
  }

}  // namespace assignment