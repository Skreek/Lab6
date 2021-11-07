#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
#include"zachetka.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");

	struct Zachetka z = {
		.firstName = "Сергей",
		.middleName = "Александрович",
		.lastName = "Дунаевский",
		.zachetkaid = "1БИК18019",
		.terms = {
			{
				.number = 1,
				.year = 2018,
				.subjects =
				{
					{
						.name = "Высшая математика",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "18.01.2019",
						.teacher = "Лакерник А.Р."
					},
					{
						.name = "Философия",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "28.01.2019",
						.teacher = "Плужникова Н.Н."
					},
					{
						.name = "АГиЛА",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "31.01.2019",
						.teacher = "Пискарев С.И."
					},
					{
						.name = "Англ. Яз.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "25.12.2018",
						.teacher = "Громова Л.Н."
					},
					{
						.name = "ИП(ВИВ)",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "27.12.2018",
						.teacher = "Гусев В.И."
					},
					{
						.name = "РЯиКР",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "28.12.2018",
						.teacher = "Горшкова Д.И."
					},
					{
						.name = "Информатика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "09.01.2019",
						.teacher = "Мацкевич А.Г."
					},
		{
						.name = "ВВП",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "11.01.2019",
						.teacher = "Ванюшина А.В."
					}
				}
			},
		{
				.number = 2,
				.year = 2019,
				.subjects =
				{
					{
						.name = "История",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "18.06.2019",
						.teacher = "Полянская Ю.М."
					},
					{
						.name = "Англ. яз.",
						.markType = Exam,
						.mark = {.mark = Sat},
						.date = "24.06.2019",
						.teacher = "Машенская Т.М."
					},
					{
						.name = "Высшая математика",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "28.06.2019",
						.teacher = "Лакерник А.Р."
					},
					{
						.name = "Информатика",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "02.07.2019",
						.teacher = "Кравченко О.М."
					},
					{
						.name = "Физика",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "04.06.2019",
						.teacher = "Иноземцева Н.Г."
					},
					{
						.name = "ЭИиИ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "Кузовков Д.В."
					},
					{
						.name = "ТОЭ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "Гукаян А.А."
					},
					{
						.name = "Физ-ра",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "10.06.2019",
						.teacher = "Горячева Н.Н."
					},
				{
						.name = "КГ",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "24.09.2019",
						.teacher = "Пискарева И.И."
					}

				}
			}

		},


	};

	printf("Студент: %s %s %s\n", z.lastName, z.firstName, z.middleName);
	printf("Номер зачетной книжки : %s \n", z.zachetkaid);
	printf("===============================================================\n");
	for (int i = 0; z.terms[i].number; ++i)
	{

		printf("Cеместр %hu год %hu \n", z.terms[i].number, z.terms[i].year);
		printf("%-20s\t%-6s\t%-11s\t%-20s\r\n", "Предмет", "Оценка", "Дата", "Преподаватель");
		for (int j = 0; z.terms[i].subjects[j].name[0]; j++)
		{
			printf("%-20s\t", z.terms[i].subjects[j].name);
			if (z.terms[i].subjects[j].markType == Zachet)
			{
				printf("%-6s\t",
					z.terms[i].subjects[j].mark.zachet ? "Зачет" : "Не зачет");
			}
			else
			{
				printf("%-6d\t", z.terms[i].subjects[j].mark.mark);
			}
			printf("%-11s\t", z.terms[i].subjects[j].date);
			printf("%-20s\t", z.terms[i].subjects[j].teacher);
			printf("\r\n");
		}
		printf("===============================================================\n");
	}
}