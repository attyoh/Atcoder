#!/usr/bin/perl
use bigint lib => 'GMP';

my $MOD = 1e9 + 7;

sub main {
    my $n = <STDIN>;

    my $ans = 1;
    for my $i (0..$n-1) {
        my @a = split /\s+/, <STDIN>;
        my $t = 0;
        foreach (@a) {
            $t += $_;
        }
        $ans *= $t;
    }
    print $ans % $MOD . "\n";
}
main();