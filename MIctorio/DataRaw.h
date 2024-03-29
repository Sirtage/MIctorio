#pragma once
#include <iostream>
#include <map>
#include "data_container.h"
//#include "component.h"

extern enum e_component_type {
	//unkow type
	unkown, 
	//custom type
	custom, 
	//without initialised type
	wit,
	//virtual type
	virt, 
	//mod info type
	mod_info,
	//New type class with parent
	hpar,

	//compilables
	//item type
	c_item, 
	//recipe type
	c_recipe,
	//entity
	c_entity
};

extern enum e_entity_type : uint16_t {
	idk_lol = 0U,
	building = 1U,
	mob = 2U
};

inline std::map<e_entity_type, std::string> e_proto_name = {{building, "item-entity"}, {mob, "simple-entity"}};

namespace factorio {
	namespace source {
		inline data_container<std::string> recipe_category = {
			"advanced-crafting",
			"basic-crafting",
			"centrifuging",
			"chemistry",
			"crafting",
			"crafting-with-fluid",
			"oil-processing",
			"rocket-building",
			"smelting"
		};

		inline data_container<std::string> item_subgroup = {
			"ammo",
			"armor",
			"barrel",
			"belt",
			"belt-explosions",
			"belt-remnants",
			"campaign-explosions",
			"capsule",
			"capsule-explosions",
			"circuit-network",
			"circuit-network-explosions",
			"circuit-network-remnants",
			"cliffs",
			"corpses",
			"creatures",
			"decorative-explosions",
			"defensive-structure",
			"defensive-structure-explosions",
			"defensive-structure-remnants",
			"empty-barrel",
			"enemies",
			"energy",
			"energy-explosions",
			"energy-pipe-distribution",
			"energy-pipe-distribution-explosions",
			"energy-pipe-distribution-remnants",
			"energy-remnants",
			"equipment",
			"explosions",
			"extraction-machine",
			"extraction-machine-explosions",
			"extraction-machine-remnants",
			"fill-barrel",
			"fluid",
			"fluid-recipes",
			"generic-remnants",
			"grass",
			"ground-explosions",
			"gun",
			"gun-explosions",
			"hit-effects",
			"inserter",
			"inserter-explosions",
			"inserter-remnants",
			"intermediate-product",
			"logistic-network",
			"logistic-network-explosions",
			"logistic-network-remnants",
			"military-equipment",
			"module",
			"module-explosions",
			"other",
			"particles",
			"production-machine",
			"production-machine-explosions",
			"production-machine-remnants",
			"raw-material",
			"raw-resource",
			"remnants",
			"rock-explosions",
			"science-pack",
			"scorchmarks",
			"smelting-machine",
			"smelting-machine-explosions",
			"smelting-machine-remnants",
			"space-related",
			"storage",
			"storage-explosions",
			"storage-remnants",
			"terrain",
			"tool",
			"train-transport",
			"train-transport-explosions",
			"train-transport-remnants",
			"transport",
			"transport-explosions",
			"transport-remnants",
			"tree-explosions",
			"trees",
			"virtual-signal",
			"virtual-signal-color",
			"virtual-signal-letter",
			"virtual-signal-number",
			"virtual-signal-special"
		};

