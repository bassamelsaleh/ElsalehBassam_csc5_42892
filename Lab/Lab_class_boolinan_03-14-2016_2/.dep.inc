# This code depends on make tool being used
include ${DEPFILES}
endif
DEPFILES=$(wildcard $(addsuffix .d, ${OBJECTFILES}))
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
