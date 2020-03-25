#include "node.h"

node* execute() {
    // OPEN Ϊ��
    if (OPEN.size() < 1) {
        return NULL;
    }
    
    // ��ù�����С�Ľڵ�
    node *now = get();
    
    // ɾ�� OPEN ����Ԫ��
    vector<node*>::iterator it;
    for (it = OPEN.begin(); it != OPEN.end(); it++) {
        if (*it == now) {
            OPEN.erase(it);
            break;
        }
    }

    // ���� CLOSE ��
    CLOSE.push_back(now);

    // ���ִ�Ŀ��
    if (*now == target) return now;
    
    // ��չ�ýڵ�
    now->expand();

    cout << "OPEN: " << OPEN.size() << "\tCLOSE: " << CLOSE.size() << '\n';

    // �ݹ����
    node*n = execute(); 
    
    // ����Ŀ��
    if(n) return n;

    // ����ʧ��
    return NULL;
}

int main() {
    OPEN.clear();
    CLOSE.clear();
    node *st = new node(start);
    OPEN.push_back(st);
    return output(execute());
}