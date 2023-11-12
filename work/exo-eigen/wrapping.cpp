/*
 * wrapping.cpp
 *
 * Created on: Nov 8, 2023
 *      Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <Eigen/Dense>
#include <Eigen/Sparse>
#include <array>
#include <iostream>

int main(int argc, char* argv[])
{
    // 1. Declare an array with three columns with random coordinates
    const int n = 10;
    Eigen::ArrayX3d array = Eigen::ArrayX3d::Random(n, 3);
    std::cout << array << "\n" << std::endl;

    // 2. Rowwise cross product with [1, 1, 1], and store in another array
    Eigen::Vector3d all_one_vector;
    all_one_vector = Eigen::Vector3d::Ones(3);

    Eigen::MatrixX3d matrix = array.matrix();

    Eigen::MatrixX3d result_matrix = Eigen::MatrixX3d(n, 3);

    // cannot think of a better way of doing it... other than using counter
    int counter = 0;
    for (auto row : matrix.rowwise())
    {
        Eigen::Vector3d row_result = row.cross(all_one_vector);
        result_matrix.row(counter) = row_result;
        counter ++;
    }
    std::cout << result_matrix << "\n" << std::endl;

    // 3. Reshape the result into an array with a single column
    // The storage convention is column major.
    Eigen::Map<Eigen::VectorXd> result_matrix_reshape(result_matrix.data(), result_matrix.size());
    std::cout << result_matrix_reshape << std::endl;

    // 4. Create an array with 12 columns.
    const int cols = 12;
    Eigen::Array3Xd other_array = Eigen::Array3Xd::Random(3, cols);

    // 5. Make a loop over the rows, interpret for each row:
    // the first 9 columns as a 3*3 matrix
    // the last 3 columns as a vector of size 3
    Eigen::Matrix<double, 3, cols> flattened_product;

    int other_counter = 0;
    for (auto row : other_array.rowwise())
    {
        Eigen::RowVectorXd head = row.head<9>();
        Eigen::Map<Eigen::Matrix<double, 3, 3>> M(head.data(), 3, 3);

        Eigen::VectorXd V = row.tail<3>();
        Eigen::VectorXd flattened_product_row = M * V;
        flattened_product.row(other_counter) = flattened_product_row.transpose();
        other_counter ++;
    }
    std::cout << flattened_product << "\n" << std::endl;
}

