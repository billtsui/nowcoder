/**
 * @nc app=nowcoder id=2ae16bf2fd54415f99344e6024470d57 topic=199 question=1971384 lang=MySQL
 * 2025-09-29 11:05:51
 * https://www.nowcoder.com/practice/2ae16bf2fd54415f99344e6024470d57?tpId=199&tqId=1971384
 * [SQL7] 查找年龄大于24岁的用户信息
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
    age > 24;

/** @nc code=end */
