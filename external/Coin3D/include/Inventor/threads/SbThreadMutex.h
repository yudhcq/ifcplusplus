#ifndef COIN_SBTHREADMUTEX_H
#define COIN_SBTHREADMUTEX_H

/**************************************************************************\
 * Copyright (c) Kongsberg Oil & Gas Technologies AS
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
\**************************************************************************/

#include <Inventor/SbBasic.h>
#include <Inventor/C/threads/recmutex.h>

class SbThreadMutex {
public:
  SbThreadMutex(void) { this->mutex = cc_recmutex_construct(); }
  ~SbThreadMutex() { cc_recmutex_destruct(this->mutex); }

  int lock(void) {
    return cc_recmutex_lock(this->mutex);
  }

  SbBool tryLock(void) {
    return cc_recmutex_try_lock(this->mutex) == CC_OK;
  }
  
  int unlock(void) {
    return cc_recmutex_unlock(this->mutex);
  }

private:
  // FIXME: we need access to C mutex structur. Should we use friend,
  // or should we add a new public method to get to this structure?
  // pederb, 2002-06-26
  friend class SbCondVar;
  cc_recmutex * mutex;
};


#ifndef COIN_INTERNAL
// For TGS Inventor compile-time compatibility.
#include <Inventor/threads/SbThreadAutoLock.h>
#endif // COIN_INTERNAL

#endif // !COIN_SBTHREADMUTEX_H
