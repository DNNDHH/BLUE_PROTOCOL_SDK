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
	 * Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetOverlineVisibility
	 */
	struct USkillBuffInfoItem_C_SetOverlineVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetSkillBuff
	 */
	struct USkillBuffInfoItem_C_SetSkillBuff_Params
	{
	public:
		struct FBuffIconAssetData                                  InSkillBuffData;                                         // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
