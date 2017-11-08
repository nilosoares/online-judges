SELECT Hackers.hacker_id, Hackers.name, SUM(Submissions.score)
FROM Hackers, (
	SELECT Submissions.hacker_id, Submissions.challenge_id, MAX(Submissions.score) AS score
	FROM Submissions
	GROUP BY Submissions.hacker_id, Submissions.challenge_id
) Submissions
WHERE Submissions.hacker_id = Hackers.hacker_id
GROUP BY Hackers.hacker_id, Hackers.name
HAVING SUM(Submissions.score) > 0
ORDER BY SUM(Submissions.score) DESC, Hackers.hacker_id ASC;
