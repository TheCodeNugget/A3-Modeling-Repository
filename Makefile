out =  -M="C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack"

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

clean:
	rm -r "C:\Users\Nugget\Documents\Arma Projects\Really Useless Objects Pack\Addons\*"
