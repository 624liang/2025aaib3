///week05-1.cpp
///LeetCode �ǲ߭p�e Built-In Functions 58. Length of Last Wordn
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //��r�� string �� iostream �� cin �ӥ�
        string word; //�r��
        //ss >> word; //���O cin >> word �@��,�{�b�� ss �i�H�� ss >> word
        //ss >> word; //Ū��2�� �N�|Ū���2��
        while(ss >> word){ //�@��Ū Ū�줣��Ū����
            //�̭����򳣨S��
        }
        cout << word; //�����@�ӹ���,��Ū���

        return word.length(); //�̫����װe�X�h
    }
};
