class Solution {
public:
   int x1, y1;
   const double pi = M_PI;
    double angle_from_me(vector<int>& point) {
        int x2 = point[0];
        int y2 = point[1];
        int height = y2 - y1;
        int width = x2 - x1;
        double alpha = atan2(height, width) * (180 / pi);
        return (alpha >= 0) ? alpha : alpha + 360;
    }
    
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        x1 = location[0];
        y1 = location[1];
        int points_on_me = 0;
        vector<vector<int>> points_not_on_me;
        for (vector<int>& point : points) {
            if (point == location) {
                points_on_me++;
            } else {
                points_not_on_me.push_back(point);
            }
        }
        points = points_not_on_me;
        
        vector<double> angles;
        for (vector<int>& point : points) {
            angles.push_back(angle_from_me(point));
            angles.push_back(angles.back() + 360);
        }
        sort(angles.begin(), angles.end());

        int most_points_observable = 0, i = 0, j = 0;
        int size = angles.size();
        while (j < size) {
            while ((j < size) && (angles[j] - angles[i] <= angle)) j++;
            
            most_points_observable = max(j - i, most_points_observable);

            while ((j < size) &&  (i < j) && (angles[j] - angles[i] > angle)) i++;
        }
            return points_on_me + most_points_observable;
    }
    
};
