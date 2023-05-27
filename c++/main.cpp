#include <iostream>
#include <cryptopp/hex.h>
#include <cryptopp/xed25519.h>
#include <cryptopp/osrng.h>
#include <cryptopp/files.h>

// Copied from - https://cryptopp.com/wiki/X25519#Generating_Keys
// Generate X25519 keys, hex encode them and print them out.

int main(int argc, char* argv[])
{
    using namespace CryptoPP;

    AutoSeededRandomPool prng;
    HexEncoder encoder(new FileSink(std::cout));

    x25519 ecdh;

    SecByteBlock x(x25519::SECRET_KEYLENGTH);
    ecdh.GeneratePrivateKey(prng, x);

    std::cout << "Private key: ";
    StringSource(x, x.size(), true, new Redirector(encoder));
    std::cout << std::endl;

    SecByteBlock y(x25519::PUBLIC_KEYLENGTH);
    ecdh.GeneratePublicKey(prng, x, y);

    std::cout << "Public key: ";
    StringSource(y, y.size(), true, new Redirector(encoder));
    std::cout << std::endl;

    return 0;
}
