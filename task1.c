#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>
#include"zachetka.h"

void main(void)
{
	setlocale(LC_ALL, "Rus");

	struct Zachetka z = {
		.firstName = "������",
		.middleName = "�������������",
		.lastName = "����������",
		.zachetkaid = "1���18019",
		.terms = {
			{
				.number = 1,
				.year = 2018,
				.subjects =
				{
					{
						.name = "������ ����������",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "18.01.2019",
						.teacher = "�������� �.�."
					},
					{
						.name = "���������",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "28.01.2019",
						.teacher = "���������� �.�."
					},
					{
						.name = "�����",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "31.01.2019",
						.teacher = "�������� �.�."
					},
					{
						.name = "����. ��.",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "25.12.2018",
						.teacher = "������� �.�."
					},
					{
						.name = "��(���)",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "27.12.2018",
						.teacher = "����� �.�."
					},
					{
						.name = "�����",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "28.12.2018",
						.teacher = "�������� �.�."
					},
					{
						.name = "�����������",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "09.01.2019",
						.teacher = "�������� �.�."
					},
		{
						.name = "���",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "11.01.2019",
						.teacher = "�������� �.�."
					}
				}
			},
		{
				.number = 2,
				.year = 2019,
				.subjects =
				{
					{
						.name = "�������",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "18.06.2019",
						.teacher = "��������� �.�."
					},
					{
						.name = "����. ��.",
						.markType = Exam,
						.mark = {.mark = Sat},
						.date = "24.06.2019",
						.teacher = "��������� �.�."
					},
					{
						.name = "������ ����������",
						.markType = Exam,
						.mark = {.mark = Good},
						.date = "28.06.2019",
						.teacher = "�������� �.�."
					},
					{
						.name = "�����������",
						.markType = Exam,
						.mark = {.mark = Excellent},
						.date = "02.07.2019",
						.teacher = "��������� �.�."
					},
					{
						.name = "������",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "04.06.2019",
						.teacher = "���������� �.�."
					},
					{
						.name = "����",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "�������� �.�."
					},
					{
						.name = "���",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "06.06.2019",
						.teacher = "������ �.�."
					},
					{
						.name = "���-��",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "10.06.2019",
						.teacher = "�������� �.�."
					},
				{
						.name = "��",
						.markType = Zachet,
						.mark = {.zachet = true},
						.date = "24.09.2019",
						.teacher = "��������� �.�."
					}

				}
			}

		},


	};

	printf("�������: %s %s %s\n", z.lastName, z.firstName, z.middleName);
	printf("����� �������� ������ : %s \n", z.zachetkaid);
	printf("===============================================================\n");
	for (int i = 0; z.terms[i].number; ++i)
	{

		printf("C������ %hu ��� %hu \n", z.terms[i].number, z.terms[i].year);
		printf("%-20s\t%-6s\t%-11s\t%-20s\r\n", "�������", "������", "����", "�������������");
		for (int j = 0; z.terms[i].subjects[j].name[0]; j++)
		{
			printf("%-20s\t", z.terms[i].subjects[j].name);
			if (z.terms[i].subjects[j].markType == Zachet)
			{
				printf("%-6s\t",
					z.terms[i].subjects[j].mark.zachet ? "�����" : "�� �����");
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