/**
 * @nc app=nowcoder id=0355033fc2244cdaa09b2bd6e794c762 topic=199 question=1975665 lang=MySQL
 * 2025-09-29 11:17:36
 * https://www.nowcoder.com/practice/0355033fc2244cdaa09b2bd6e794c762?tpId=199&tqId=1975665
 * [SQL13] Where in 和Not in
 */
 
/** @nc code=start */
select
    device_id,
    gender,
    age,
    university,
    gpa
from
    user_profile
where
    university in ('北京大学', '复旦大学', '山东大学')
/** @nc code=end */