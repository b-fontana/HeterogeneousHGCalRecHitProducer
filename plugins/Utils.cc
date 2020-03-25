#include "Utils.h"

template <typename T>
edm::SortedCollection<T> pointer_to_sorted_collection(T* ptr, const size_t& length)
{
  std::vector<T> v(ptr, ptr + length);
  edm::SortedCollection<T> coll(v);
  return coll;
}

template edm::SortedCollection<HGCUncalibratedRecHit> pointer_to_sorted_collection(HGCUncalibratedRecHit*, const size_t&);
