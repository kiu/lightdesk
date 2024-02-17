difference () {
    translate([0, -5, 0]) { 
        cube([25, 10, 4]);
    }

    translate([5, 0, 0]) { 
        cylinder(h=15, d=4, $fn = 360, center=true);
    }
    
//    translate([5, 0, 0]) { 
//        cylinder(h=3, r1=3.5, r2=1.3, $fn = 360, center=true);
//    }
    
    
    translate([10, -3, 2]) { 
        cube([16, 6, 3]);
    }
}
