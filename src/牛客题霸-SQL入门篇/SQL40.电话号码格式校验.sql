/**
 * @nc app=nowcoder id=2c2453e909c04c29a04c11e9d6b2c769 topic=199 question=11211983 lang=MySQL
 * 2025-09-29 11:26:37
 * https://www.nowcoder.com/practice/2c2453e909c04c29a04c11e9d6b2c769?tpId=199&tqId=11211983
 * [SQL40] 电话号码格式校验
 */
 
/** @nc code=start */
select
    id,
    name,
    phone_number
from
    contacts
where
    phone_number regexp '^[1-9]{1}[0-9]{9}$'
    or phone_number regexp '^[1-9]{3}-[0-9]{3}-[0-9]{4}$'
order by
    id asc;

/** @nc code=end */