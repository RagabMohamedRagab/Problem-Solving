//وَقُلْ رَبِّ زِدْنِي عِلْمًاً 
// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace Sequence
{
    internal class Program
    {
        public static int counter = 1;
        public static void Sequenece(long N)
        {
            if (N == 1)
            {
                Console.WriteLine(counter);
                return;
            }
            counter++;
            Sequenece(N % 2 == 0 ? N / 2 : 3 * N + 1);
        }
        private static void Main(string[] args)
        {
            long N = Int64.Parse(Console.ReadLine());
            Sequenece(N);
        }
    }
}
