// Happy Code
// Time Complexity O(N^2)
// Space Complexity O(N)
using System;
namespace ILovestrings
{
    class Program
    {
        private static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            string[] str = null;
            string newStr=string.Empty;
            int a = 0;
            while (++a <= N)
            {
                newStr = string.Empty;
                str = Console.ReadLine().Split(' ');
                string A = str[0];
                string B = str[1];
                int len1 = A.Length;
                int len2 = B.Length;
                if (len1 <= len2)
                {
                    int i;
                    for (i = 0; i < len1; i++)
                    {
                        newStr += (A[i].ToString() + B[i].ToString());
                    }
                    newStr += B.Substring(i);
                }
                else
                {
                    int i;
                    for (i = 0; i < len2; i++)
                    {
                        newStr += (A[i].ToString() + B[i].ToString());
                    }
                    newStr += A.Substring(i);
                } 
                Console.WriteLine(newStr);
            }
           
        }
    }
}