/**
 * @nc app=nowcoder id=d023ae0191e0414ca1b19451099a39f1 topic=199 question=2002634 lang=MySQL
 * 2025-09-29 11:02:00
 * https://www.nowcoder.com/practice/d023ae0191e0414ca1b19451099a39f1?tpId=199&tqId=2002634
 * [SQL38] 查找后降序排列
 */

/** @nc code=start */

select
    device_id,
    gpa,
    age
from
    user_profile
order by
    gpa desc,
    age desc;

/** @nc code=end */
