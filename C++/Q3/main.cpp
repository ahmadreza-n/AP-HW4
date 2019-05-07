#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"

int main()
{
	CSquare sqr(12, 2, 2);
	CSphere sph(5, 1.5, 4.5);
	CCube cub(2.2);
	CCircle cir(3.5, 6, 9);
	CShape *ptr[4] = {&cir, &sqr, &sph, &cub};

	for (int x = 0; x < 4; ++x)
		std::cout << *(ptr[x]) << '\n';

	CPoint threeD{1, 2, 3}, twoD{1, 2};

	*ptr[0] + twoD;
	*ptr[1] + twoD;
	*ptr[2] + threeD;
	*ptr[3] + threeD;

	for (int x = 0; x < 4; ++x)
		std::cout << *(ptr[x]) << '\n';

	return 0;
}
