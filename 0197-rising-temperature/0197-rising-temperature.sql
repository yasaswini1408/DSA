# Write your MySQL query statement below
select w2.id
from weather w1 
join weather w2
-- on w2.recordDate = DATE_ADD(w1.recordDate, INTERVAL 1 DAY) 
on DATEDIFF(w2.recordDate, w1.recordDate) = 1
where w1.temperature<w2.temperature;
