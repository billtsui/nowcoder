/**
 * @nc app=nowcoder id=d5ac4c878b63477fa5e5dfcb427d9102 topic=199 question=1975666 lang=MySQL
 * 2025-09-29 11:18:45
 * https://www.nowcoder.com/practice/d5ac4c878b63477fa5e5dfcb427d9102?tpId=199&tqId=1975666
 * [SQL14] 操作符混合运用
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
    (
        gpa > 3.5
        and university = '山东大学'
    )
    or (
        gpa > 3.8
        and university = '复旦大学'
    )
order by
    device_id asc
/** @nc code=end */