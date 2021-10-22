// dzForGb.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
void swap(int* r, int* s);
int main()
{

	return 0;

}

void swap(int* prt1, int* ptr2)
{
	int tmp = *prt1;
	*prt1 = *ptr2;
	*ptr2 = tmp;
}
void SortPointers(const std::vector<int*>& PointVec) {
	for (size_t i = 0; i < PointVec.size(); ++i) {
		for (size_t j = 0; j < PointVec.size() - 1; ++j) {
			if (*PointVec[j] > *(PointVec[j + 1]))
				swap(PointVec[j], PointVec[j + 1]);


		}
	}

}
