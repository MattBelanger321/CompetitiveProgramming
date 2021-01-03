#include <iostream>
#include <math.h>
#include <iomanip>

using std::cin, std::cout, std::endl, std::pair, std::min;
using ll = long long;
pair<pair<int, int>, int> sensors[1000]; 
pair<double, double> distLR[1000];

double pointDistance(int x1, int y1, int x2, int y2)
{
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

int main(void)
{
  bool impossible;
  int testCase;
  int w, n;
  double dist, minDist;
  cin >> testCase;
  while (testCase--)
  {
    minDist = 100000;
    impossible = false;
    cin >> w >> n;

    for (int i = 0; i < n; i++)
    {
      cin >> sensors[i].first.first >> sensors[i].first.second >> sensors[i].second;
      distLR[i].first = sensors[i].first.first - sensors[i].second;
      distLR[i].second = w - sensors[i].first.first - sensors[i].second;

      if (distLR[i].first > 0) 
		  minDist = std::min(minDist, distLR[i].first);
      if (distLR[i].second > 0)
		  minDist = std::min(minDist, distLR[i].second); 
      if (distLR[i].first <= 0 && distLR[i].second <= 0)
      {
        impossible = true;
        break;
      } 
    }

    if (impossible) 
    {
      cout << 0 << endl;
      continue;
    }
    for (int i = 0; i < n - 1; i++)
    {
      dist = pointDistance(sensors[i].first.first, sensors[i].first.second, sensors[i + 1].first.first, sensors[i + 1].first.second);
      dist -= (float)(sensors[i].second + sensors[i + 1].second);

      if (dist > 0) 
		minDist = std::min(minDist, dist);
      else if (dist <= 0) 
      {
        if (distLR[i].first == distLR[i + 1].first)
			minDist = min(minDist, min(distLR[i].first, distLR[i + 1].first));

        else if (distLR[i].second == distLR[i + 1].second)
			minDist = min(minDist, min(distLR[i].second, distLR[i + 1].second));

        else 
        {
          impossible = true;
          break;
        }  
      }
    }

    if (impossible) 
		cout << 0 << endl;    
    else 
		cout << std::setprecision(6) << std::fixed << minDist/2 << endl;
  }

}