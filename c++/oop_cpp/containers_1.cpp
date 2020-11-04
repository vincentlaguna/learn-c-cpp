#include <iostream>
#include <vector>

// row ->  |--|--|--|
//         |--|--|--|
//         |--|--|--|
//         |--|--|--|

template <typename T = int>

class matrix
{
private:
  size_t mRows, mCols;
  std::vector<std::vector<T> *> mRowData;

public:
  matrix(const size_t &rows, const size_t &cols)
  {
    mRows = rows;
    mCols = cols;
    mRowData.reserve(mRows); // Reserve memory for matrix rows
    
    for (int i = 0; i < mRows; i++)
    {
      mRowData.push_back(new std::vector<T>(mCols));
    }
  }
  std::vector<T> &operator[] (const size_t &row_id) // Operator overloading
  {
    return *(mRowData[row_id]);
  }
};

int main(void)
{
  matrix<double> md(2, 3);
  md[1][1] = 56.4;
  std::cout << md[1][1] << std::endl;
  return(0);
}