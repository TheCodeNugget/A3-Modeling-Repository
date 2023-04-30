out =  -M="C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack"

all:
	pboproject -P P:\rnc_main $(out)
	pboproject -P P:\rnc_ponds $(out)
	pboproject -P P:\rnc_sea $(out)
	pboproject -P P:\rnc_signs $(out)
	pboproject -P P:\rnc_woodenBuildings $(out)
	pboproject -P P:\rnc_apartments $(out)

main:
	pboproject P:\rnc_main $(out)

ponds:
	pboproject P:\rnc_ponds $(out)

sea:
	pboproject P:\rnc_sea $(out)

signs:
	pboproject P:\rnc_signs $(out)

woodenBuildings:
	pboproject P:\rnc_woodenBuildings $(out)

apartments:
	pboproject P:\rnc_apartments $(out)

clean:
	rm -r "C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack\Addons\*"
