//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& arr, int search_elem) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    if(arr.size() == 0) return std::nullopt;
    return search(arr, search_elem, 0, static_cast<int>(arr.size()));
  }

  std::optional<int> BinarySearchRecursive::search(const std::vector<int>& arr, int search_elem, int l, int r) const {

    // Tips:
    // 1. Рассмотрите базовые случаи выхода и рекурсии:
    //    1) индекс левого элемента стал больше индекса правого элемента
    //    2) целевой элемент найден
    // 2. Вызовите рекурсивный метод, изменив границы поиска
    //    в зависимости от неравенства между элементом посередине и целевого элемента

    if(r - l == 1) {
      if(arr[l] == search_elem) return l;
      else return std::nullopt;
    }
    int middle = (l + r) >> 1;
    if(arr[middle] > search_elem) r = middle;
    else l = middle;

    return search(arr, search_elem, l, r);
  }

}  // namespace assignment
