class pangramChecking
{
	public static boolean checkPanagram(String str)
	{
		boolean[] check = new boolean[26];
		int index = 0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
			{
				index = str.charAt(i) - 'A';
			}
			else if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
			{
				index = str.charAt(i) - 'a';
			}

			check[index] = true;
		}
		for(int i=0;i<26;i++)
			if(check[i] == false)
				return false;
			
		return true;
	}

	public static void main(String args[])
	{
		String str = "The quick brown fox jumps over the lazy dog";

		if(checkPanagram(str) == true)
			System.out.println("Yes Pangram");
		else
			System.out.println("No Pangram");
	}
}