vector<int> breakingRecords(vector<int> scores) {
    vector<int> res(2, 0);
    int _min{scores[0]}, _max{scores[0]};
    for (int i{}; i<scores.size(); ++i) {
        if (scores[i] < _min) {
            _min = scores[i];
            ++res[1];
        } else if (scores[i] > _max) {
            _max = scores[i];
            ++res[0];
        }
    }
    return res;
}
