#! /usr/bin/bash

red="\033[0;31m"
green="\033[0;32m"
blue="\033[0;34m"
purple="\033[0;35m"
yellow="\033[1;33m"
normal="\033[0m"


cplusbuild(){
    filenum=$#
    if [ $filenum -eq 0 ]
        then
            echo "${red}Planning to build 0 files, stopping${normal}"
    fi
    echo -e "${yellow}==================== Planning to build ${filenum} files ====================${normal}"
    echo -e "${green}Target:${normal}"
    files=( "$@" )
    for i in "${files[@]}";
        do
            echo -e "${green}\t$i${normal}"
    done

    echo -e "${blue}========================== Start building =========================${normal}"
    workdir=$(pwd)
    echo -e "Working in ${workdir}"
    bindir="${workdir}/bin"
    if [ ! -d "${bindir}" ]
        then
            echo "${bindir} not exists, creating..."
            mkdir "${bindir}"
    else
        echo "${bindir} exists, redirecting..."
    fi

    built_files=()
    for s in "${files[@]}";
        do
            bn=${s%.*} 
            destination="${bindir}/${bn}"
            echo -e "${purple}Building: ${s}${normal}"
            echo -e "\tDestination ${destination}"
            g++ "${s}" -o "${destination}"
            echo -e "\t${green}success${normal}"
            built_files[${#built_files[@]}]=${destination}
    done

    echo -e "${yellow}============================= Success =============================${normal}"
    echo -e "${yellow}Build files:${normal}"
    for i in "${built_files[@]}";
        do
            echo -e "\t${i}"
    done
    echo -e "${yellow}Run cplusrun"
    export built_files
}

cplusrun(){
    filenum=$#
    if [ $filenum -eq 0 ]
        then
            echo "${red}Planning to run 0 files, stopping${normal}"
    fi
    echo -e "${yellow}===================== Planning to run ${filenum} files =====================${normal}"
    echo -e "${green}Run:${normal}"
    runfiles=( "$@" )
    for i in "${runfiles[@]}";
        do
            echo -e "${green}\t$i${normal}"
    done

    echo -e "${yellow}=========================== Start running =========================${normal}"
    workdir=$(pwd)
    echo -e "Running in ${workdir}"
    bindir="${workdir}/bin"
    if [ ! -d "${bindir}" ]
        then
            echo -e "${red}${bindir} not exists, aborting..."
    else
        echo "${bindir} detected!"
    fi

    for s in "${runfiles[@]}";
        do
            bn=${s%.*} 
            ss="${bindir}/${bn}"
            echo -e "${purple}Running: ${s}${normal}"
            echo -e "\tSource ${ss}"
            echo -e "${blue}+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++${normal}"
            "${ss}"
            echo -e "${blue}+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++${normal}"
            # echo -e "\t${green}success${normal}"
    done
}


# 自己构建的一个自动补全的函数
_cplusbuild() {
    local cur prev prev_prev
    COMPREPLY=()
    cur="${COMP_WORDS[COMP_CWORD]}"
    prev="${COMP_WORDS[COMP_CWORD-1]}"

    workdir=$(pwd)
    filelist=$(ls "${workdir}")
    completion=""
    for i in ${filelist};
        do
        #completion+=" $(basename "${i}")"
        extension="${i##*.}"
        if [ "$extension" = "cpp" ];
            then
                completion+=" ${i}"
        fi
    done

    case "${cur}" in
        *)
            # COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
            COMPREPLY=( $(compgen -W "$completion" -- ${cur}) )
            return 0
            ;;
    esac

    return 0
}
complete -F _cplusbuild cplusbuild

# 自己构建的一个自动补全的函数
_cplusrun() {
    local cur prev prev_prev
    COMPREPLY=()
    cur="${COMP_WORDS[COMP_CWORD]}"
    prev="${COMP_WORDS[COMP_CWORD-1]}"


    completion=""
    for i in "${built_files[@]}";
        do
        completion+=" $(basename "${i}")"
    done

    case "${cur}" in
        *)
            # COMPREPLY=( $(compgen -W "${opts}" -- ${cur}) )
            COMPREPLY=( $(compgen -W "$completion" -- ${cur}) )
            return 0
            ;;
    esac

    return 0
}
complete -F _cplusrun cplusrun



export -f cplusbuild
export -f cplusrun
