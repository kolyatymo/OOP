#pragma once
#include <iostream>
using std::cout;
using std::endl;


template <typename T, size_t row = 3, size_t col = 3>
class Matrix
{
public:
	Matrix(const T& value = T());
	Matrix() = default;
	void print() const;

	void largest(); // max
	void small();  // min

	bool search(const T& value = T());

	T sumeMatrix();

	template <typename T, size_t row, size_t col>
	friend std::ostream& operator<<(std::ostream& out, const Matrix<T, row, col>& m);

	template <typename T, size_t row, size_t col>
	friend std::istream& operator>>(std::istream& in, Matrix<T, row, col>& m);

	Matrix SumeTwoMatrix(const Matrix <T, row, col> & two);

	bool operator==(const Matrix <T, row, col>& other);

	Matrix<T, row, col> operator+(const T& value) const; 
	T& operator()(size_t r, size_t c);

private:
	T matrix[row][col]{};

};

template<typename T, size_t row, size_t col>
inline Matrix<T, row, col>::Matrix(const T& value)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			matrix[i][j] = value;
		}
	}
}

template<typename T, size_t row, size_t col>
inline void Matrix<T, row, col>::print() const
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n\n";
}

template<typename T, size_t row, size_t col>
inline void Matrix<T, row, col>::largest()
{
	T max = matrix[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
		}
	}
	return max;
}

template<typename T, size_t row, size_t col>
inline void Matrix<T, row, col>::small()
{
	T min = matrix[0][0];
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (matrix[i][j] < min)
				min = matrix[i][j];
		}
	}
	return min;
}

template<typename T, size_t row, size_t col>
inline bool Matrix<T, row, col>::search(const T& value)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (matrix[i][j] == value)
				return true;
		}
	}
	return false;
}

template<typename T, size_t row, size_t col>
inline T Matrix<T, row, col>::sumeMatrix()
{
	T sume = 0;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			sume += matrix[i][j];
		}
	}
	return sume;
}


template<typename T, size_t row, size_t col>
inline Matrix<T, row, col> Matrix<T, row, col>::SumeTwoMatrix(const Matrix <T, row, col> & two)
{
	Matrix<T, row, col> result(* this);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			result.matrix[i][j] = this->matrix[i][j] + two.matrix[i][j];
		}
	}
	return result;

}

template<typename T, size_t row, size_t col>
inline bool Matrix<T, row, col>::operator==(const Matrix<T, row, col>& other)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (matrix[i][j] != other.matrix[i][j])
				return false;
		}
	}
	return true;
}

template<typename T, size_t row, size_t col>
inline Matrix<T, row, col> Matrix<T, row, col>::operator+(const T& value) const
{
	Matrix<T, row, col> result(*this);

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			result.matrix[i][j] += value;
		}
	}
	return result;
}

template<typename T, size_t row, size_t col>
inline T& Matrix<T, row, col>::operator()(size_t r, size_t c)
{
	static T error;
	if (r >= row || c >= col)
		return error;
	return matrix[r][c];
}

template<typename T, size_t row, size_t col>
inline std::ostream& operator<<(std::ostream& out, const Matrix<T, row, col>& m)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			out << m.matrix[i][j] << (j < col - 1 ? "," : "\n");
		}
	}
	return out;
}

template<typename T, size_t row, size_t col>
inline std::istream& operator>>(std::istream& in, Matrix<T, row, col>& m)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			in >> m.matrix[i][j];
		}
	}
	return in;
}



