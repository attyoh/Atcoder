#!/usr/bin/perl

sub prime_factors {
    my ($n) = @_;
    my @factors;

    for (my $i = 2; $i * $i <= $n; ++$i) {
        while ($n % $i == 0) {
            push @factors, $i;
            $n /= $i;
        }
    }

    if ($n != 1) {
        push @factors, $n;
    }

    return @factors;
}

sub main {
    $n = <STDIN>;
    my $m = scalar(prime_factors($n));

    for (my $i = 0; ; ++$i) {
        if ($m <= (2**$i)) {
            print $i . "\n";
            last;
        }
    }
}
main();