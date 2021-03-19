/*
 * Complete the simpleArraySum function below.
 */

int simpleArraySum(vector<int> ar) {

  int sum {};
    for (int & elem : ar) sum += elem;
    return sum;
}
