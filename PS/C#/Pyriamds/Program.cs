// Happy Code
// Time Complexity O(N^2)
// Space Complexity O(1)
using System;
namespace PrintEvenIndices
{
    internal class Program
    {
        public static void Print(int N)
        {
            for (int i = 1; i <= N; i++)
            {
                for (int a = N; a > i; a--)
                {
                    Console.Write(" ");
                }

                for (int b = 1; b < i * 2; b++)
                {
                    Console.Write("*");
                }

                Console.WriteLine();
            }
        }
        private static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            Print(N);
        }
    }
}