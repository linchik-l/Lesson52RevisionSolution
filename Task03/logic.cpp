// [The Number of extreme elements]
// Количество экстремальных элементов
//
// Дан вектор вещественных значений. Необходимо разработать
// функцию(или программу), которая подсчитывает количество
// экстремальных (минимальных и максимальных) элементов вектора.
// Если вектор задан некорректно, то функция(программа) должна
// возвратить ноль.

#include "logic.h"

double get_max(double* array, int size) {
	double max = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] > max) {
			max = array[i];
		}
	}

	return max;
}

double get_min(double* array, int size) {
	double min = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] < min) {
			min = array[i];
		}
	}

	return min;
}

int count_extreme_elements(double* array, int size) {
	if (size <= 0 || array == nullptr) {
		return 0;
	}
	int count = 0;
	double max = get_max(array, size);
	double min = get_min(array, size);

	for (int i = 0; i < size; i++)
	{
		if (array[i] == min || array[i] == max) {
			count++;
		}
	}
	return count;
}