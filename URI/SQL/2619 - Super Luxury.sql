SELECT products.name, providers.name, products.price
FROM products
INNER JOIN providers ON providers.id = products.id_providers
INNER JOIN categories ON categories.id = products.id_categories
WHERE categories.name = 'Super Luxury' AND products.price > 1000.00
