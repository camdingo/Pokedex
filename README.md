# Pokedex
Project for George


=======================================================================================================================================
=======================================================================================================================================
							Pokemon Class!
=======================================================================================================================================
=======================================================================================================================================


------------------------------------------------------------------------------------
				Instructions
------------------------------------------------------------------------------------

Part 1:
- Create Pokemon class (and all sub classes per below)

Part 2:
- Read in CSV file, and fill in pokemon

Part 3:
- Query database for basic info (ie who is pokemon #104)


Part 4: 
- Do it again but for abilities

------------------------------------------------------------------------------------
				Notes
------------------------------------------------------------------------------------
- I want to be able to pass in the csv as a cmd line arg (use boost program options)
- Make sure all classes have getters and setters for each member. Default ctor, destructor, assignment operator... all normal things
- Read in csv using boost tokenizer




--Below is the order of items from the CSV. I broke them into classes that seem to work... feel free to change them how you see fit
------------------------------------------------------------------------------------
				CSV Format
------------------------------------------------------------------------------------

index
pokedex_number (The entry number of the Pokemon in the National Pokedex)

-- Class Name

name (The English name of the Pokemon)
german_name(The German name of the Pokemon)
japanese_name(The Original Japanese name of the Pokemon)


generation (The numbered generation which the Pokemon was first introduced)
status (Denotes if the Pokemon is normal, sublegendary, legendary or mythical)
species (The Categorie of the Pokemon)
type_number (Number of types that the Pokemon has)
type_1 (The Primary Type of the Pokemon)
type_2 (The Secondary Type of the Pokemon if it has it)

-- Class Size

height_m (Height of the Pokemon in meters)
weight_kg (The Weight of the Pokemon in kilograms)

-- Class Abilities

abilities_number (The number of abilities of the Pokemon)
ability_1 (Name of the first Pokemon ability)
ability_2 (Name of the second Pokemon ability if any)
ability_hidden (Name of the hidden Pokemon ability if any)


total_points (Total number of Base Points)

-- Class Stats

hp (The Base HP of the Pokemon)
attack (The Base Attack of the Pokemon)
defense (The Base Defense of the Pokemon)
sp_attack (The Base Special Attack of the Pokemon)
sp_defense (The Base Special Defense of the Pokemon)
speed(The Base Speed of the Pokemon)
catch_rate(Catch Rate of the Pokemon)
base_friendship(Base Friendship of the Pokemon)
base_experience(Base experience of a wild Pokemon when catched)
growth_rate(The Growth Rate of the Pokemon)

-- Class EggInfo

egg_type_number (Number of groups where a Pokemon can hatch)
egg_type_1 (Name of the first egg group where a Pokemon can hatch)
egg_type_2 (Name of the second egg group where a Pokemon can hatch if any)
percentage_male (The percentage of the species that are male. Blank if the Pokemon is genderless or the info is unknown)
egg_cycles (The number of cycles (255-257 steps) required to hatch an egg of the Pokemon)


-- Class Weakness (Denotes the multiplier applied when damage is taken from an attack of a ___ type pokemon) 

against_normal
against_fire
against_water
against_electric
against_grass
against_ice
against_fight
against_poison
against_ground
against_flying
against_psychic
against_bug
against_rock
against_ghost
against_dragon
against_dark
against_steel
against_fairy
