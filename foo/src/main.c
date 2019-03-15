#include <stdio.h>
#include <openssl/bio.h>
#include <openssl/cipher.h>
#include <openssl/crypto.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#include <openssl/aes.h>

int aes_128_cbc_key_length()
{
 return EVP_CIPHER_key_length(EVP_aes_128_cbc());
}


/*
int main() {
	printf("%d\n", aes_128_cbc());
	return 0;
}
*/
