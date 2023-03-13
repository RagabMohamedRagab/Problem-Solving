// Happy Code 
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace SubsequenceString
{
    class Program
    {
        private static void Main(string[] args)
        {
            string t = "hello";
            string s = Console.ReadLine().ToLower();
            int a = 0, b = 0;
            try
            {
                while (a < s.Length)
                {
                    if (s[a] == t[b])
                    {
                        b++;

                    }
                    a++;
                }
            }
            catch
            {
                Console.WriteLine("YES");
                return;
            }
            Console.WriteLine("NO");

        }
    }
}