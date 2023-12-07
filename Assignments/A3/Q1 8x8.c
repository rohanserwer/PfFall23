/*
 * 	  Name: Rohan Serwer
 *    Date: 7-Dec-2023
 *    Desc: Min and max 8x8 matrix 
 */
#include <stdio.h>
#include <stdlib.h>

// Dynamic allocation of the matrix
int **create_matrix(int n)
{
    int **mat = (int **)malloc(sizeof(int *) * n);
    int *block = (int *)malloc(sizeof(int) * n * n);

    int i;
    for (i = 0; i < n; i++)
        mat[i] = block + i * n;

    return mat;
}

void read_file_matrix(FILE *fp, int **mat, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (fscanf(fp, "%d", &mat[i][j]) != 1)
            {
                printf("Error reading matrix from file.\n");
                exit(1);
            }
        }
    }
}

void print_matrix(int **mat, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%-3d ", mat[i][j]);
        }
        printf("\n\n");
    }
}

int max(int **mat, int i, int j, int n)
{
    int max_val = mat[i][j];

    int row, col;
    for (row = i; row < i + 2; row++)
    {
        for (col = j; col < j + 2; col++)
        {
            if (mat[row][col] > max_val)
            {
                max_val = mat[row][col];
            }
        }
    }

    return max_val;
}

int **get_sub_matrix(int **mat, int n)
{
    int **sub_mat = create_matrix(n / 2);

    int i, j;
    for (i = 0; i < n; i += 2)
    {
        for (j = 0; j < n; j += 2)
        {
            sub_mat[i / 2][j / 2] = max(mat, i, j, n);
        }
    }

    return sub_mat;
}

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s <matrix_dimension> <filename>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    while (!(n == 2 || n == 4 || n == 8))
    {
        printf("Incorrect dimension\nEnter dimension again: ");
        scanf("%d", &n);
    }

    FILE *fp = fopen(argv[2], "r");

    if (!fp)
    {
        printf("Error opening file %s.\n", argv[2]);
        return 1;
    }

    int **mat = create_matrix(n);
    read_file_matrix(fp, mat, n);
    fclose(fp);

    printf("Name: Rohan Serwer\nID: 22K-4009\n\n");

    printf("Original Matrix:\n");
    print_matrix(mat, n);
    
	if (n == 8)
    {
        int **sub_mat2 = get_sub_matrix(mat, n / 2);
        int **sub_mat4 = get_sub_matrix(sub_mat2, n / 4);
        int **sub_mat8 = get_sub_matrix(sub_mat4, n / 8);

        printf("\nSubmatrix with maximum values (2x2):\n");
        print_matrix(sub_mat2, n / 4);

        printf("\nSubmatrix with maximum values (4x4):\n");
        print_matrix(sub_mat4, n / 8);

        printf("\nSubmatrix with maximum values (8x8):\n");
        print_matrix(sub_mat8, n / 16);

        // Free memory for sub-matrices
        free(sub_mat2[0]);
        free(sub_mat2);
        free(sub_mat4[0]);
        free(sub_mat4);
        free(sub_mat8[0]);
        free(sub_mat8);
    }

    // Free allocated memory
    free(mat[0]);
    free(mat);

    return 0;
}
