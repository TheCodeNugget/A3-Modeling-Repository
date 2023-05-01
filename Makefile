objout =  -M="C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack"
mehout =  -M="C:\Users\Nugget\Documents\Arma Projects\mehland"
.PHONY: mehland

all:
	pboproject -P P:\rnc_main $(objout)
	pboproject -P P:\rnc_ponds $(objout)
	pboproject -P P:\rnc_sea $(objout)
	pboproject -P P:\rnc_signs $(objout)
	pboproject -P P:\rnc_woodenBuildings $(objout)
	pboproject -P P:\rnc_apartments $(objout)

main:
	pboproject P:\rnc_main $(objout)

ponds:
	pboproject P:\rnc_ponds $(objout)

sea:
	pboproject P:\rnc_sea $(objout)

signs:
	pboproject P:\rnc_signs $(objout)

woodenBuildings:
	pboproject P:\rnc_woodenBuildings $(objout)

apartments:
	pboproject P:\rnc_apartments $(objout)

mehland:
	pboproject P:\mehland $(mehout)
