// Complete the compareTriplets function below.

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result(2, 0);
    for (size_t i {}; i < a.size(); i++) {
        if (a[i] == b[i]) continue;
        a[i] > b[i] ? result[0] += 1 : result[1] += 1;
    }
    return result;
}