		inline data_container<std::string> items = {
			"accumulator",
			"advanced-circuit",
			"arithmetic-combinator",
			"artillery-turret",
			"assembling-machine-1",
			"assembling-machine-2",
			"assembling-machine-3",
			"battery",
			"battery-equipment",
			"battery-mk2-equipment",
			"beacon",
			"belt-immunity-equipment",
			"big-electric-pole",
			"boiler",
			"burner-generator",
			"burner-inserter",
			"burner-mining-drill",
			"centrifuge",
			"chemical-plant",
			"coal",
			"coin",
			"concrete",
			"constant-combinator",
			"construction-robot",
			"copper-cable",
			"copper-ore",
			"copper-plate",
			"crude-oil-barrel",
			"decider-combinator",
			"discharge-defense-equipment",
			"electric-energy-interface",
			"electric-engine-unit",
			"electric-furnace",
			"electric-mining-drill",
			"electronic-circuit",
			"empty-barrel",
			"energy-shield-equipment",
			"energy-shield-mk2-equipment",
			"engine-unit",
			"exoskeleton-equipment",
			"explosives",
			"express-loader",
			"express-splitter",
			"express-transport-belt",
			"express-underground-belt",
			"fast-inserter",
			"fast-loader",
			"fast-splitter",
			"fast-transport-belt",
			"fast-underground-belt",
			"filter-inserter",
			"flamethrower-turret",
			"flying-robot-frame",
			"fusion-reactor-equipment",
			"gate",
			"green-wire",
			"gun-turret",
			"hazard-concrete",
			"heat-exchanger",
			"heat-interface",
			"heat-pipe",
			"heavy-oil-barrel",
			"infinity-chest",
			"infinity-pipe",
			"inserter",
			"iron-chest",
			"iron-gear-wheel",
			"iron-ore",
			"iron-plate",
			"iron-stick",
			"item-unknown",
			"lab",
			"land-mine",
			"landfill",
			"laser-turret",
			"light-oil-barrel",
			"linked-belt",
			"linked-chest",
			"loader",
			"logistic-chest-active-provider",
			"logistic-chest-buffer",
			"logistic-chest-passive-provider",
			"logistic-chest-requester",
			"logistic-chest-storage",
			"logistic-robot",
			"long-handed-inserter",
			"low-density-structure",
			"lubricant-barrel",
			"medium-electric-pole",
			"night-vision-equipment",
			"nuclear-fuel",
			"nuclear-reactor",
			"offshore-pump",
			"oil-refinery",
			"personal-laser-defense-equipment",
			"personal-roboport-equipment",
			"personal-roboport-mk2-equipment",
			"petroleum-gas-barrel",
			"pipe",
			"pipe-to-ground",
			"plastic-bar",
			"player-port",
			"power-switch",
			"processing-unit",
			"programmable-speaker",
			"pump",
			"pumpjack",
			"radar",
			"rail-chain-signal",
			"rail-signal",
			"red-wire",
			"refined-concrete",
			"refined-hazard-concrete",
			"roboport",
			"rocket-control-unit",
			"rocket-fuel",
			"rocket-part",
			"rocket-silo",
			"satellite",
			"simple-entity-with-force",
			"simple-entity-with-owner",
			"small-electric-pole",
			"small-lamp",
			"solar-panel",
			"solar-panel-equipment",
			"solid-fuel",
			"splitter",
			"stack-filter-inserter",
			"stack-inserter",
			"steam-engine",
			"steam-turbine",
			"steel-chest",
			"steel-furnace",
			"steel-plate",
			"stone",
			"stone-brick",
			"stone-furnace",
			"stone-wall",
			"storage-tank",
			"substation",
			"sulfur",
			"sulfuric-acid-barrel",
			"train-stop",
			"transport-belt",
			"underground-belt",
			"uranium-235",
			"uranium-238",
			"uranium-fuel-cell",
			"uranium-ore",
			"used-up-uranium-fuel-cell",
			"water-barrel",
			"wood"
		};

		inline data_container<std::string> fluids = {
			"crude-oil",
			"fluid-unknown",
			"heavy-oil",
			"light-oil",
			"lubricant",
			"petroleum-gas",
			"steam",
			"sulfuric-acid"
		};

