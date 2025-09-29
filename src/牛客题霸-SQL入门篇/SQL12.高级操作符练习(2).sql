/**
 * @nc app=nowcoder id=25bcf6924eff417d90c8988f55675122 topic=199 question=1971821 lang=MySQL
 * 2025-09-29 11:16:25
 * https://www.nowcoder.com/practice/25bcf6924eff417d90c8988f55675122?tpId=199&tqId=1971821
 * [SQL12] 高级操作符练习(2）
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
    gpa > 3.7
    or university = '北京大学'
/** @nc code=end */