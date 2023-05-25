using System;
namespace Test
{
    class Program
    {
        public static string Binary(int N)
        {
            string B = string.Empty;
            while (N != 0)
            {
                B += (N % 2);
                N /= 2;
            }
            return B;
        }
        public static bool Ispalindrome(string BN)
        {
            int Len = BN.Length - 1;
            for (int i = 0; i <= Len; i++)
            {
                if (BN[i] != BN[Len - i])
                {
                    return false;
                }
            }
            return true;
        }
        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            string result = Binary(N);
            if (N % 2 != 0 && Ispalindrome(result))
            {
                Console.WriteLine("YES");
            }
            else
            {
                Console.WriteLine("NO");
            }
        }
    }
}