		inline data_container<std::string> recipes = {
			"accumulator",
			"advanced-circuit",
			"advanced-oil-processing",
			"arithmetic-combinator",
			"artillery-shell",
			"artillery-targeting-remote",
			"artillery-turret",
			"artillery-wagon",
			"assembling-machine-1",
			"assembling-machine-2",
			"assembling-machine-3",
			"atomic-bomb",
			"automation-science-pack",
			"basic-oil-processing",
			"battery",
			"battery-equipment",
			"battery-mk2-equipment",
			"beacon",
			"belt-immunity-equipment",
			"big-electric-pole",
			"boiler",
			"burner-inserter",
			"burner-mining-drill",
			"cannon-shell",
			"car",
			"cargo-wagon",
			"centrifuge",
			"chemical-plant",
			"chemical-science-pack",
			"cliff-explosives",
			"cluster-grenade",
			"coal-liquefaction",
			"combat-shotgun",
			"concrete",
			"constant-combinator",
			"construction-robot",
			"copper-cable",
			"copper-plate",
			"decider-combinator",
			"defender-capsule",
			"destroyer-capsule",
			"discharge-defense-equipment",
			"discharge-defense-remote",
			"distractor-capsule",
			"effectivity-module",
			"effectivity-module-2",
			"effectivity-module-3",
			"electric-energy-interface",
			"electric-engine-unit",
			"electric-furnace",
			"electric-mining-drill",
			"electronic-circuit",
			"empty-barrel",
			"empty-crude-oil-barrel",
			"empty-heavy-oil-barrel",
			"empty-light-oil-barrel",
			"empty-lubricant-barrel",
			"empty-petroleum-gas-barrel",
			"empty-sulfuric-acid-barrel",
			"empty-water-barrel",
			"energy-shield-equipment",
			"energy-shield-mk2-equipment",
			"engine-unit",
			"exoskeleton-equipment",
			"explosive-cannon-shell",
			"explosive-rocket",
			"explosive-uranium-cannon-shell",
			"explosives",
			"express-loader",
			"express-splitter",
			"express-transport-belt",
			"express-underground-belt",
			"fast-inserter",
			"fast-loader",
			"fast-splitter",
			"fast-transport-belt",
			"fast-underground-belt",
			"fill-crude-oil-barrel",
			"fill-heavy-oil-barrel",
			"fill-light-oil-barrel",
			"fill-lubricant-barrel",
			"fill-petroleum-gas-barrel",
			"fill-sulfuric-acid-barrel",
			"fill-water-barrel",
			"filter-inserter",
			"firearm-magazine",
			"flamethrower",
			"flamethrower-ammo",
			"flamethrower-turret",
			"fluid-wagon",
			"flying-robot-frame",
			"fusion-reactor-equipment",
			"gate",
			"green-wire",
			"grenade",
			"gun-turret",
			"hazard-concrete",
			"heat-exchanger",
			"heat-pipe",
			"heavy-armor",
			"heavy-oil-cracking",
			"inserter",
			"iron-chest",
			"iron-gear-wheel",
			"iron-plate",
			"iron-stick",
			"kovarex-enrichment-process",
			"lab",
			"land-mine",
			"landfill",
			"laser-turret",
			"light-armor",
			"light-oil-cracking",
			"loader",
			"locomotive",
			"logistic-chest-active-provider",
			"logistic-chest-buffer",
			"logistic-chest-passive-provider",
			"logistic-chest-requester",
			"logistic-chest-storage",
			"logistic-robot",
			"logistic-science-pack",
			"long-handed-inserter",
			"low-density-structure",
			"lubricant",
			"medium-electric-pole",
			"military-science-pack",
			"modular-armor",
			"night-vision-equipment",
			"nuclear-fuel",
			"nuclear-fuel-reprocessing",
			"nuclear-reactor",
			"offshore-pump",
			"oil-refinery",
			"personal-laser-defense-equipment",
			"personal-roboport-equipment",
			"personal-roboport-mk2-equipment",
			"piercing-rounds-magazine",
			"piercing-shotgun-shell",
			"pipe",
			"pipe-to-ground",
			"pistol",
			"plastic-bar",
			"poison-capsule",
			"power-armor",
			"power-armor-mk2",
			"power-switch",
			"processing-unit",
			"production-science-pack",
			"productivity-module",
			"productivity-module-2",
			"productivity-module-3",
			"programmable-speaker",
			"pump",
			"pumpjack",
			"radar",
			"rail",
			"rail-chain-signal",
			"rail-signal",
			"red-wire",
			"refined-concrete",
			"refined-hazard-concrete",
			"repair-pack",
			"roboport",
			"rocket",
			"rocket-control-unit",
			"rocket-fuel",
			"rocket-launcher",
			"rocket-part",
			"rocket-silo",
			"satellite",
			"shotgun",
			"shotgun-shell",
			"slowdown-capsule",
			"small-electric-pole",
			"small-lamp",
			"solar-panel",
			"solar-panel-equipment",
			"solid-fuel-from-heavy-oil",
			"solid-fuel-from-light-oil",
			"solid-fuel-from-petroleum-gas",
			"speed-module",
			"speed-module-2",
			"speed-module-3",
			"spidertron",
			"spidertron-remote",
			"splitter",
			"stack-filter-inserter",
			"stack-inserter",
			"steam-engine",
			"steam-turbine",
			"steel-chest",
			"steel-furnace",
			"steel-plate",
			"stone-brick",
			"stone-furnace",
			"stone-wall",
			"storage-tank",
			"submachine-gun",
			"substation",
			"sulfur",
			"sulfuric-acid",
			"tank",
			"train-stop",
			"transport-belt",
			"underground-belt",
			"uranium-cannon-shell",
			"uranium-fuel-cell",
			"uranium-processing",
			"uranium-rounds-magazine",
			"utility-science-pack"
		};
	}

