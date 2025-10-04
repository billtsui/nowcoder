/**
 * @nc app=nowcoder id=1fe33d534843473eb086c4b42655e13d topic=290 question=2368397 lang=C
 * 2025-10-04 09:47:13
 * https://www.nowcoder.com/practice/1fe33d534843473eb086c4b42655e13d?tpId=290&tqId=2368397
 * [BC66] 牛牛的通勤
 */

/** @nc code=start */

#include <stdio.h>

#define SPEED_WALK 1
#define SPEED_TAXI 10
#define WAIT_TAXI_TIME 10

int main() {
    int distance;
    scanf("%d", &distance);
    float time_walk = distance / SPEED_WALK * 1.0;
    float time_taxi = WAIT_TAXI_TIME + distance / SPEED_TAXI * 1.0;
    if (time_walk < time_taxi) {
        printf("%s\n", "w");
    } else {
        printf("%s\n", "v");
        return 0;
    }
}
/** @nc code=end */
