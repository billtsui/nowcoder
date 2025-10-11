/**
 * @nc app=nowcoder id=e00bbac732cb4b6bbc62a52b930cb15e topic=199 question=1975672 lang=MySQL
 * 2025-10-11 20:09:26
 * https://www.nowcoder.com/practice/e00bbac732cb4b6bbc62a52b930cb15e?tpId=199&tqId=1975672
 * [SQL20] 分组排序练习题
 */

/** @nc code=start */

select
    university,
    avg(question_cnt) as avg_question_cnt
from
    user_profile
group by
    university
order by
    avg_question_cnt

/** @nc code=end */
