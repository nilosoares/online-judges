SELECT DISTINCT STATION.CITY
FROM STATION
WHERE LOWER(RIGHT(STATION.CITY, 1)) IN ('a', 'e', 'i', 'o', 'u')
