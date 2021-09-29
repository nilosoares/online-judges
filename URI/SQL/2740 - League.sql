SELECT bq.team

FROM (
	(
		SELECT CONCAT('Podium: ', first3.team) AS team, first3.position
		FROM league AS first3
		LIMIT 3
	)

	UNION

	(
		SELECT CONCAT('Demoted: ', last2.team) AS team, last2.position
		FROM (
			SELECT *
			FROM league
			ORDER BY position DESC
			LIMIT 2
		) AS last2
		ORDER BY last2.position ASC
	)
) AS bq

ORDER BY bq.position ASC
