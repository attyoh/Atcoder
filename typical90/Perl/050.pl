#!/usr/bin/perl
use integer

my $MOD = 1e9 + 7;

sub main {
    my ($n, $l) = split /\s+/, <STDIN>;

    my @dp = (0) x ($n+1);
    @dp[0] = 1;
    for my $i (1..$n) {
        $dp[$i] += $dp[$i-1];
        if ($i-$l >= 0) {
            $dp[$i] += $dp[$i-$l];
        }
        $dp[$i] %= $MOD;
    }
    print $dp[$n] . "\n";
}
main();