SELECT loan.name, CAST(DATE_PART('day', loan.payday) AS INTEGER)
FROM loan
