#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void my_printf(const char* format, ...)
{
	int n;
	va_list ap;
	char temp[128];

	va_start(ap, format);
	while(*format != '\0')
	{
		if(*format == '%')
		{
			format++;
			if(*format == 'd')
			{
				n = va_arg(ap, int);
				sprintf(temp, "%d", n);
				int len = strlen(temp) + 1;
				for(int i = 0; i < len; ++i)
				{
					putchar(temp[i]);
				}
				format++;

			}

		}
		putchar(*format);
		format++;
	}
}

int main()
{
	my_printf("\nmy age is %d\n", 10);
	return 0;
}
