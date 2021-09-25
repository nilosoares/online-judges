SELECT products.name AS product_name, providers.name AS provider_name
FROM products
INNER JOIN providers ON providers.id = products.id_providers
INNER JOIN categories ON categories.id = products.id_categories
WHERE categories.id = 6
