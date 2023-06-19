#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

int main(void)
{
	char *password_file = getenv("jenny");
	if (password_file == NULL) {
		printf("No password file found\n");
		return 1;
	}

	FILE *file = fopen(password_file, "r");
	if (file == NULL) {
		printf("Failed to open password file\n");
		return 1;
	}

	char password[256];
	if (fgets(password, sizeof(password), file) == NULL) {
		printf("Failed to read password from file\n");
		fclose(file);
		return 1;
	}

	// Hash the password using MD5
	unsigned char md5_digest[MD5_DIGEST_LENGTH];
	MD5((const unsigned char *)password, strlen(password), md5_digest);

	// Compare the hashed password with the accurate password
	unsigned char accurate_digest[MD5_DIGEST_LENGTH] = {0x5f, 0x4d, 0xe8, 0x37, 0xd3, 0x8f, 0x32, 0x9d, 0xcf, 0x5e, 0x5d, 0xa7, 0x56, 0xea, 0x35, 0x90};
	if (memcmp(md5_digest, accurate_digest, MD5_DIGEST_LENGTH) == 0) {
		puts("Success");
	} else {
		puts("Access Denied");
	}

	fclose(file);
	return 0;
}

