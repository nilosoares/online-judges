SELECT account.id, account.password, MD5(account.password)
FROM account
