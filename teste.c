#include <stdio.h>

void Identificar_Vetor (int v[], int n) {
  int aux;
  for (aux = 0; aux < n; aux ++) {
    scanf("%d", &v[aux]);
  }
}

void Mostrar_Vetor (int v[], int n) {
  int aux;
  for (aux = 0; aux < n; aux ++) {
    printf("%d\n", v[aux]);
  }
}

int Menor_Indice (int v[], int n) {
  int aux, Maior_Indice;
  for (aux = 1, Maior_Indice = 0; aux < n ; aux++) {
    if (v[aux] < v[Maior_Indice]){
      Maior_Indice = aux;
    }
  }
  return Maior_Indice;
}

void Vetor_Odrem_Decrescente (int v[], int n) {
  int aux, Indice_Auxiliar;
  for (aux = n; aux > 0; aux --) {
    Indice_Auxiliar = Menor_Indice (v, aux);
    printf("%d\n", Indice_Auxiliar);
  }
}

int main () {
  int n;
  scanf("%d", &n);
  int v[n-1];
  Identificar_Vetor (v,n);
  Vetor_Odrem_Decrescente (v, n);
  return 0;
}
