#define NORMAL_GLASS_HITPOINT(glassID,arm,rad) \
			class Glass_##glassID##_hitpoint { \
				armor = arm; \
				material = -1; \
				name = Glass_##glassID; \
				visual = Glass_##glassID##_hide; \
				passThrough = 0; \
				radius = rad; \
				convexComponent = Glass_##glass<BS>D##_hide; \
				class DestructionEffects { \
					class BrokenGlass1 { \
						simulation = "particles"; \
						type = "BrokenGlass1N_0900_0950"; \
						position = Glass_##glassID##_effects; \
						intensity = 0.15; \
						interval = 1; \
						lifeTime = 0.05; \
					}; \
					class BrokenGlass2: BrokenGlass1 { type = "BrokenGlass2N_0900_0950"; }; \
					class BrokenGlass3: BrokenGlass1 { type = "BrokenGlass3N_0900_0950"; }; \
					class BrokenGlass4: BrokenGlass1 { type = "BrokenGlass4N_0900_0950"; }; \
					class BrokenGlass5: BrokenGlass1 { type = "BrokenGlass5N_0900_0950"; }; \
					class BrokenGlass6: BrokenGlass1 { type = "BrokenGlass6N_0900_0950"; }; \
					class BrokenGlass7: BrokenGlass1 { type = "BrokenGlass7N_0900_0950"; }; \
					class BrokenGlass1S: BrokenGlass1 { type = "BrokenGlass1S_0900_0950"; }; \
					class BrokenGlass2S: BrokenGlass1 { type = "BrokenGlass2S_0900_0950"; }; \
					class BrokenGlass3S: BrokenGlass1 { type = "BrokenGlass3S_0900_0950"; }; \
					class BrokenGlass4S: BrokenGlass1 { type = "BrokenGlass4S_0900_0950"; }; \
					class BrokenGlass5S: BrokenGlass1 { type = "BrokenGlass5S_0900_0950"; }; \
					class BrokenGlass6S: BrokenGlass1 { type = "BrokenGlass6S_0900_0950"; }; \
					class BrokenGlass7S: BrokenGlass1 { type = "BrokenGlass7S_0900_0950"; }; \
				}; \
			}
