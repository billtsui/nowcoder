/**
 * @nc app=nowcoder id=08c9846a423540319eea4be44e339e35 topic=199 question=1971605 lang=MySQL
 * 2025-09-29 11:09:28
 * https://www.nowcoder.com/practice/08c9846a423540319eea4be44e339e35?tpId=199&tqId=1971605
 * [SQL10] 用where过滤空值练习
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
    age is not null and age !='';

/** @nc code=end */