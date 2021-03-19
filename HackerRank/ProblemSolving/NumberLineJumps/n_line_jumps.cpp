// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
  string yes { "YES" };
  string no { "NO" };
  bool canCatchUp = v2 < v1;
  if (canCatchUp) if ((x1 - x2) % (v2 - v1) == 0) return yes;
  return no;
}
