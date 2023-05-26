// Happy Code 
// Time Complexity O(N^2)
// Space Complexity O(1)
using System;
namespace PrimeFuncation
{
    class Program
    {
        private static void Main(string[] args)
        {
            int op = Int32.Parse(Console.ReadLine());
            for (int a = 1; a <= op; a++)
            {
                int N = Int32.Parse(Console.ReadLine());
                if (N == 1)
                {
                    Console.WriteLine("NO");
                    continue;
                }
                if (IsPrime(N))
                {
                    Console.WriteLine("YES");
                }
                else
                {
                    Console.WriteLine("NO");
                }
            }
        }
        public static bool IsPrime(int N)
        {
            for (int i = 2; i <= Math.Sqrt(N); i++)
            {
                if (N % i == 0)
                    return false;
            }
            return true;
        }
    }
}
