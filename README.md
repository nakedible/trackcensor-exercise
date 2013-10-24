trackcensor-exercise
====================

A training exercise for financial card magnetic track censoring.

Provide an implementation the function in `trackcensor.c`. The
function should both censor and encrypt financial card magnetic track
data. The censoring should be done as required by PCI DSS 2.0 and the
encryption should be done directly to an RSA public key.

Requirements
------------

- Function must never output any cleartext which would be a PCI DSS
  violation to store without encryption.

- Function must output a PCI DSS compliant censoring of track 2 data
  and PAN separately.

- Function must output an RSA encrypted version of track 2 data and
  PAN separately.

- Function returns 0 on success or an error code on error.

- BONUS: Implement full functionality also for track 1.

Notes
-----

- RSA public key is at least 2048 bits in length.

- Input track data is in binary without parity bits. This means that
  there are 4 bits per symbol for track 2 and 6 bits per symbol for
  track 1.

- Output track data should be in ASCII format as used commonly in
  banking. This means that every symbol in track 1 should have 0x20
  added to it and every symbol in track 2 should have 0x30 added to
  it obtain an ascii representation of the track.

- OpenSSL `RSA_public_encrypt` should be used to encrypt the track
  data directly to a given public key.
