#include <iostream>

void onedimToForDim(int index, int size3, int size2, int size1, int *i1, int *i2, int *i3, int *i4)
{
   *i4 = index/(size3*size2*size1);
   index -= (*i4)*size3*size2*size1;
   *i3 = index/(size2*size1);
   index -= (*i3)*size2*size1;
   *i2 = index/size1;
   *i1 = index  - (*i2)*size1;
}

int main()
{

   const int size1 = 3;
   const int size2 = 4;
   const int size3 = 3;
   const int size4 = 2;

   int id1 = 2;
   int id2 = 3;
   int id3 = 2;
   int id4 = 1;
   
   int index = id4*size3*size2*size1+id3*size2*size1+id2*size1+id1;

   int i1, i2, i3, i4;

   onedimToForDim(index, size3, size2, size1, &i1, &i2, &i3, &i4);

   std::cout << "original (" << id1 << "," << id2 << "," << id3 << "," << id4 << ")" << "found (" << i1 << "," << i2 << "," << i3 << "," << i4 << ")" <<std::endl;  


   return 0;
}
