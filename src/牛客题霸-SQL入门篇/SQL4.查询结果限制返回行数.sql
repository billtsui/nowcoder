/**
 * @nc app=nowcoder id=c7ad0e2df4f647dfa5278e99894a7561 topic=199 question=1971238 lang=MySQL
 * 2025-09-29 10:44:51
 * https://www.nowcoder.com/practice/c7ad0e2df4f647dfa5278e99894a7561?tpId=199&tqId=1971238
 * [SQL4] 查询结果限制返回行数
 */

/** @nc code=start */

select
    device_id
from
    user_profile
limit
    2;

/** @nc code=end */
