#include <iostream>
#include <cmath> // �ޤJ cmath �w�H�K�ϥ� sqrt �ζi��ƾǧP�_

/**
 * ��� prime(n)�G�P�_��� n �O�_����ơC
 * @param n �n�ˬd����ơC
 * @return �p�G n �O��ơA�^�� 1�F�_�h�^�� 0�C
 */
int prime(int n)
{
    // 1. �B�z��ɱ���G�p�󵥩� 1 ���Ƥ��O��ơC
    if (n <= 1) return 0;

    // 2. 2 �O�ߤ@�����ƽ�ơC
    if (n == 2) return 1;

    // 3. �Ҧ��j�� 2 �����Ƴ����O��ơC
    if (n % 2 == 0) return 0;

    // 4. �ˬd�q 3 �}�l�� sqrt(n) ���Ҧ��_�ơC
    // �u�ݭn�ˬd�� i * i <= n (�Y i <= sqrt(n))�A�]���Y n ����j���]�l�A
    // �h�����@�ӧ�p���]�l�w�g�Q�ˬd�L�C
    for (int i = 3; i * i <= n; i += 2)
    {
        // �p�G n ��Q i �㰣�A�h n ���O��ơC
        if (n % i == 0)
        {
            return 0;
        }
    }

    // �M�������A�S�����]�l�An �O��ơC
    return 1;
}

int main()
{
  int n;
  // �q�зǿ�JŪ���@�Ӿ�� n
  std::cin >> n;
  // �I�s prime(n) ��ƨåH [���G] �榡��X
  std::cout << "[" << prime(n) << "]";
  return 0;
}
