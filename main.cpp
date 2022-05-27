// homework #5: infinite matrix.

#include <iostream>
#include <cassert>
#include "infinite_matrix.hpp"

int main()
{
    InfiniteMatrix<int> m;
    auto a = m[0][0];
    ++a;
//    auto b = m[1];

    {
        InfiniteMatrix<int, -1> matrix;
        assert(matrix.size() == 0); // все ячейки свободны

        auto a = matrix[0][0];
        assert(a == -1);
        assert(matrix.size() == 0);
        matrix[100][100] = 314;
        assert(matrix[100][100] == 314);
        assert(matrix.size() == 1);

        // выведется одна строка
        // 100100314
//        for(auto c: matrix)
//        {
//            int x,y,v;
//            std::tie(x, y, v) = c;
//            std::cout << x << y << v << std::endl;
//        }
    }
    return 0;
}
