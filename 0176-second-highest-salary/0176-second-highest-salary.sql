# Write your MySQL query statement below


with cte as(
    select * , 
  DENSE_RANK() over (
        order by salary desc
    ) as rnk
    from Employee
)
Select MAX(salary) as SecondHighestSalary from cte
where rnk = 2; 