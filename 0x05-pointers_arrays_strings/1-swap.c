/**
* swap_int -  swaps the values of two integers
*
*@a : pointer of 1st integer
*@b : pointer of 2nd integer
*
*Return : void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
