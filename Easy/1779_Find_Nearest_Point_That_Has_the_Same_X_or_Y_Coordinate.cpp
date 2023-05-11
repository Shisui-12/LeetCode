class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int len = points.size();
        int nearest_index = -1;
        int minimal_distance_value = 99999;
        for(int i = 0; i < len; i++)
        {
           if(points[i][0] == x || points[i][1] == y)
           {
             int x_dis = abs((points[i][0] - x));
             int y_dis = abs(points[i][1] - y);
             int manhattan_dist = x_dis + y_dis;
              // cout << "x ->" << points[i][0] << " " << "y ->" << points[i][1] << " " << manhattan_dist << endl;
              if (manhattan_dist < minimal_distance_value)
              {
                nearest_index = i;
                minimal_distance_value = manhattan_dist;
              }
           }
        }
        return nearest_index;
    }
};
