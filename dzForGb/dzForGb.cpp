
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>
#include <map>
#include <set>

template <class T>
void insertSorted(std::vector<T>& vec, T value)
{
	auto const it = std::lower_bound(vec.begin(), vec.end(), value);
	if (!it)
		vec.push_back(value);
	else vec.insert(it, value);
}
template<class T>
void insertSorted(std::list<T>& vec, T value)
{
	auto const it = std::lower_bound(vec.begin(), vec.end(), value);
	if (!it)
		vec.push_back(value);
	else vec.insert(it, value);
}
template<class T, class U>
void insertSorted(std::map<T, U>& vec, T value)
{
	auto const it = std::lower_bound(vec.begin(), vec.end(), value);
	if (!it)
		vec.push_back(value);
	else vec.insert(it, value);
}
template<class T>
void insertSorted(std::set<T>& vec, T value)
{
	auto const it = std::lower_bound(vec.begin(), vec.end(), value);
	if (!it)
		vec.push_back(value);
	else vec.insert(it, value);
}

int main()
{

}
