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
	 * Function ArmorList.ArmorList_C.Construct
	 */
	struct UArmorList_C_Construct_Params
	{	};

	/**
	 * Function ArmorList.ArmorList_C.SetData
	 */
	struct UArmorList_C_SetData_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InOwnItemInfo;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ArmorList.ArmorList_C.PreConstruct
	 */
	struct UArmorList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ArmorList.ArmorList_C.ExecuteUbergraph_ArmorList
	 */
	struct UArmorList_C_ExecuteUbergraph_ArmorList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
