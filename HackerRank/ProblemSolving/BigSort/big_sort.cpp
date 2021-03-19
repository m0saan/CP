auto comp = [] (const string& lhs, const string& rhs) {
  size_t lhsLength = lhs.size();
  size_t rhsLength = rhs.size();
  if(lhsLength == rhsLength)
    return (lhs < rhs);

  return lhsLength < rhsLength;
};

vector<string> bigSorting(vector<string> unsorted) {
  std::sort(unsorted.begin(), unsorted.end(), comp);
  return unsorted;
}
