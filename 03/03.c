#include <stdio.h>

/*
 * Из-за того, что на моем ПК совместно scanf и printf не запускаются
 * пришлось сделасть так.
 * Для проверки закоментируйте  11-15 строки
 * и раскомментируйте строки scanf
 */

int main (int argc, char **argv){
	int a, b, c, d, e, x;
	a = 4;
	b = 2;
	c = 4;
	d = 7;
	e = 0;
	
	// 1 задание. Наибольшее число
	//scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	x = a;
	if (x<b)
		x = b;
	else if (x<c)
		x = c;
	else if (x<d)
		x = d;
	else if (x<e)
		x = e;
	printf("%d\n", x);
	
	// 2 задание. Наименьшее число
	//scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	x = a;
	x = (x>b) ? b : x;
	x = (x>c) ? c: x;
	x = (x>d) ? d : x;
	x = (x>e) ? e : x;
	printf("%d\n", x);
	
	// 3 задание. Ввести числа в порядке возрастания
	//scanf("%d%d%d", &a, &b, &c);
	if (a<b && b<c)
		printf("YES\n");
	else
		printf("NO\n");
	
	// 4 задание. Времена года
	// 12-2 winter (зима)
	// 3-5 spring (весна)
	// 6-8 summer (лето)
	// 9-11 autumn (осень)
	int month = 5;
	//scanf("%d", &month);
	if (month>11)
		printf("winter");
	else if (month>8)
		printf("autumn");
	else if (month>5)
		printf("summer");
	else if (month>2)
		printf("spring");
	else
		printf("winter");
	
	
	return 0;
}
