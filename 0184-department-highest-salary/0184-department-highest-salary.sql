# Write your MySQL query statement below
select d.name as department,e.name as employee,e.salary as salary
from employee as e
left join department as d
on e.departmentid=d.id
WHERE e.salary = (
    SELECT MAX(salary)
    FROM Employee
    WHERE departmentId = e.departmentId
);