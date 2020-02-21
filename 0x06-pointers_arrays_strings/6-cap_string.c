char *cap_string(char *n)
{
	int a, b, aux = 1;

	int dl[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (b = 0; n[b] != 0; b++)
	{
		if (n[b] > 96 && n[b] < 123 && aux != 0)
			n[b] -= 32;
		for (a = 0; a < 14; a++)
		{
			if (n[b] == dl[a])
			{
				aux = 1;
				break;
			}
			if ((n[b] > 64 && n[b] < 91) ||
			    (n[b] > 47 && n[b] < 58))
				aux = 0;
		}
	}
	return (n);
}
