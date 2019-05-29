<#
    File: dir.ps1
    Author: @Seyptoo
    License: GNU General Public License v3.0
#>

<#
RTM build reference, because I'm stupid and forget...
#>


function check_directory(){
    $output_directory = (dir | sort -Property length -Descending | Select-Object -First 1 | ForEach-Object { $_.DirectoryName })
    echo $output_directory
}

function list_directory($return_list){
    $directory_check = (dir $return_list | sort -Property Name -Descending | Select-Object -Property Name | ForEach-Object { $_.Name })
    echo $directory_check
}
