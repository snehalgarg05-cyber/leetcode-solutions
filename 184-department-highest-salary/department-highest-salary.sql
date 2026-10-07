# Write your MySQL query statement below
select d.name as Department,e.name as Employee, e.salary as Salary from employee as e left join department as d on e.departmentid=d.id where e.salary=(
    select max(salary) from employee e2
    where e2.departmentid=e.departmentid
);