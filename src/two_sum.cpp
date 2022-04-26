#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int l = 0, r = arr.size() - 1;
    while(l < r) {
      int fuck = arr[l] + arr[r];
      if(fuck < sum) l++;
      if(fuck > sum) r--;
      if(fuck == sum) return std::make_pair(l, r);
    }
    return std::nullopt;
  }

}  // namespace assignment