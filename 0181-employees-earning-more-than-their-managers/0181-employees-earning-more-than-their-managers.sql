# Write your MySQL query statement below

select e.name as Employee
from Employee e
left join Employee m
on m.id = e.managerId
where e.salary > m.salary;