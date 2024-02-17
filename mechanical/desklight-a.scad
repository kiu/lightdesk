difference () {
    translate([0, -2.9, 0]) { 
        cube([10, 5.8, 2]);
    }

    translate([5, 0, 0]) { 
        cylinder(h=15, r=1.7, $fn = 360, center=true);
    }
}

translate([0, -2.9, 0]) {
    cube([1.8, 5.8, 20]);  
}
