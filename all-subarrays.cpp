# include <iostream>

int main() 
{
  int a[] = { 1,2,3,4,5,6 } ;
  int size = 6 ;   

  for (int i=0 ; i<size ; i++ )
    {
      for (int j=i; j < size ; j++ )
        {
          for ( int k = i ; k < j ; k++ ) 
            std::cout << a[k] << " " ;
          std::cout << a[j] << "\n" ;
        }
      std::cout<<"\n";
    }
}