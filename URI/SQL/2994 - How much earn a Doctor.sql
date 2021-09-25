SELECT
	bq.name,
	ROUND(bq.salary, 1) AS salary
FROM (
	SELECT
		doctors.name,
		SUM((attendances.hours * 150) + ((attendances.hours * 150) * (work_shifts.bonus / 100))) AS salary
	FROM doctors
	INNER JOIN attendances ON attendances.id_doctor = doctors.id
	INNER JOIN work_shifts ON work_shifts.id = attendances.id_work_shift
	GROUP BY doctors.name
) AS bq
ORDER BY bq.salary DESC
