<?hh

function f(mixed $x) {
  echo "\$x is $x\n";
  try {
    $x as string;
  } catch (Exception $e) {
    var_dump($e->getMessage());
  }
  try {
    $x as arraykey;
  } catch (Exception $e) {
    var_dump($e->getMessage());
  }
}


$arr = [1, 2, 3, 3.14, Vector {}, "hiii"];

foreach ($arr as $e) {
  f($e);
}
