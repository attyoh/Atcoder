#!/usr/bin/perl

my ($n, $q) = split(' ', <STDIN>);
my @a = split(' ', <STDIN>);

sub swap {
    my ($list_ref, $index1, $index2) = @_;
    @$list_ref[$index1, $index2] = @$list_ref[$index2, $index1];
}

my $shift = 0;
for my $i (0...$q) {
    my ($t, $x, $y) = split(' ', <STDIN>);
    $x--; $y--;

    if ($t == 1) {
        swap(\@a, ($shift + $x) % $n, ($shift + $y) % $n);
    } elsif ($t == 2) {
        $shift = ($shift + $n - 1) % $n;
    } elsif ($t == 3) {
        print $a[($shift + $x) % $n] . "\n";
    }
}
