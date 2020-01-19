class copyString
{
	public static void copySt(char s1[],char s2[])
	{
		for(int i=0;i<s1.length;i++)
		{
			s2[i] = s1[i];
		}
	}

	public static void main(String args[])
	{
		char s1[] = "RajatGupta".toCharArray();
		char s2[] = new char[s1.length];
		copySt(s1,s2);
		System.out.println(String.valueOf(s2));
	}
}