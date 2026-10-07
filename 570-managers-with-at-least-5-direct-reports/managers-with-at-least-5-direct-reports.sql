# Write your MySQL query statement below
select e.name as name from employee as e left join employee as m on e.id=m.managerid group by e.id having count(m.managerid)>=5;