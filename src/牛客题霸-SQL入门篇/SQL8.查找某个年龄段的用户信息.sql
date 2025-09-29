/**
 * @nc app=nowcoder id=be54223075cc43ceb20e4ce8a8e3e340 topic=199 question=1971603 lang=MySQL
 * 2025-09-29 11:06:28
 * https://www.nowcoder.com/practice/be54223075cc43ceb20e4ce8a8e3e340?tpId=199&tqId=1971603
 * [SQL8] 查找某个年龄段的用户信息
 */

/** @nc code=start */

select
    device_id,
    gender,
    age
from
    user_profile
where
    age between 20
    and 23

/** @nc code=end */
