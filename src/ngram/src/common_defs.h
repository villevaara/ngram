/*  Copyright (c) 2016, Heckendorf
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice,
    this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
    TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
    PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
    CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
    EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
    PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
    PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
    LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
    NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _COMMON_DEFS_H_
#define _COMMON_DEFS_H_

#define freeif(x) if(x)free(x);
#define REINIT_MEM(x,y) if((x=realloc(x,sizeof(*x)*(y)))==NULL){goto memerr; /*fprintf(stderr,"Malloc of %d failed at %s:%d pid %d\n",(int)y,__FILE__,__LINE__,getpid());exit(22);*/}
#define ZEROINIT_MEM(x,y) if((x=calloc(y,sizeof(*x)))==NULL){goto memerr; /*fprintf(stderr,"Malloc of %d failed at %s:%d pid %d\n",(int)y,__FILE__,__LINE__,getpid());exit(22);*/}
#define INIT_MEM(x,y) if((x=malloc(sizeof(*x)*(y)))==NULL){goto memerr; /*fprintf(stderr,"Malloc of %d failed at %s:%d pid %d\n",(int)y,__FILE__,__LINE__,getpid());exit(22);*/}

#endif
