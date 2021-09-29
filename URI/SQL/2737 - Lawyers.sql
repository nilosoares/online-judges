SELECT base_query.name, base_query.customers_number
FROM (
	(
		SELECT lawyers.name, lawyers.customers_number, lawyers.customers_number AS "sort_column"
		FROM lawyers
		WHERE customers_number = (SELECT MAX(customers_number) FROM lawyers)
	)

	UNION

	(
		SELECT lawyers.name, lawyers.customers_number, lawyers.customers_number AS "sort_column"
		FROM lawyers
		WHERE customers_number = (SELECT MIN(customers_number) FROM lawyers)
	)
	
	UNION
	
	(
		SELECT 'Average' AS "name", CAST(AVG(customers_number) AS INTEGER) AS "customers_number", -1 AS "sort_column"
		FROM lawyers
	)
) AS base_query
ORDER BY sort_column DESC
