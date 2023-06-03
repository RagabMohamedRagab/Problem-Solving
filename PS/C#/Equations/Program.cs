//Haapy Code
// Time Complxity O(N)
//Space Complexity O(1)
using System;
namespace Equation
{
    class Program
    {
        public static long Pow(long X, long N)
        {
            long Mult = 1, Sum = 0;
            for (int i = 0; i < N; i++)
            {
                Mult *= X;
                if (i % 2 != 0)
                {
                    Sum += Mult;
                }
            }
            return Sum;
        }
        private static void Main(string[] args)
        {
            string[] Arr = Console.ReadLine().Split(' ');
            long N = Int64.Parse(Arr[0]);
            long X = Int64.Parse(Arr[1]);
            System.Console.WriteLine(Pow(X, N));
        }
    }
}