	namespace actual {
		inline data_container<std::string> recipe_category = data_container<std::string>(0).sname("recipe_category");
		inline data_container<std::string> item_subgroup = data_container<std::string>(0).sname("item_subgroup");
		inline data_container<std::string> items = data_container<std::string>(0).sname("item");
		inline data_container<std::string> fluids = data_container<std::string>(0).sname("fluid");
		inline data_container<std::string> recipes = data_container<std::string>(0).sname("recipe");

		inline data_container<std::string> copy(data_container<std::string> vec, std::string prev_name) {
			data_container<std::string> nw(vec.size());
			for (int i = 0; i < vec.size(); i++) {
				nw[i] = vec[i];
			}
			return nw.sname(prev_name);
		}

		inline void prot(std::string proto, std::string id) {
			if (proto == "item") {
				items.push_back(id);
			}
			else if (proto == "fluid") {
				fluids.push_back(id);
			}
			else if (proto == "item_subgroup") {
				item_subgroup.push_back(id);
			}
			else if (proto == "recipe") {
				recipes.push_back(id);
			}
			else if (proto == "recipe_category") {
				recipes.push_back(id);
			}
			else {
				std::cout << "Unsuported virual element!" << std::endl;
			}
		}

		inline void addObject(e_component_type etype, std::string id) {
			switch (etype)
			{
			case e_component_type::c_item:
				items.push_back(id);
				break;
			case e_component_type::c_recipe:
				recipes.push_back(id);
				break;
			default:
				break;
			}
		}

		inline void reset() {
			recipe_category.clear();
			item_subgroup.clear();
			items.clear();
			fluids.clear();
		}

		inline void def() {
			factorio::actual::reset();
			factorio::actual::recipe_category = copy(factorio::source::recipe_category, 
				factorio::actual::recipe_category.name);
			factorio::actual::item_subgroup = copy(factorio::source::item_subgroup,
				factorio::actual::item_subgroup.name);
			factorio::actual::items = copy(factorio::source::items,
				factorio::actual::items.name);
			factorio::actual::fluids = copy(factorio::source::fluids,
				factorio::actual::fluids.name);
			factorio::actual::recipes = copy(factorio::source::recipes,
				factorio::actual::recipes.name);
		}
	}
}