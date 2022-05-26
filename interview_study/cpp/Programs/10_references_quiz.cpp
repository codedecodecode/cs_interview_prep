/*  
    Requirement : This example contains quiz examples in references
    ref : https://www.geeksforgeeks.org/references-in-c/
*/
#include <iostream>
using namespace std;

int& fun()
{
	int x = 10;
	return x;
}

int main()
{
	fun() = 30;
	cout << fun();
	return 0;
}

#if 0
int main()
{
int *ptr = NULL;
int &ref = *ptr;
cout << ref << '\n';
}

#include <iostream>
using namespace std;
 
int main()
{
   int x = 10;
   int *ptr = &x;
   int &*ptr1 = ptr;
}
#include <iostream>
using namespace std;
 
void swap(char *  &str1, char * &str2)
{
    printf("%p\n",str1);
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}
 
int main()
{
  char *str1 = "GEEKS";
  char *str2 = "FOR GEEKS";
  printf("%p\n",str1);
  swap(str1, str2);
  cout << "str1 is " << str1 << '\n';
  cout << "str2 is " << str2 << '\n';
  return 0;
}
#endif
