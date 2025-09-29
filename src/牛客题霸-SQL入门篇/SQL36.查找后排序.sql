/**
 * @nc app=nowcoder id=cd4c5f3a64b4411eb4810e28afed6f54 topic=199 question=2002632 lang=MySQL
 * 2025-09-29 10:47:23
 * https://www.nowcoder.com/practice/cd4c5f3a64b4411eb4810e28afed6f54?tpId=199&tqId=2002632
 * [SQL36] 查找后排序
 */

/** @nc code=start */

select
    device_id,
    age
from
    user_profile
order by
    age asc;

/** @nc code=end */
