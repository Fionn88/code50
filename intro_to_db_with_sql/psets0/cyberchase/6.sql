```
In 6.sql, list the titles of episodes from season 6 (2008) that were released early, in 2007.
```
SELECT "title" FROM "episodes" WHERE "air_date" >= '2007-01-01' AND "air_date" < '2008-01-01' AND season = 6;
