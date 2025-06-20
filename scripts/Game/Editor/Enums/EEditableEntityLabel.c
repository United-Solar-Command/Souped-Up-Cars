enum EEditableEntityLabel
{
	NONE = 0,
	
	ENTITYTYPE_OBJECT = 1,
	ENTITYTYPE_CHARACTER = 2,
	ENTITYTYPE_VEHICLE = 3,
	ENTITYTYPE_GROUP = 4,
	ENTITYTYPE_COMPOSITION = 5,
	ENTITYTYPE_ITEM = 6,
	ENTITYTYPE_SYSTEM = 7,
	
	FACTION_USSR = 10,
	FACTION_US = 11,
	FACTION_FIA = 12,
	FACTION_CIV = 13,
	FACTION_NONE = 14, //FACTION_ANY
	
	TRAIT_ARMOR = 20,
	TRAIT_ARMED = 21,
	TRAIT_UNARMED = 22,
	TRAIT_REFUELING = 23,
	TRAIT_MEDICAL = 24,
	TRAIT_ARMORPIERCING = 25,
	TRAIT_AMPHIBIOUS = 26,
	TRAIT_REARMING = 27,
	TRAIT_FORTIFICATION = 28,
	TRAIT_SERVICE = 29,
	TRAIT_SPAWNPOINT = 30,
	TRAIT_DESTRUCTABLE = 31,
	TRAIT_ILLUMINATION = 32,
	TRAIT_OPTICS = 33,
	TRAIT_SUPPRESSIVE = 34,
	TRAIT_RADIO = 35,
	TRAIT_PASSENGERS_SMALL = 36,
	TRAIT_PASSENGERS_LARGE = 37,
	TRAIT_EXPLOSIVE = 38,
	TRAIT_REPAIRING = 39,	
	
	ROLE_ANTITANK = 40,
	ROLE_GRENADIER = 41,
	ROLE_LEADER = 42,
	ROLE_MACHINEGUNNER = 43,
	ROLE_MEDIC = 44,
	ROLE_RADIOOPERATOR = 45,
	ROLE_RIFLEMAN = 46,
	ROLE_SHARPSHOOTER = 47,
	ROLE_AMMOBEARER = 48,
	ROLE_SCOUT = 49,
	
	VEHICLE_CAR = 50,
	VEHICLE_HELICOPTER = 51,
	VEHICLE_AIRPLANE = 52,
	VEHICLE_APC = 53,
	VEHICLE_TRUCK = 54,
	VEHICLE_TURRET = 55,
	
	GROUPTYPE_INFANTRY = 60,
	GROUPTYPE_MOTORIZED = 61,
	GROUPTYPE_AIRMOBILE = 62,
	
	GROUPSIZE_SMALL = 70,
	GROUPSIZE_MEDIUM = 71,
	GROUPSIZE_LARGE = 72,
	
	ITEMTYPE_MAGAZINE = 80,
	ITEMTYPE_THROWABLE = 81,
	ITEMTYPE_ITEM = 82,
	ITEMTYPE_WEAPON = 83,
	ITEMTYPE_CLOTHING = 84,
	
	SLOT_FLAT_SMALL = 90,
	SLOT_FLAT_MEDIUM = 91,
	SLOT_FLAT_LARGE = 92,
	SLOT_ROAD_SMALL = 93,
	SLOT_ROAD_MEDIUM = 94,
	SLOT_ROAD_LARGE = 95,
	
	THEME_AGRICULTURE = 100,
	THEME_AIRPORT = 101,
	THEME_COMMERCIAL = 102,
	THEME_CULTURAL = 103,
	THEME_FOREST = 104,
	THEME_HOUSES = 105,
	THEME_INDUSTRIAL = 106,
	THEME_INFRASTRUCTURE = 107,
	THEME_MILITARY = 108,
	THEME_RECREATION = 109,
	THEME_RUINS = 110,
	THEME_SERVICES = 111,
	THEME_SIGNS = 112,
	THEME_WALLS = 113,
	
	SIZE_XS = 120,
	SIZE_S = 121,
	SIZE_M = 122,
	SIZE_L = 123,
	SIZE_XL = 124,
	
	GAMELOGIC_RALLYPOINT = 130,
	
	// Additional roles 
	ROLE_SAPPER = 140,
	
	//~ Traits continuation
	TRAIT_SUPPLYSTORAGE_SMALL = 200,
	TRAIT_SUPPLYSTORAGE_LARGE = 210,
	TRAIT_SUPPLYSTORAGE_FULL = 220,
	TRAIT_BASE = 230,
	TRAIT_MANAGEMENT_BASE = 240,
	TRAIT_MANAGEMENT_SQUAD = 250,
	TRAIT_MANAGEMENT_VEHICLE = 260,
	TRAIT_HELI_CREW = 270,
	TRAIT_VEHICLE_CREW = 271,
	TRAIT_ARSENAL = 280,
	TRAIT_MORTAR = 281,
	TRAIT_RANDOMIZED = 290, //! This trait is for entities that have random variants when placed in the world by Editor
	TRAIT_VEHICLE_REARMING = 291,
	TRAIT_EFFECT_MODULE = 295,
	
	SERVICE_ANTENNA = 901,
	SERVICE_ARMORY = 902,
	SERVICE_FUEL = 903,
	SERVICE_HQ = 904,
	SERVICE_LIVING_AREA = 905, 
	SERVICE_SUPPLY_STORAGE = 906,
	SERVICE_VEHICLE_DEPOT_LIGHT = 907,
	SERVICE_VEHICLE_DEPOT_HEAVY = 908,
	SERVICE_FIELD_HOSPITAL = 909,
	SERVICE_HELIPAD = 910,
	SERVICE_REPAIR = 911,
	SERVICE_PLAYER_HUB = 912,
	SERVICE_MORTAR = 913,
	
	TUTORIAL_VEHICLE_REQUESTING = 968,
	TUTORIAL_GUNNEST_BUILDING = 969,
	TUTORIAL_RIFLEMAN = 970,
	TUTORIAL_ANTENNA = 971,
	
	//~ Content Traits
	//CONTENT_BASEGAME = 1000,
	CONTENT_MODDED = 1001,
	
	//~ Static Composition that are linked to locations in the world
	STATIC_COMPOSITION = 9000,
	
	//~ Static Arland
	STATIC_ARLAND_ANGLERBLUFF = 9100,
	STATIC_ARLAND_ARLEVILLE = 9101,
	STATIC_ARLAND_BALDRIDGE = 9102,
	STATIC_ARLAND_BEAUREGARD = 9103,
	STATIC_ARLAND_MOSSHILL = 9104,
	STATIC_ARLAND_NORTHHEAD = 9105,
	STATIC_ARLAND_SIGNALHILL = 9106,
	STATIC_ARLAND_WICKPOINT = 9107,
	STATIC_ARLAND_AIRBASE = 9108,
	STATIC_ARLAND_HARBOR = 9109,
	STATIC_ARLAND_MILITARYBASE = 9110,
	STATIC_ARLAND_MILITARYTRAININGAREA = 9111,
	
	//~ Static Eden
	STATIC_EDEN_VILLENEUF = 9300,
	STATIC_EDEN_BENAC = 9301, //
	STATIC_EDEN_CAMURAC = 9302, //
	STATIC_EDEN_CHOTAIN = 9303,
	STATIC_EDEN_CHOTAININDUSTRIAL = 9304, //
	STATIC_EDEN_COWBELLPOND = 9305, //
	STATIC_EDEN_DURRAS = 9306,
	STATIC_EDEN_ENTREDEUX = 9307,
	STATIC_EDEN_ETOUPE = 9308, //
	STATIC_EDEN_FIGARI = 9309,
	STATIC_EDEN_GOREY = 9310, //
	STATIC_EDEN_GRAVETTE = 9311,
	STATIC_EDEN_KERMOVAN = 9312, //
	STATIC_EDEN_KERVEL = 9313,
	STATIC_EDEN_LACOURT = 9314,
	STATIC_EDEN_LAMENTIN = 9315, //
	STATIC_EDEN_LANCRE = 9316, //
	STATIC_EDEN_LARUNS = 9317,
	STATIC_EDEN_LAVALETTE = 9318, //
	STATIC_EDEN_LEBOSC = 9319, //
	STATIC_EDEN_LEMOULE = 9320,
	STATIC_EDEN_LESCREUX = 9321, //
	STATIC_EDEN_LEVIE = 9322,
	STATIC_EDEN_MEAUX = 9323,
	STATIC_EDEN_MONTIGNAC = 9324,
	STATIC_EDEN_MONTIGNACFARM = 9325, //
	STATIC_EDEN_MORTON = 9326,
	STATIC_EDEN_PINEWOODLAKE = 9327,
	STATIC_EDEN_PROVINS = 9328,
	STATIC_EDEN_REDON = 9329, //
	STATIC_EDEN_REGINA = 9330,
	STATIC_EDEN_RICHEMONT = 9331, //
	STATIC_EDEN_SAWMILL = 9332, //
	STATIC_EDEN_STPHILLIPE = 9333,
	STATIC_EDEN_STPHILLIPEINDUSTRIAL = 9334, //
	STATIC_EDEN_STPIERRE = 9335,
	STATIC_EDEN_TYRONE = 9336,
	STATIC_EDEN_VERNON = 9337, //
	STATIC_EDEN_AIRPORT = 9338, 
	STATIC_EDEN_CHOTAINMILITARY = 9339, 
	STATIC_EDEN_FACTORY = 9340, //
	STATIC_EDEN_LAMENTINHARBOUR = 9341, 
	STATIC_EDEN_LEVIEMILITARY = 9342, 
	STATIC_EDEN_MILITARYHOSPITAL = 9343, 
	STATIC_EDEN_MILITARYTRAININGAREA = 9344, //
	STATIC_EDEN_MONTFORTCASTLE = 9345, 
	STATIC_EDEN_MONTIGNACWAREHOUSES = 9346, 
	STATIC_EDEN_POWERPLANT = 9347, 
	STATIC_EDEN_STPHILLIPEHARBOUR = 9348, //
	STATIC_EDEN__STPIERREHARBOUR = 9349, 

};

enum EEditableEntityLabelGroup
{
	NONE = 0,
	ENTITYTYPE = 1,
	FACTION = 2,
	TRAIT = 3,
	ROLE = 4,
	VEHICLE = 5,
	GROUPTYPE = 6,
	GROUPSIZE = 7,
	ITEMTYPE = 8,
	SLOT = 9,
	//10
	THEME = 11,
	SIZE = 12,
	CONTENT = 13,
	
	//~ Groupless group is used to place any labels in that are not defined in the EditableEntityCore
	GROUPLESS = 9000,
};