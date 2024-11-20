// Definition of findHigh function goes here
template <typename A , typename B , typename C>
void findHigh(A arr[], B length,int &index , C &high) {
    high = arr[0];
    for (int i = 0 ; i < length ; i++) {
        if (arr[i] > high) {
            index = i;
            high = arr[i];
        }
    }

}
