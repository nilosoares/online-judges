SELECT *
FROM (
	SELECT candidate.name, ROUND(((score.math * 2) + (score.specific * 3) + (score.project_plan * 5)) / 10, 2) AS candidate_score
	FROM candidate
	INNER JOIN score ON score.candidate_id = candidate.id
) AS base_query
ORDER BY candidate_score DESC
