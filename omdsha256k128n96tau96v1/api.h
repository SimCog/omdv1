/**
 * The CAESAR file proposed for the competition
 * that indicates all the lengths values for the
 * key, the secret message, the public message and
 * the ciphertext
 * 
 * @file api.h
 * @author Simon Cogliani <simon.cogliani@gmail.com>
 * @author Damian Vizar <damian.vizar@epfl.ch>
 */
#ifndef __API_H__
#define __API_H__

/**< Key size in bytes                               */
#define CRYPTO_KEYBYTES 16  
/**< Secret message number size in bytes             */
#define CRYPTO_NSECBYTES 0  
/**< Public message number size in bytes             */
#define CRYPTO_NPUBBYTES 12 
/**< Ciphertext bytes size longer than the plaintext */
#define CRYPTO_ABYTES 12    

#endif /* __API_H__  */
