#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

int main() {

    int num;
    int key;
    while (scanf("%d", &num) && num) {
        vector<int> v[13];
        while (num--) {
            scanf("%d", &key);
            int temp = key % 13;
            v[temp].push_back(key);
        }
        for (int i = 0; i < 13; ++i) {
            printf("%d%s", i, "#");
            if (v[i].empty()) {
                printf("NULL\n");
            } else {
                vector<int>::iterator it = v[i].begin();
                for (; it != v[i].end(); ++it) {
                    printf("%s%d", it == v[i].begin() ? "" : " ", *it);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
