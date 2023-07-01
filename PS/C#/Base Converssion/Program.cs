// Happy Code
// Time Complexity O(Logn)
// Space Complexity O(1)
using System;
namespace BaseConverssion
{
    internal class program
    {
        public static void Print(int N)
        {
            if (N <= 0)
                return;

            Print(N / 2);
            Console.Write(N % 2);
        }
        private static void Main(string[] args)
        {
            int times = Int32.Parse(Console.ReadLine());
            int a = 0;
            while (++a <= times)
            {
                int N = Int32.Parse(Console.ReadLine());
                Print(N);
                Console.WriteLine();
            }
        }
    }
}