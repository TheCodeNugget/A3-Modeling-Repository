objout =  -M="C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack"
mehout =  -M="C:\Users\Nugget\Documents\Arma Projects\mehland"
sehout =  -M="C:\Users\Nugget\Documents\Arma Projects\Sehreno"
waiout =  -M="C:\Users\Nugget\Documents\Arma Projects\Waiheke"
shkout =  -M="C:\Users\Nugget\Documents\Arma Projects\A3Pishock"
.PHONY: mehland
.PHONY: sehreno
.PHONY: waiheke

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
	
misc:
	pboproject -P P:\rnc_misc $(objout)

woodenBuildings:
	pboproject -P P:\rnc_woodenBuildings $(objout)

apartments:
	pboproject -P P:\rnc_apartments $(objout)
	
american:
	pboproject -P P:\rnc_american $(objout)

mehland:
	pboproject -P P:\mehland $(mehout)
	
mehobj:
	pboproject -P P:\mehland_objects $(mehout)

sehreno:
	pboproject -P P:\Sehreno $(sehout)

waiheke:
	pboproject -P P:\waiheke $(waiout)

shock:
	pboproject -P P:\A3_piShock $(shkout)
