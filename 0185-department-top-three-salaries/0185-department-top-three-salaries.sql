# Write your MySQL query statement below
# Write your MySQL query statement below


with cte as (
    select * , 
    dense_rank() over (
        partition by departmentId
        order by salary desc
    ) rnk
    from Employee
)
select d.name as Department , e.name as Employee , e.salary as Salary
from cte e 
join Department d
on d.id = e.departmentId
where rnk <= 3
order by e.name;