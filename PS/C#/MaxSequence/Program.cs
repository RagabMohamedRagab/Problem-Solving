// Ramdam Karem 
// Time Complexity O(N^2)
// Space Complexity O(N)
using System;
namespace MaxSequence
{
    class Program
    {
        private static void Main(string[] args)
        {
            int n = Int32.Parse(Console.ReadLine());
            string s = Console.ReadLine();
            int sum = 1;
            try
            {
                for (int a = 0; a < n; a++)
                {
                    if (s[a] == s[a + 1])
                    {
                        continue;
                    }
                    else
                    {
                        sum += 1;
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(sum);
            }


        }
    }
}
