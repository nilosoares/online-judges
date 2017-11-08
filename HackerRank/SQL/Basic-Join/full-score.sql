SELECT Hackers.hacker_id, Hackers.name
FROM Hackers
INNER JOIN Submissions ON Submissions.hacker_id = Hackers.hacker_id
INNER JOIN Challenges ON Challenges.challenge_id = Submissions.challenge_id
INNER JOIN Difficulty ON Difficulty.difficulty_level = Challenges.difficulty_level
WHERE Submissions.score = Difficulty.score
GROUP BY Hackers.hacker_id, Hackers.name
HAVING COUNT(Hackers.hacker_id) > 1
ORDER BY COUNT(Hackers.hacker_id) DESC, Hackers.hacker_id ASC;
