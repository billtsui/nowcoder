/**
 * @nc app=nowcoder id=2d2e37474197488fbdf8f9206f66651c topic=199 question=1971781 lang=MySQL
 * 2025-09-29 11:14:06
 * https://www.nowcoder.com/practice/2d2e37474197488fbdf8f9206f66651c?tpId=199&tqId=1971781
 * [SQL11] 高级操作符练习(1)
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
    gender = 'male'
    and gpa > 3.5
/** @nc code=end */