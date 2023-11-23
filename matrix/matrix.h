#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_MATRIX_SIZE 1000

// sizeof(matrix_type) = 4*2 + 8 = 16;

struct matrix_type {

 int** mat;

 // m - # rows

 // n - # columns

 int m, n;

};

/*

matrix_type a, b;

// creation

int entries[9] = {1, 0, 0, 0, 1, 0, 0, 0, 1};

a = create_matrix(3, 3, entries);

// print

print_matrix(a, 3, 3);

// c = a*b;

c = mult(a, b);

c = add(a, b);

double d = det(a);

*/

// Create a matrix of size num_row * num_col, and set all

// initial values to entries.

// If entries == NULL, then set all entries to zero.

matrix_type create_matrix(int num_row, int num_col, int* entries);

// Free a matrix ...
void free_matrix(matrix_type a);

void set_null_matrix(matrix_type* a);

// Print a matrix...

void print_matrix(matrix_type m);

void add_matrices(const matrix_type& m1, const matrix_type& m2, matrix_type& result);

void multiply_matrices(const matrix_type& m1, const matrix_type& m2, matrix_type& result);

bool trace(const matrix_type& m, int* tr);

#endif

