#!/usr/bin/perl

sub main {
    my ($n, $k) = split /\s+/, <STDIN>;

    my @v;
    for my $i (0...$n) {
        my ($a, $b) = split /\s+/, <STDIN>;
        push @v, $b;
        push @v, $a - $b;
    }

    @v = sort { $b <=> $a } @v;
    my $ans = 0;
    for my $i (0..$k-1) {
        $ans += $v[$i];
    }

    print $ans . "\n";
}

main();