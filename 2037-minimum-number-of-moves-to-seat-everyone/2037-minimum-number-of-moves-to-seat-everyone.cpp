class Solution {
public:
    void sort(vector<int>& ex){
        for(int i=0;i<ex.size()-1;i++){
            int min = i;
            for(int j=i+1;j<ex.size();j++){
                if(ex[min]>ex[j]){
                    min = j;
                }
            }
            if(i!=min){
                swap(ex[i],ex[min]);
            }
        }
    }
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats);
        sort(students);
        int c=0;
        for(int i=0;i<seats.size();i++){
            c+=abs(seats[i]-students[i]);
        }
        return c;
    }
};