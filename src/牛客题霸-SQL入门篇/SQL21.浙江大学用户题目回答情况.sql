/**
 * @nc app=nowcoder id=55f3d94c3f4d47b69833b335867c06c1 topic=199 question=1975673 lang=MySQL
 * 2025-10-11 21:38:46
 * https://www.nowcoder.com/practice/55f3d94c3f4d47b69833b335867c06c1?tpId=199&tqId=1975673
 * [SQL21] 浙江大学用户题目回答情况
 */

/** @nc code=start */

select
    device_id,
    question_id,
    result
from
    question_practice_detail
where
    device_id in (
        select
            device_id
        from
            user_profile
        where
            university = '浙江大学'
    )
order by
    question_id asc
    
/** @nc code=end */
