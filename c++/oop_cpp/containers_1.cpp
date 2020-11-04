#include <iostream>

// row ->  |--|--|--|
//         |--|--|--|
//         |--|--|--|
//         |--|--|--|

template <typename T = int>

class matrix
{
private:
  size_t mRows, mCols;
  std::vector<std::vector<T> *> rows;

public:
  matrix(const size_t &rows, const size_t &cols)
  {
    mRows = rows;
    mCols = cols;
    rows.reserve(mRows); // Reserve memory for matrix rows
    
    for (int i = 0; i < mRows; i++)
    {
      rows.push_back(new std::std::vector<T>(mCols));
    }
  }
  std::std::vector<T> &operator[] (const size_t &row_id) // Operator overloading
  {
    return *(rows[row_id]) 
  }
};

int main(void)
{
  matrix<double> md(2, 3);
  md[1][1] = 56.4;
  
  return(0);
}