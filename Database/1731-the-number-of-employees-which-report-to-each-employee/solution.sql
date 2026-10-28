# Write your MySQL query statement below
select ee.employee_id , ee.name , COUNT(e.employee_id) AS reports_count , ROUND(AVG(e.age))AS average_age
from Employees e
JOIN Employees ee ON e.reports_to = ee.employee_id
GROUP BY ee.employee_id, ee.name
ORDER BY ee.employee_id;
