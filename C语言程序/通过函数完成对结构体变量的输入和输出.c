/*
2022��8��9��10��22��
ͨ��������ɶԽṹ���������������
Ŀ�ģ��˽⺯����ָ�룬�ṹ��֮��Ĺ�ϵ
*/

#include <stdio.h>

struct wml {
	int age;
	char sex;
	float score;
};

void input (struct wml *p){             //�����޸Ľṹ��ĺ����������޸Ľṹ���ڵ�ֵ
	(*p).age = 19;
	p->score = 100.0;
	(*p).sex = 'S';
}

void output (struct wml q){            //��������ṹ������ĺ���������Ҫ�õ�ָ��
	printf ("%d %c %f\n",q.age,q.sex,q.score);
}

int main (){
	struct wml wml1 = {
		18,'f',99.9
	};
	//�޸�֮ǰ�Ľṹ�����;
	printf ("%d %c %f\n",wml1.age,wml1.sex,wml1.score);
	
	input(&wml1);
	output(wml1);
}

/*
���������е�������Ϊ��
------------------------------
18 f 99.900002
19 S 100.000000
------------------------------
*/