// Happy Code
// Time Complexity O(2^N)
// Space Complexity O(N)
using System;
namespace Fibonacci
{
    internal class Program
    {
        public static long Action(long N)
        {
            if (N == 1)
            {
                return 0;
            }
            else if (N == 2)
            {
                return 1;
            }
            return Action(N - 1) + Action(N - 2);

        }
        private static void Main(string[] args)
        {
            long N = Int64.Parse(Console.ReadLine());
            Console.WriteLine(Action(N));
        }
    }
}