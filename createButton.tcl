workspace userbutton set Open_GDSII

set script_path "C:/Users/KhalidTeama/AppData/Roaming/Tanner EDA/scripts/startup.ledit"

proc Open_GDSII {} {
    set designsList [database designs]

    if {[lsearch $designsList tmpdesign] >= 0} { 
	database close -file tmpdesign
	}
    #set script_path [ file dirname [ file normalize [ info script ] ] ]
    #set infoscript [info script] 
    #puts $infoscript 
    #puts "Executing open GDSII" 
    #puts "$script_path"
    executemacro -file "$::script_path/Open_GDSII.cpp"
}

puts "Loaded Open_GDSII"