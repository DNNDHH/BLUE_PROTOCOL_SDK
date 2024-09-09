#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_StunReaction_LevelDiff.ST_StunReaction_LevelDiff
	 * Size -> 0x0030
	 */
	struct FST_StunReaction_LevelDiff
	{
	public:
		TArray<E_DamageReaction>                                   Weak_60_85D7DBD7416E8C5C65A382829F9E3A65;                // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<E_DamageReaction>                                   Default_59_E9330CC748110AC5F6938690D457264A;             // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<E_DamageReaction>                                   Strong_61_2F591028420BC240BE4CF695B25A52C3;              // 0x0020(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
