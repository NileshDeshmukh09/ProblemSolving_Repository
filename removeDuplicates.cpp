#include <iostream>
#include <vector>
using namespace std;

int main()
{

   int n = 4;

   vector<string> arr = {"hi", "across", "beeeater", "Bookkeeper"};
   vector<string> ans;
   for (int x = 0; x < n; x++)
   {
      string str = arr[x];
      int index = 0;
      for (int i = 0; i < n; i++)
      {

         int j;
         for (j = 0; j < i; j++)
            if (str[i] == str[j])
               break;

         if (j == i)
            str[index++] = str[i];
      }

      ans.push_back(str);
   }

   for (int i = 0; i < n; i++)
   {
      cout << ans[i] << " ";
   }
}
