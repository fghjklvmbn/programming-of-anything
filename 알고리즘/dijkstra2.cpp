#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int num = 6;
int INF = 100000;
vector<pair<int, int> > a[7];
int d[7];

void dijstra(int start){
    d[start] = 0;
    priority_queue<pair<int, int> > pq;
    pq.push(make_pair(start, 0));

    while (!pq.empty()){
        int current = pq.top().first;
        int distance = -pq.top().second;
        pq.pop();
    
        if(d[current] < distance) continue;
        for (int i = 0; i < a[current].size(); i++){
            int next = a[current][i].first;
            int nextDistance = distance + a[current][i].second;
            
            // 저렴하면 교체!
            if(nextDistance < d[next]){
                d[next] = nextDistance;
                pq.push(make_pair(next, -nextDistance));
            }
        }
    }
}

int main(void){
    for (int i = 0; i < num; i++){
        d[i] = INF;
    }

    a[1].push_back(make_pair(2, 2));
    a[1].push_back(make_pair(3, 5));
    a[1].push_back(make_pair(4, 1));

    a[2].push_back(make_pair(1, 2));
    a[2].push_back(make_pair(3, 3));
    a[2].push_back(make_pair(4, 2));


    a[3].push_back(make_pair(1, 5));
    a[3].push_back(make_pair(2, 3));
    a[3].push_back(make_pair(4, 3));
    a[3].push_back(make_pair(5, 1));
    a[3].push_back(make_pair(6, 5));

    a[4].push_back(make_pair(1, 1));
    a[4].push_back(make_pair(2, 2));
    a[4].push_back(make_pair(3, 3));
    a[4].push_back(make_pair(5, 1));

    a[5].push_back(make_pair(3, 1));
    a[5].push_back(make_pair(4, 1));
    a[5].push_back(make_pair(6, 2));

    a[6].push_back(make_pair(3, 5));
    a[6].push_back(make_pair(5, 2));

    dijstra(1);

    for (int i = 1; i < 7; i++){
        printf("%d ", d[i]);
    }
    
}