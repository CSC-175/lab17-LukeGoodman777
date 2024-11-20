// Definition of findHigh function goes here
template <typename A , typename B , typename C>
void findhigh(A arr[], B length,int &index , C &high) {
    high = arr[0];
    for (int i = 1 ; i < length ; i++) {
        if (arr[i] > high) {
            index = i;
            high = arr[i];
        }
    }

}
