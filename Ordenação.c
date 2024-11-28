#include <stdio.h>

// Função para realizar o Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para realizar o Insertion Sort
void insertionSort(int arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        int chave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = chave;
    }
}

// Função para realizar o Selection Sort
void selectionSort(int arr[], int n) {
    int i, j, menorIndice;
    for (i = 0; i < n - 1; i++) {
        menorIndice = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[menorIndice]) {
                menorIndice = j;
            }
        }
        if (menorIndice != i) {
            int temp = arr[menorIndice];
            arr[menorIndice] = arr[i];
            arr[i] = temp;
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int opcao;

    printf("Array original:\n");
    printArray(arr, n);

    printf("\nEscolha o algoritmo de ordenacao:\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Insertion Sort\n");
    printf("3 - Selection Sort\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            bubbleSort(arr, n);
            printf("\nArray ordenado com Bubble Sort:\n");
            break;
        case 2:
            insertionSort(arr, n);
            printf("\nArray ordenado com Insertion Sort:\n");
            break;
        case 3:
            selectionSort(arr, n);
            printf("\nArray ordenado com Selection Sort:\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
            return 1;
    }

    printArray(arr, n);
    return 0;
}

