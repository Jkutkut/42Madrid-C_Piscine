#!/bin/sh

USR="Jkutkut"
SSH_CLONE_START="git@github.com:$USR/"
HTTPS_CLONE_START="https://github.com/$USR"
CLONE_END=".git"

REPO_PREFIX="42Madrid-C_Piscine_"

sshMultiClone() {
	type=$1
	start=$2
	end=$3

	for i in $(seq -w $start $end); do
		repoName=$REPO_PREFIX$type"_"$i
		echo $SSH_CLONE_START$repoName$CLONE_END
		git clone $SSH_CLONE_START$repoName$CLONE_END
	done
}

sshMultiClone "Shell" "00" "01"
sshMultiClone "C" "01" "08"
sshMultiClone "Rush" "00" "02"
