#!/usr/bin/perl

my ($a, $b, $c) = split(' ', <STDIN>);
chomp($a, $b, $c);

my $x = 1;
for my _ (0..$b) {
    $x *= $c;
}
print(($a < $x ? "Yes" : "No"));