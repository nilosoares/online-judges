-- MS SQL

DECLARE @i INT;
DECLARE @n INT = 3;
DECLARE @isPrime INT;
DECLARE @primes VARCHAR(1000) = '2';

WHILE @n <= 1000
BEGIN
	SET @isPrime = 1;

	-- check if n its a prime number
	SET @i = 3;
	WHILE @i <= CEILING(SQRT(@n))
	BEGIN
		IF @n % @i = 0
		BEGIN
			SET @isPrime = 0;
			BREAK;
		END;
		SET @i = @i + 1;
	END;

	-- concat N if its a prime number
	IF @isPrime = 1
    BEGIN
		SET @primes += CONCAT('&', @n);
	END;

	-- increments n
	SET @n = @n + 2;
END;

PRINT @primes;
