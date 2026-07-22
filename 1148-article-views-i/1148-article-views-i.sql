# Write your MySQL query statement below
select Distinct viewer_id AS id from views
where author_id = viewer_id 
order by id ASC;