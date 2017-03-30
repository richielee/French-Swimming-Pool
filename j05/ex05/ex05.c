#include <stdio.h>
#include <string.h>
char		*ft_strstr(char *str, char *to_find)
{
	char *start;
	char *s1;
	char *s2;

	if (!*str)
		return (str);
	s1 = (char*)str;
	while (*s1)
	{
		start = (char*)s1;
		s2 = (char*)to_find;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (start);
		}
		s1 = start + 1;
	}
	return (0);
}

int		main(void)
{
	char needle[] = "";
	char haystack[] = "haystack";

	printf("%s\n", strstr(haystack, needle));
	printf("%s\n", ft_strstr(haystack, needle));

	char needle1[] = "ay";
	char haystack1[] = "haystack";

	printf("%s\n", strstr(haystack1, needle1));
	printf("%s\n", ft_strstr(haystack1, needle1));
	
	char needle2[] = "ksdf";
	char haystack2[] = "haystack";

	printf("%s\n", strstr(haystack2, needle2));
	printf("%s\n", ft_strstr(haystack2, needle2));
	
	char needle3[] = "ABCDABD";
	char haystack3[] = "ABC ABCDAB ABCDABCDABDE";

	printf("%s\n", strstr(haystack3, needle3));
	printf("%s\n", ft_strstr(haystack3, needle3));
}
