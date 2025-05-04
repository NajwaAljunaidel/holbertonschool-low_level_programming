#include <unistd.h>  // تضمين مكتبة unistd.h لاستخدام دالة write

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
write(1, "_putchar\n", 9);  // الكتابة على المخرج القياسي (الشاشة) باستخدام write
return 0;
}
