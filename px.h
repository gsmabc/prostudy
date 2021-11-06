//
// Created by fc on 2021/10/30.
//

#ifndef UNTITLED_PX_H
#define UNTITLED_PX_H

template<typename T>
void BucketSort(T arr[], int n) {
	int i, j;
	T buckets[offset];

	for (i = 0; i < offset; i++)
		buckets[i] = 0;
	for (i = 0; i < n; i++)
		buckets[arr[i]]++;
	for (i = 0, j = 0; i < offset; i++) {
		while (buckets[i] > 0) {
			arr[j] = i;
			buckets[i]--;
			j++;
		}
	}
}

#endif //UNTITLED_PX_H
