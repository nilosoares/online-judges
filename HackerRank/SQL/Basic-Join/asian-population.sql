SELECT SUM(CITY.population) AS populations
FROM CITY
INNER JOIN COUNTRY ON COUNTRY.CODE = CITY.COUNTRYCODE
WHERE COUNTRY.CONTINENT = 'Asia';