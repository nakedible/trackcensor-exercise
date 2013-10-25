#include <openssl/rsa.h>

/* typedef struct rsa_st RSA; */
/* int RSA_public_encrypt(int flen, unsigned char *from, unsigned char *to, RSA *rsa, int padding); */

/** Process a magnetic track, producing both censored and encrypted
 *  versions of full track data and PAN separately.
 *
 *  \param buffer binary track data to process
 *  \param length length of the binary track data in bytes
 *  \param censored_track censored track data output buffer
 *  \param censored_track_length length of the censored track data written
 *  \param censored_track_size size of the censored track data output buffer in bytes
 *  \param censored_pan censored PAN output buffer
 *  \param censored_pan_length length of the censored PAN written
 *  \param censored_pan_size size of the censored PAN output buffer in bytes
 *  \param public_key RSA public key to encrypt to
 *  \param encrypted_track encrypted track data output buffer
 *  \param encrypted_track_length length of the encrypted track data written
 *  \param encrypted_track_size size of the encrypted track data output buffer in bytes
 *  \param encrypted_pan encrypted PAN output buffer
 *  \param encrypted_pan_length length of the encrypted PAN written
 *  \param encrypted_pan_size size of the encrypted PAN output buffer in bytes
 *  \return error code
 */
int process_track(const unsigned char *buffer,
                  size_t length,
                  int track_number,
                  unsigned char *censored_track,
                  size_t *censored_track_length,
                  size_t censored_track_size,
                  unsigned char *censored_pan,
                  size_t *censored_pan_length,
                  size_t censored_pan_size,
                  RSA *public_key,
                  unsigned char *encrypted_track,
                  size_t *encrypted_track_length,
                  size_t encrypted_track_size,
                  unsigned char *out_encrypted_pan,
                  size_t *out_encrypted_pan_length,
                  size_t encrypted_pan_size)
{
}
