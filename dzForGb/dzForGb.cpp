
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>
double mean(const std::list<double>& list);

template <class T>
class matrix
{
public:
    matrix(int _order)
        :order(_order) {
        srand(time(0));
        for (size_t i = 0; i < order; i++)
        {
            arr.push_back(std::vector<T>());
            for (size_t j = 0; j < order; j++)
            {
                arr.back().push_back(rand() % 11);
            }
        }
    }
    void print_matrix()
    {
        if (arr.size()) {
            for (size_t i = 0; i < order; i++)
            {
                for (size_t j = 0; j < order; j++)
                {
                    std::cout << arr[i][j] << "\t";
                }
                std::cout << "\n";
            }
        }
        else std::cout << "mat is empty" << '\n';
    }

    int calculate_det()
    {
        if (order == 1) return arr[0][0];
        if (order == 2) return arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
        if (order == 3) return arr[0][0] * arr[1][1] * arr[2][2] + arr[0][1] * arr[1][2] * arr[2][0] + arr[1][0] * arr[2][1] * arr[0][2] - arr[0][2] * arr[1][1] * arr[2][0] - arr[1][0] * arr[1][0] * arr[2][2] - arr[0][0] * arr[2][1] * arr[1][2];

    }



private:

    int order;
    std::vector<std::vector<T>> arr;
    std::vector<std::vector<T>> Mat_min;
};

int main()
{
    matrix<float> myMat(3);
    myMat.print_matrix();
    std::cout << myMat.calculate_det() << '\n';
}
double mean(const std::list<double>& list) // task 1
{
    return static_cast<double>(std::accumulate(list.begin(), list.end(), 0) / list.size());
}

