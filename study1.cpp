#include <stdio.h>

/*int main()
	{
	printf("Hello\nWorld!\n");
	return 0;

	}*/



/*#include <iostream>
int main()
{
	std::cout << "Hello\nWorld!\n";
	return 0;

}*/


/*class OrangeBox {
public:
	void Add(int addorange);
	void Del(int delorange);
	void Empty();
	int GetTotal() {
		return total;
	}
private:
	int total;
};

void OrangeBox::Add(int addorange)
{
	total += addorange;
	}
void OrangeBox::Del(int delorange)
{
	total -= delorange;
	if (total < 0) Empty();
}
void OrangeBox::Empty()
{
	total = 0;
}
int main()
{
	OrangeBox myOrangeBox;

	myOrangeBox.Empty();
	myOrangeBox.Add(57);
	myOrangeBox.Del(26);
	printf("���� ���� ������: %d��\n", myOrangeBox.GetTotal());
	return 0;
}*/

class OrangeBox {
public :
	OrangeBox ();
	~OrangeBox ();
}

	OrangeBox::~OrangeBox()
{
	printf("������ ���� ������Ʈ �ӹ� �Ϸ�\n");
}


int main()
{
	OrangeBox myOrangeBox;

	myOrangeBox.Add(5);
	printf("���ڼ��� ������ : %d��\n", 
		myOrangeBox.GetTotal());
	return 0;
} //��� ���忡���� ����