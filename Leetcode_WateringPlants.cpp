/*
2079. Watering Plants

Input: plants = [2,2,3,3], capacity = 5
Output: 14
*/
int findSteps( const vector<int>& input, int capacity )
{
    int steps = 0;
    int cap = capacity;
    int maxElement = *max_element( input.begin(), input.end());
    if( maxElement > capacity ) return -1;
    for( int i=0; i<input.size(); ++i )
    {
        if( input[i] <= cap )
        {
            cap -= input[i];
        }
        else
        {
            steps += (2*i);
            cap = capacity-input[i];
        }
        ++steps;
    }
    return steps;
}
