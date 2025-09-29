/**
 * @nc app=nowcoder id=4e22fc5dbd16414fb2c7683557a84a4f topic=199 question=1975668 lang=MySQL
 * 2025-09-29 11:41:32
 * https://www.nowcoder.com/practice/4e22fc5dbd16414fb2c7683557a84a4f?tpId=199&tqId=1975668
 * [SQL16] 查找GPA最高值
 */

/** @nc code=start */
select
    max(gpa) as gpa
from
    user_profile
where
    university = '复旦大学';

/** @nc code=end */