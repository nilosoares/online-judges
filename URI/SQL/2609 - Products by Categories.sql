SELECT categories.name AS category_name, SUM(products.amount) AS products_amount
FROM categories
INNER JOIN products ON products.id_categories = categories.id
GROUP BY categories.name
ORDER BY categories.name ASC
