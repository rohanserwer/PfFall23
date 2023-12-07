/*
 * 	  Name: Rohan Serwer
 *    Date: 7-Dec-2023
 *    Desc: Min and max matrix 4x4
 */
#include <stdio.h>
#include <stdlib.h>

// dynamic allocation of the matrix
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
	int i,j;
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
	int i,j;
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

	int row,col;
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

	int i,j;
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

	int **sub_mat = get_sub_matrix(mat, n);
	printf("\nSubmatrix with maximum values:\n");
	print_matrix(sub_mat, n / 2);

	// Free allocated memory
	free(mat[0]);
	free(mat);
	free(sub_mat[0]);
	free(sub_mat);

	return 0;
}

