/**
 * @nc app=nowcoder id=009d8067d2df47fea429afe2e7b9de45 topic=199 question=1975670 lang=MySQL
 * 2025-10-11 19:45:07
 * https://www.nowcoder.com/practice/009d8067d2df47fea429afe2e7b9de45?tpId=199&tqId=1975670
 * [SQL18] 分组计算练习题
 */
 
/** @nc code=start */
select
    gender,
    university,
    count(id) as user_num,
    avg(active_days_within_30) as avg_active_day,
    avg(question_cnt) as avg_question_cnt
from
    user_profile
group by
    gender,
    university
order by
    gender,
    university asc
/** @nc code=end */