```
Write a SQL query to find the titles of episodes that have aired during the holiday season, usually in December in the United States.
    Your query should output a table with a single column for the title of each episode.
    Try to find a better solution than LIKE if you can!
```

SELECT "title" FROM "episodes" WHERE air_date LIKE "_____12___";

SELECT "title"
FROM "episodes"
WHERE instr(air_date, 12) = 6;

```
Write a SQL query to find, for each year, the first day of the year that PBS released a Cyberchase episode.
    Your query should output a table with two columns, one for the year and one for the earliest month and day an episode was released that year.
```

SELECT "title",strftime('%Y', air_date) as year, "air_date" FROM "episodes" GROUP BY year; 
