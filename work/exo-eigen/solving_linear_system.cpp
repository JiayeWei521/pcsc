/*
 * solving_linear_system.cpp
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
    const int n = 10;

    // 1. Construct the matrix
    Eigen::MatrixXd A(n, n);
    A = Eigen::Matrix<double, n, 1>::Constant(2).asDiagonal();
    for (int i = 1; i < n; i++)
    {
        A.coeffRef(i-1, i) = -1;
        A.coeffRef(i, i-1) = -1;
    }
    std::cout << "The matrix A is " << A << "\n" << std::endl;

    // 2. Compute the determinant
    double determinant;
    determinant = A.determinant();
    std::cout << "The determinant of A is " << determinant << "\n" << std::endl;

    // 3. Solve the system Ax = b, where b is a vector of our choice.
    Eigen::Matrix<double, n, 1> b = Eigen::Matrix<double, n, 1>::Ones();
    std::cout << "The vector b is " << b << "\n" << std::endl;

    Eigen::Matrix<double, n, 1> x = A.fullPivLu().solve(b);
    std::cout << "The solution x is " << x << "\n" << std::endl;

    // 4. Verify the obtained result is the solution
    Eigen::Matrix<double, n, 1> lhs = A * x;
    std::cout << "Verification: " << "\n" << std::endl;
    std::cout << "The left-hand-side is " << lhs << "\n" << std::endl;
    std::cout << "The right-hand-side is " << b << "\n" << std::endl;

    // 5. Construct the sparse matrix
    Eigen::SparseMatrix<double> A_sparse(n ,n);

    A_sparse = Eigen::Matrix<double, n, 1>::Constant(2).asDiagonal();
    for (int i = 1; i < n; i++)
    {
        A_sparse.coeffRef(i-1, i) = -1;
        A_sparse.coeffRef(i, i-1) = -1;
    }
    A_sparse.makeCompressed();

    Eigen::SparseLU<Eigen::SparseMatrix<double>> sparse_solver;
    sparse_solver.compute(A_sparse);
    Eigen::Matrix<double, n, 1> x2 = sparse_solver.solve(b);

    std::cout << "The solution by using the sparse solver " << x2 << "\n" << std::endl;
}