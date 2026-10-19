# Write your MySQL query statement below
select name as Customers
from Customers c
LEFT JOIN Orders o ON c.id = o.customerId
where o.id is NULL;
