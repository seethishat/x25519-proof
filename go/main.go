package main

import (
	"encoding/hex"
	"flag"
	"fmt"
	"golang.org/x/crypto/curve25519"
	"log"
	"os"
)

func main() {
	var helpFlag = flag.Bool("help", false, "show help.")
	var privkey = flag.String("privkey", "", "the hex encoded private key.")
	flag.Parse()

	if *helpFlag || len(os.Args) == 1 {
		flag.PrintDefaults()
		return
	}

	decoded, err := hex.DecodeString(*privkey)
	if err != nil {
		log.Fatal(err)
	}

	calcPubKey, err := curve25519.X25519(decoded, curve25519.Basepoint)
	if err != nil {
		log.Fatal(err)
	}

	encoded := hex.EncodeToString(calcPubKey)

	fmt.Printf("Calculated Public Key: %v\n", encoded)
}
