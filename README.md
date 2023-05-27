# x25519-proof

Generate a X25519 Keypair in C++. Give the Private Key to Go and calculate the Public Key from that.

## Generate Keypair in C++

```console
$ gen-x25519-keys
Private key: 301D46F356C5DA7F3E90CBC364777456ECD60B71FB21BBFF7DF707AD8E815D58
Public key: D8F76F366707584E375BE513B9752E81632FBCC970DF668595A60DE046862C04
```
## Calculate Public Key from Private Key in Go

```console
$ ./calc-public-key -privkey 301D46F356C5DA7F3E90CBC364777456ECD60B71FB21BBFF7DF707AD8E815D58
Calculated Public Key: d8f76f366707584e375be513b9752e81632fbcc970df668595a60de046862c04
```

