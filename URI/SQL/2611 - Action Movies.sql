SELECT movies.id, movies.name
FROM movies
INNER JOIN genres ON genres.id = movies.id_genres
WHERE genres.description = 'Action'
ORDER BY movies.id ASC
