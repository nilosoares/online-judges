SELECT
	h.hacker_id,
	h.name,
	COUNT(*) AS total_challenges
FROM Hackers h
INNER JOIN Challenges c ON c.hacker_id = h.hacker_id
GROUP BY h.hacker_id, h.name
HAVING
	total_challenges = (
		SELECT COUNT(*) AS `max`
		FROM Challenges c
		GROUP BY c.hacker_id
		ORDER BY `max` DESC
		LIMIT 0,1
	) OR
	total_challenges IN (
		SELECT c_tmp.total
		FROM (
			SELECT COUNT(*) AS total
			FROM Challenges
			GROUP BY Challenges.hacker_id
		) c_tmp
		GROUP BY c_tmp.total
		HAVING COUNT(c_tmp.total) = 1
	)
ORDER BY
	total_challenges DESC,
	h.hacker_id ASC;
