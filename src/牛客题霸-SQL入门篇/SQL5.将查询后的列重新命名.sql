/**
 * @nc app=nowcoder id=0d8f49aeaf7a4e1cb7fecec980712113 topic=199 question=1971243 lang=MySQL
 * 2025-09-29 10:46:38
 * https://www.nowcoder.com/practice/0d8f49aeaf7a4e1cb7fecec980712113?tpId=199&tqId=1971243
 * [SQL5] 将查询后的列重新命名
 */

/** @nc code=start */

select
    device_id as 'user_infos_example'
from
    user_profile
limit
    2;
/** @nc code=end */
