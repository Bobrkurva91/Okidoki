#include "array.h"

int max(int left, int right) {
    return (left > right) ? left : right;
}

int min(int left, int right) {
    return (left < right) ? left : right;
}

int min_index(int* massive, int size) {
    int min_idx = 0;
    for (int i = 1; i < size; i++) {
        if (massive[i] < massive[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

int max_index(int* massive, int size) {
    int max_idx = 0;
    for (int i = 1; i < size; i++) {
        if (massive[i] > massive[max_idx]) {
            max_idx = i;
        }
    }
    return max_idx;
}
int sum(int* massive, int size, int begin, int end) {
    int sum = 0;
    for (int i = begin; i <= end; i++) {
        sum += massive[i];
    }
    return sum;
}