int getTotalX(vector<int> a, vector<int> b) {
  size_t iVectorA = 0;
  vector<int> factors;
  for (size_t i = a[0]; i <= b[0]; i++)
    if (std::all_of(a.begin(), a.end(), [&i](int& value){ return i % value == 0;})) factors.push_back(i);
  for (auto & factor : factors)
    if (std::all_of(b.begin(), b.end(), [&factor](int& value) { return value % factor == 0; })) iVectorA++;
  return iVectorA;
}
