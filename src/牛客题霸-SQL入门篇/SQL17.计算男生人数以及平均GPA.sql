/**
 * @nc app=nowcoder id=7d9a7b2d6b4241dbb5e5066d7549ca01 topic=199 question=1975669 lang=MySQL
 * 2025-09-29 11:42:41
 * https://www.nowcoder.com/practice/7d9a7b2d6b4241dbb5e5066d7549ca01?tpId=199&tqId=1975669
 * [SQL17] 计算男生人数以及平均GPA
 */
 
/** @nc code=start */
select
    count(id) as male_num,
    avg(gpa) as avg_gpa
from
    user_profile
where
    gender = 'male';

/** @nc code=end */