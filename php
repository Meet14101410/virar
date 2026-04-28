<?php
$virar_info = [
    "name" => "Virar",
    "district" => "Palghar",
    "railway_code" => "VR",
    "pincodes" => ["401303", "401305"],
    "attractions" => ["Jivdani Temple", "Arnala Beach", "Yazoo Park"]
];

echo "<h2>Welcome to " . $virar_info['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Admin District:</strong> " . $virar_info['district'] . "</li>";
echo "<li><strong>Railway Code:</strong> " . $virar_info['railway_code'] . "</li>";
echo "<li><strong>Key Attractions:</strong> " . implode(", ", $virar_info['attractions']) . "</li>";
echo "</ul>";
?>
