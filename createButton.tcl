workspace userbutton set Open_GDSII

#Set path to L-Edit's startup macros
set appdata_path [string map {"\\" /} $::env(APPDATA)]
set script_path "$appdata_path/Tanner EDA/scripts/startup.ledit"
puts $script_path

proc Open_GDSII {} {
    catch {
        set designsList [database designs]

        if {[lsearch $designsList tmpdesign] > 0} { 
        database close -file tmpdesign
        }
    }
    executemacro -file "$::script_path/Open_GDSII.cpp"
}

puts "Loaded Open_GDSII"