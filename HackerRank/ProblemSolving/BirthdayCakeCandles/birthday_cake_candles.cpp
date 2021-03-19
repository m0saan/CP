
int birthdayCakeCandles(vector<int> candles) {
  map<int, int> map;
  int max_height_candles = candles[0];
  for (std::size_t i {}; i < candles.size(); i++) {
    map[candles[i]] += 1;
    if (candles[i] > max_height_candles)
      max_height_candles = candles[i];
  }
  return map.at(max_height_candles);
}
