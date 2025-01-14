#ifndef AUDIO_EFFECTS_H
#define AUDIO_EFFECTS_H

#include <PR/ultratypes.h>

#include <!sm64/src/audio/internal.h>
#include "platform_info.h"
#include "macros.h"

#define ADSR_STATE_DISABLED 0
#define ADSR_STATE_INITIAL 1
#define ADSR_STATE_START_LOOP 2
#define ADSR_STATE_LOOP 3
#define ADSR_STATE_FADE 4
#define ADSR_STATE_HANG 5
#define ADSR_STATE_DECAY 6
#define ADSR_STATE_RELEASE 7
#define ADSR_STATE_SUSTAIN 8

#define ADSR_ACTION_RELEASE 0x10
#define ADSR_ACTION_DECAY 0x20
#define ADSR_ACTION_HANG 0x40

#define ADSR_DISABLE 0
#define ADSR_HANG -1
#define ADSR_GOTO -2
#define ADSR_RESTART -3

// Envelopes are always stored as big endian, to match sequence files which are
// byte blobs and can embed envelopes.
// BSWAP16() definition has been moved to macros.h. Use BE_TO_HOST16() for the
// same effect in the future.

void sequence_player_process_sound(struct SequencePlayer *seqPlayer);
void note_vibrato_update(struct Note *note);
void note_vibrato_init(struct Note *note);
void adsr_init(struct AdsrState *adsr, struct AdsrEnvelope *envelope, s16 *volOut);
#ifdef VERSION_EU
f32 adsr_update(struct AdsrState *adsr);
#else
s32 adsr_update(struct AdsrState *adsr);
#endif

#endif // AUDIO_EFFECTS_H
