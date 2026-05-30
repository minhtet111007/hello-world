#include <stdio.h>
#include <cs50.h>

int main(void) {
  const int N = 3;
  string foods[N];
  foods[0] = "Rice";
  foods[1] = "Noodle";
  foods[2] = "Bread";

  for (int i = 0; i < N; i++) {
    printf("%i. %s\n", i+1, foods[i]);
  }
  return 0;
}
