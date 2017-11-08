SELECT
	w.id,
	wp.age,
	w.coins_needed,
	w.power
FROM Wands w
INNER JOIN Wands_Property wp ON wp.code = w.code
WHERE
	wp.is_evil = 0 AND
	w.coins_needed = (
		SELECT MIN(Wands.coins_needed)
		FROM Wands
		WHERE
			Wands.code = w.code AND
			Wands.power = w.power
	)
ORDER BY
	w.power DESC,
	wp.age DESC;
