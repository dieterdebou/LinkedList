Node start(0);
Node second(1);
Node last(2);

second.set_next(&last);
start.set_next(&second);

in main plaatsen-------------

0 => 1 => 2 => nullptr