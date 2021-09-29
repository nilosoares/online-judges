SELECT
	life_registry.name,
	ROUND(CAST(life_registry.omega AS NUMERIC) * 1.618, 3) AS factor
FROM dimensions
INNER JOIN life_registry ON life_registry.dimensions_id = dimensions.id
WHERE
	dimensions.name IN ('C774', 'C875') AND
	life_registry.name LIKE 'Richard%'
ORDER BY ROUND(CAST(life_registry.omega AS NUMERIC) * 1.618, 3) ASC;
