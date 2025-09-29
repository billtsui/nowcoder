/**
 * @nc app=nowcoder id=c12a056497404d1ea782308a7b821f9c topic=199 question=1971604 lang=MySQL
 * 2025-09-29 11:07:21
 * https://www.nowcoder.com/practice/c12a056497404d1ea782308a7b821f9c?tpId=199&tqId=1971604
 * [SQL9] 查找除复旦大学的用户信息
 */

/** @nc code=start */

select
    device_id,
    gender,
    age,
    university
from
    user_profile
where
    university != '复旦大学';

/** @nc code=end */
