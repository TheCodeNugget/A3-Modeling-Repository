objout =  -M="C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack"
mehout =  -M="C:\Users\Nugget\Documents\Arma Projects\mehland"
sehout =  -M="C:\Users\Nugget\Documents\Arma Projects\Sehreno"
.PHONY: mehland
.PHONY: sehreno

all:
	pboproject -P P:\rnc_main $(objout)
	pboproject -P P:\rnc_ponds $(objout)
	pboproject -P P:\rnc_sea $(objout)
	pboproject -P P:\rnc_signs $(objout)
	pboproject -P P:\rnc_woodenBuildings $(objout)
	pboproject -P P:\rnc_apartments $(objout)

main:
	pboproject -P P:\rnc_main $(objout)

ponds:
	pboproject -P P:\rnc_ponds $(objout)

sea:
	pboproject -P P:\rnc_sea $(objout)

signs:
	pboproject -P P:\rnc_signs $(objout)

woodenBuildings:
	pboproject -P P:\rnc_woodenBuildings $(objout)

apartments:
	pboproject -P P:\rnc_apartments $(objout)

mehland:
	pboproject -P P:\mehland $(mehout)

sehreno:
	pboproject -P P:\Sehreno $(sehout)
