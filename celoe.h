#ifndef Z_NUMBER_H_INCLUDED
#define Z_NUMBER_H_INCLUDED
#include N_Number.h //надеюсь, это работает так?

class Z_Number
{
public:
	int sign;
	int number[Size];
	int last_position;

	Z_Number ABS_Z_N() // Абсолютная величина числа, результат - натуральное
		{		// сейчас переработаю под sign и залью к полуночи
			if (number[0] == 1)  return number[0] = 0; 
			else return bdy[0];
		}

		int POZ_Z_D() // Определение положительности числа (2 - положительное, 0 — равное нулю, 1 - отрицательное)
		{ 		// сейчас переработаю под sign
			if (number[0] == 0 && bdy[1] != 0)  return 2;
			if (number[0] == 0)  return 0; 
			if (number[0] == 1)  return 1;
		}

		Z_Number MUL_ZM_Z() //Умножение целого на (-1)
		{			// сейчас переработаю под sign и залью к полуночи
			if (bdy[0] == 1)  return bdy[0] = 0; 
			if (bdy[0] == 0 && bdy[0] != 0)  return bdy[0] = 1; 
			else return bdy[0];
		}

	Z_Number TRANS_N_Z(N_Number n1) //Преобразование натурального в целое 
	{ 				// пишу до полуночи, с Алины кофе утром!)
		return;
	}

	N_Number TRANS_Z_N() 		// Преобразование натурального в целое
	{ 				// пишу до полуночи, с Алины кофе утром!)
		return;
	}

	Z_Number ADD_ZZ_Z(Z_Number z2) // Сложение целых чисел
	{
		Z_Number result;
		N_Number abs1 = ABS_Z_N();
		N_Number abs2 = z2.ABS_Z_N();
		if ((sign == 0) && (z2.sign == 0))
		{
			result.number = (abs1.ADD_NN_N(abs2));
			result.sign = 0;
		} else
		{
			if ((sign == 1) && (z2.sign == 1))
			{
				result = TRANS_N_Z(abs1.ADD_NN_N(abs2));
				result.sign = 1;
			} else
			{
				int comp = abs1.COM_NN_D(abs2);
				if(comp == 1)
				{
					result = TRANS_N_Z(abs2.SUB_NN_N(abs1));
					result.sign = z2.sign;
				} else
				{
					result = TRANS_N_Z(abs1.SUB_NN_N(abs2));
					result.sign = sign;
				}
				}
			}
			
		}
		return result;
	} 

	Z_Number SUB_ZZ_Z(Z_Number z2) // Вычитание целых чисел
	{
		Z_Number result;
		Z_Number temp;
		
		N_Number abs1 = ABS_Z_N();
		N_Number abs2 = z2.ABS_Z_N();
		z2.sign = -z2.sign;
		result = TRANS_N_Z(abs1.ADD_NN_N(abs2));
		return result;
	}

	Z_Number MUL_ZZ_Z(Z_Number z2) // Умножение целых чисел
	{
		Z_Number result;
		N_Number abs1 = ABS_Z_N();
		N_Number abs2 = z2.ABS_Z_N();
		if (sign == z2.sign)
		{
			result = TRANS_N_Z(abs1.MUL_NN_N(abs2));
			result.sign = 0;
		} else {
			result = TRANS_N_Z(abs1.MUL_NN_N(abs2));
			result.sign = 1;
		}
		return result;
	}

	Z_Number DIV_ZZ_Z(N_Number z2) // Частное от деления большего целого числа на меньшее или равное натуральное с остатком (делитель отличен от нуля)
	{				// проверка на ненулевое частное вроде есть в N_Number, ее не стал дублировать здесь
		Z_Number result;
		N_Number abs1 = ABS_Z_N();
		N_Number abs2 = z2.ABS_Z_N();
		if (sign == z2.sign)
		{
			result = TRANS_N_Z(abs1.DIV_NN_N(abs2));
			result.sign = 0;
		} else {
			result = TRANS_N_Z(abs1.DIV_NN_N(abs2));
			result.sign = 1;
		}
		return result;
	}

	celoe MOD_ZZ_Z(celoe c1)// Остаток от деления большего целого числа на меньшее или равное натуральное с остатком (делитель отличен от нуля)
	{ //я тут несного накосячил, так что перепишу и залью к полуночи
		return;
	}


};
